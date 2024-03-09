// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:11 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function Basic.UAENetActor.ReceivedPlayerActiveRegionsChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bEnter                         (Parm, ZeroConstructor, IsPlainOldData)

void AUAENetActor::ReceivedPlayerActiveRegionsChanged(bool bEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAENetActor.ReceivedPlayerActiveRegionsChanged");

	AUAENetActor_ReceivedPlayerActiveRegionsChanged_Params params;
	params.bEnter = bEnter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.SetAssociation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AssociationType                (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemAssociation        Association                    (Parm)

void UItemHandleBase::SetAssociation(int AssociationType, const struct FItemAssociation& Association)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.SetAssociation");

	UItemHandleBase_SetAssociation_Params params;
	params.AssociationType = AssociationType;
	params.Association = Association;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.RemoveAssociation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AssociationType                (Parm, ZeroConstructor, IsPlainOldData)

void UItemHandleBase::RemoveAssociation(int AssociationType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.RemoveAssociation");

	UItemHandleBase_RemoveAssociation_Params params;
	params.AssociationType = AssociationType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.Init
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           InDefineID                     (Parm)

void UItemHandleBase::Init(const struct FItemDefineID& InDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.Init");

	UItemHandleBase_Init_Params params;
	params.InDefineID = InDefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.GetDefineID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemDefineID UItemHandleBase::GetDefineID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetDefineID");

	UItemHandleBase_GetDefineID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.GetAssociationMap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<int, struct FItemAssociation> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<int, struct FItemAssociation> UItemHandleBase::GetAssociationMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetAssociationMap");

	UItemHandleBase_GetAssociationMap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.GetAssociationListByTargetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FItemAssociation> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemAssociation> UItemHandleBase::GetAssociationListByTargetType(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetAssociationListByTargetType");

	UItemHandleBase_GetAssociationListByTargetType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.GetAssociationByTargetDefineID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           TargetDefineID                 (Parm)
// struct FItemAssociation        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemAssociation UItemHandleBase::GetAssociationByTargetDefineID(const struct FItemDefineID& TargetDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetAssociationByTargetDefineID");

	UItemHandleBase_GetAssociationByTargetDefineID_Params params;
	params.TargetDefineID = TargetDefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.GetAssociation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            AssociationType                (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemAssociation        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemAssociation UItemHandleBase::GetAssociation(int AssociationType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetAssociation");

	UItemHandleBase_GetAssociation_Params params;
	params.AssociationType = AssociationType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.Constuct
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           InDefineID                     (ConstParm, Parm, OutParm, ReferenceParm)

void UItemHandleBase::Constuct(const struct FItemDefineID& InDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.Constuct");

	UItemHandleBase_Constuct_Params params;
	params.InDefineID = InDefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.AddAssociation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AssociationType                (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemAssociation        Association                    (Parm)

void UItemHandleBase::AddAssociation(int AssociationType, const struct FItemAssociation& Association)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.AddAssociation");

	UItemHandleBase_AddAssociation_Params params;
	params.AssociationType = AssociationType;
	params.Association = Association;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BattleItemHandleBase.UpdateAttributeModify
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandleBase::UpdateAttributeModify(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.UpdateAttributeModify");

	UBattleItemHandleBase_UpdateAttributeModify_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BattleItemHandleBase.UnEquip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::UnEquip()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.UnEquip");

	UBattleItemHandleBase_UnEquip_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HanldePickupAssociationData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleItemAdditionalData> PickupAdditionalData           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HanldePickupAssociationData(TArray<struct FBattleItemAdditionalData> PickupAdditionalData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HanldePickupAssociationData");

	UBattleItemHandleBase_HanldePickupAssociationData_Params params;
	params.PickupAdditionalData = PickupAdditionalData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HanldeDropAssociationData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HanldeDropAssociationData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HanldeDropAssociationData");

	UBattleItemHandleBase_HanldeDropAssociationData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HanldeCleared
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HanldeCleared()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HanldeCleared");

	UBattleItemHandleBase_HanldeCleared_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleUse
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemUseTarget    Target                         (Parm)
// EBattleItemUseReason           Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleUse(const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleUse");

	UBattleItemHandleBase_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandlePickup
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemPickupInfo   PickupInfo                     (Parm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandlePickup(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandlePickup");

	UBattleItemHandleBase_HandlePickup_Params params;
	params.ItemContainer = ItemContainer;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleEnable
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleEnable(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleEnable");

	UBattleItemHandleBase_HandleEnable_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleDrop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InCount                        (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason          Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleDrop(int InCount, EBattleItemDropReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleDrop");

	UBattleItemHandleBase_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleDisuse
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleItemDisuseReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleDisuse(EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleDisuse");

	UBattleItemHandleBase_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleChangeItemStoreArea
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemStoreArea                 InItemStoreArea                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleChangeItemStoreArea(EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleChangeItemStoreArea");

	UBattleItemHandleBase_HandleChangeItemStoreArea_Params params;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleBindToTargetItem
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleBindToTargetItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleBindToTargetItem");

	UBattleItemHandleBase_HandleBindToTargetItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.GetWorldInternal
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UBattleItemHandleBase::GetWorldInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.GetWorldInternal");

	UBattleItemHandleBase_GetWorldInternal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.GetCurrentWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UBattleItemHandleBase::GetCurrentWorld()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.GetCurrentWorld");

	UBattleItemHandleBase_GetCurrentWorld_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.ExtractItemData
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBattleItemHandleBase::ExtractItemData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.ExtractItemData");

	UBattleItemHandleBase_ExtractItemData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.ClearAdditionalData
// (Final, Native, Public)

void UBattleItemHandleBase::ClearAdditionalData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.ClearAdditionalData");

	UBattleItemHandleBase_ClearAdditionalData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BattleItemHandleBase.CheckCanUse
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemUseTarget    Target                         (Parm)
// EBattleItemUseReason           Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::CheckCanUse(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.CheckCanUse");

	UBattleItemHandleBase_CheckCanUse_Params params;
	params.ItemContainer = ItemContainer;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAENetPoolActor.OnBPRespawned
// (Native, Event, Public, BlueprintEvent)

void AUAENetPoolActor::OnBPRespawned()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAENetPoolActor.OnBPRespawned");

	AUAENetPoolActor_OnBPRespawned_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAENetPoolActor.OnBPRecycled
// (Native, Event, Public, BlueprintEvent)

void AUAENetPoolActor::OnBPRecycled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAENetPoolActor.OnBPRecycled");

	AUAENetPoolActor_OnBPRecycled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.Tick
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::Tick(class UActorComponent* BuffSystemComponent, int InstID, float DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.Tick");

	USTBuffAction_Tick_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.SetEnabled
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::SetEnabled(class UActorComponent* BuffSystemComponent, int InstID, bool Enabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.SetEnabled");

	USTBuffAction_SetEnabled_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;
	params.Enabled = Enabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.ResetExecute
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreEnd                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::ResetExecute(class UActorComponent* BuffSystemComponent, int InstID, bool IgnoreEnd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.ResetExecute");

	USTBuffAction_ResetExecute_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;
	params.IgnoreEnd = IgnoreEnd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnTick
// (Native, Protected)
// Parameters:
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::OnTick(float DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnTick");

	USTBuffAction_OnTick_Params params;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnResetExecute
// (Native, Protected)
// Parameters:
// bool                           IgnoreEnd                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::OnResetExecute(bool IgnoreEnd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnResetExecute");

	USTBuffAction_OnResetExecute_Params params;
	params.IgnoreEnd = IgnoreEnd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnInitialize
// (Native, Protected)

void USTBuffAction::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnInitialize");

	USTBuffAction_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnExecute
// (Native, Protected)

void USTBuffAction::OnExecute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnExecute");

	USTBuffAction_OnExecute_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnEnd
// (Native, Protected)

void USTBuffAction::OnEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnEnd");

	USTBuffAction_OnEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnDestroy
// (Native, Protected)

void USTBuffAction::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnDestroy");

	USTBuffAction_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnCheckLinkActionEnabled
// (Native, Protected)

void USTBuffAction::OnCheckLinkActionEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnCheckLinkActionEnabled");

	USTBuffAction_OnCheckLinkActionEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnChangeNotify
// (Native, Protected)

void USTBuffAction::OnChangeNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnChangeNotify");

	USTBuffAction_OnChangeNotify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.Initialize
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::Initialize(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.Initialize");

	USTBuffAction_Initialize_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.GetRealOwnerRole
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> USTBuffAction::GetRealOwnerRole()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.GetRealOwnerRole");

	USTBuffAction_GetRealOwnerRole_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffAction.GetOwner
// (Final, Native, Protected)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTBuffAction::GetOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.GetOwner");

	USTBuffAction_GetOwner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffAction.GetCauser
// (Final, Native, Protected)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTBuffAction::GetCauser()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.GetCauser");

	USTBuffAction_GetCauser_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffAction.End
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::End(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.End");

	USTBuffAction_End_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.Destroy
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::Destroy(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.Destroy");

	USTBuffAction_Destroy_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.CheckLinkActionEnabled
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::CheckLinkActionEnabled(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.CheckLinkActionEnabled");

	USTBuffAction_CheckLinkActionEnabled_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.ChangeNotify
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::ChangeNotify(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.ChangeNotify");

	USTBuffAction_ChangeNotify_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition.OnInitialize
// (Native, Protected)

void USTBuffCondition::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.OnInitialize");

	USTBuffCondition_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition.OnDestroy
// (Native, Protected)

void USTBuffCondition::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.OnDestroy");

	USTBuffCondition_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition.GetOwner
// (Final, Native, Protected)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTBuffCondition::GetOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.GetOwner");

	USTBuffCondition_GetOwner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffCondition.GetCauser
// (Final, Native, Protected)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTBuffCondition::GetCauser()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.GetCauser");

	USTBuffCondition_GetCauser_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffCondition.Copy
// (Native, Public)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USTBuffCondition*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBuffCondition* USTBuffCondition::Copy(class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.Copy");

	USTBuffCondition_Copy_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffCondition.CheckIsTrue
// (Native, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffCondition::CheckIsTrue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.CheckIsTrue");

	USTBuffCondition_CheckIsTrue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.SetBuffExpiry
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpirySeconds                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::SetBuffExpiry(const struct FName& BuffName, float ExpirySeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.SetBuffExpiry");

	USTBaseBuffSystemComponent_SetBuffExpiry_Params params;
	params.BuffName = BuffName;
	params.ExpirySeconds = ExpirySeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.ResetForDeath
// (Final, Native, Public)

void USTBaseBuffSystemComponent::ResetForDeath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ResetForDeath");

	USTBaseBuffSystemComponent_ResetForDeath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.RepBuffSyncList
// (Final, Native, Public)

void USTBaseBuffSystemComponent::RepBuffSyncList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.RepBuffSyncList");

	USTBaseBuffSystemComponent_RepBuffSyncList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.RemoveBuffWithCauser
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             pCauser                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::RemoveBuffWithCauser(const struct FName& BuffName, bool RemoveLayerOnly, class AController* pCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.RemoveBuffWithCauser");

	USTBaseBuffSystemComponent_RemoveBuffWithCauser_Params params;
	params.BuffName = BuffName;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.pCauser = pCauser;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.RemoveBuffByID
// (Final, Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             pCauser                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::RemoveBuffByID(int BuffID, bool RemoveLayerOnly, class AController* pCauser, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.RemoveBuffByID");

	USTBaseBuffSystemComponent_RemoveBuffByID_Params params;
	params.BuffID = BuffID;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.pCauser = pCauser;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.RemoveBuff
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::RemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.RemoveBuff");

	USTBaseBuffSystemComponent_RemoveBuff_Params params;
	params.BuffName = BuffName;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.RefreshAllBuffs
// (Native, Public)

void USTBaseBuffSystemComponent::RefreshAllBuffs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.RefreshAllBuffs");

	USTBaseBuffSystemComponent_RefreshAllBuffs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.IsBufferMutexed
// (Final, Native, Public)
// Parameters:
// struct FName                   NewBuffName                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::IsBufferMutexed(const struct FName& NewBuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.IsBufferMutexed");

	USTBaseBuffSystemComponent_IsBufferMutexed_Params params;
	params.NewBuffName = NewBuffName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.HasBuffID
// (Final, Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::HasBuffID(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.HasBuffID");

	USTBaseBuffSystemComponent_HasBuffID_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.HasBuff
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::HasBuff(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.HasBuff");

	USTBaseBuffSystemComponent_HasBuff_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.GetPawnOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* USTBaseBuffSystemComponent::GetPawnOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.GetPawnOwner");

	USTBaseBuffSystemComponent_GetPawnOwner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.GetBuffName
// (Final, Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName USTBaseBuffSystemComponent::GetBuffName(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.GetBuffName");

	USTBaseBuffSystemComponent_GetBuffName_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.GetBuffID
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBaseBuffSystemComponent::GetBuffID(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.GetBuffID");

	USTBaseBuffSystemComponent_GetBuffID_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.GetBuffExpiry
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FName                   BuffName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTBaseBuffSystemComponent::GetBuffExpiry(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.GetBuffExpiry");

	USTBaseBuffSystemComponent_GetBuffExpiry_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.GetBuffByName
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// class USTBaseBuff*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBaseBuff* USTBaseBuffSystemComponent::GetBuffByName(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.GetBuffByName");

	USTBaseBuffSystemComponent_GetBuffByName_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.GetActorOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTBaseBuffSystemComponent::GetActorOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.GetActorOwner");

	USTBaseBuffSystemComponent_GetActorOwner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.ClientSimulateRemoveBuff
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClientSimulateRemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClientSimulateRemoveBuff");

	USTBaseBuffSystemComponent_ClientSimulateRemoveBuff_Params params;
	params.BuffName = BuffName;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.ClientSimulateAddBuff
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             BuffCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClientSimulateAddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClientSimulateAddBuff");

	USTBaseBuffSystemComponent_ClientSimulateAddBuff_Params params;
	params.BuffName = BuffName;
	params.BuffCauser = BuffCauser;
	params.LayerCount = LayerCount;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.ClientMulticastSimulateRemoveBuff
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClientMulticastSimulateRemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClientMulticastSimulateRemoveBuff");

	USTBaseBuffSystemComponent_ClientMulticastSimulateRemoveBuff_Params params;
	params.BuffName = BuffName;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.ClientMulticastSimulateAddBuff
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             BuffCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClientMulticastSimulateAddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClientMulticastSimulateAddBuff");

	USTBaseBuffSystemComponent_ClientMulticastSimulateAddBuff_Params params;
	params.BuffName = BuffName;
	params.BuffCauser = BuffCauser;
	params.LayerCount = LayerCount;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.ClientMulticastSetBuffExpiry
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          LeftSecondsAfterNow            (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClientMulticastSetBuffExpiry(const struct FName& BuffName, float LeftSecondsAfterNow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClientMulticastSetBuffExpiry");

	USTBaseBuffSystemComponent_ClientMulticastSetBuffExpiry_Params params;
	params.BuffName = BuffName;
	params.LeftSecondsAfterNow = LeftSecondsAfterNow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.ClearBuff
// (Final, Native, Public)
// Parameters:
// bool                           bDebuff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bGainBuff                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClearBuff(bool bDebuff, bool bGainBuff)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClearBuff");

	USTBaseBuffSystemComponent_ClearBuff_Params params;
	params.bDebuff = bDebuff;
	params.bGainBuff = bGainBuff;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.CheckBuffStatus
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UClass*                  Status                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::CheckBuffStatus(class UClass* Status, bool* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.CheckBuffStatus");

	USTBaseBuffSystemComponent_CheckBuffStatus_Params params;
	params.Status = Status;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// DelegateFunction Basic.STBaseBuffSystemComponent.BuffDetached__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FName                   BuffName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void USTBaseBuffSystemComponent::BuffDetached__DelegateSignature(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBaseBuffSystemComponent.BuffDetached__DelegateSignature");

	USTBaseBuffSystemComponent_BuffDetached__DelegateSignature_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBaseBuffSystemComponent.BuffAttached__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FName                   BuffName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void USTBaseBuffSystemComponent::BuffAttached__DelegateSignature(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBaseBuffSystemComponent.BuffAttached__DelegateSignature");

	USTBaseBuffSystemComponent_BuffAttached__DelegateSignature_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.AddBuffLayer
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            layerNum                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::AddBuffLayer(const struct FName& BuffName, int layerNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.AddBuffLayer");

	USTBaseBuffSystemComponent_AddBuffLayer_Params params;
	params.BuffName = BuffName;
	params.layerNum = layerNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.AddBuffExpiry
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpirySeconds                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::AddBuffExpiry(const struct FName& BuffName, float ExpirySeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.AddBuffExpiry");

	USTBaseBuffSystemComponent_AddBuffExpiry_Params params;
	params.BuffName = BuffName;
	params.ExpirySeconds = ExpirySeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.AddBuffByID
// (Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             BuffCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBaseBuffSystemComponent::AddBuffByID(int BuffID, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.AddBuffByID");

	USTBaseBuffSystemComponent_AddBuffByID_Params params;
	params.BuffID = BuffID;
	params.BuffCauser = BuffCauser;
	params.LayerCount = LayerCount;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.AddBuff
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             BuffCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  CauserActor                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBaseBuffSystemComponent::AddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor, class AActor* CauserActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.AddBuff");

	USTBaseBuffSystemComponent_AddBuff_Params params;
	params.BuffName = BuffName;
	params.BuffCauser = BuffCauser;
	params.LayerCount = LayerCount;
	params.BuffApplierActor = BuffApplierActor;
	params.CauserActor = CauserActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.SetLuaStateWrapper
// (Final, Native, Public)
// Parameters:
// class ULuaStateWrapper*        TLuaStateWrapper               (Parm, ZeroConstructor, IsPlainOldData)

void UUAEGameInstance::SetLuaStateWrapper(class ULuaStateWrapper* TLuaStateWrapper)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.SetLuaStateWrapper");

	UUAEGameInstance_SetLuaStateWrapper_Params params;
	params.TLuaStateWrapper = TLuaStateWrapper;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEGameInstance.OpenAssetLoadLog
// (Final, Exec, Native, Public)

void UUAEGameInstance::OpenAssetLoadLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.OpenAssetLoadLog");

	UUAEGameInstance_OpenAssetLoadLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.UAEGameInstance.OnPreBattleResult__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UUAEGameInstance::OnPreBattleResult__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.UAEGameInstance.OnPreBattleResult__DelegateSignature");

	UUAEGameInstance_OnPreBattleResult__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEGameInstance.LuaLeakDetect
// (Final, Exec, Native, Public, Const)

void UUAEGameInstance::LuaLeakDetect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.LuaLeakDetect");

	UUAEGameInstance_LuaLeakDetect_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEGameInstance.LuaDoString
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 LuaString                      (Parm, ZeroConstructor)

void UUAEGameInstance::LuaDoString(const struct FString& LuaString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.LuaDoString");

	UUAEGameInstance_LuaDoString_Params params;
	params.LuaString = LuaString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEGameInstance.GetWeatherTime
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUAEGameInstance::GetWeatherTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetWeatherTime");

	UUAEGameInstance_GetWeatherTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetWeatherLevelName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEGameInstance::GetWeatherLevelName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetWeatherLevelName");

	UUAEGameInstance_GetWeatherLevelName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetWeatherID
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAEGameInstance::GetWeatherID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetWeatherID");

	UUAEGameInstance_GetWeatherID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetLuaStateWrapper
// (Final, Native, Public)
// Parameters:
// class ULuaStateWrapper*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULuaStateWrapper* UUAEGameInstance::GetLuaStateWrapper()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetLuaStateWrapper");

	UUAEGameInstance_GetLuaStateWrapper_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetLoadWeatherName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InWeatherName                  (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEGameInstance::GetLoadWeatherName(const struct FString& InWeatherName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetLoadWeatherName");

	UUAEGameInstance_GetLoadWeatherName_Params params;
	params.InWeatherName = InWeatherName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetIsHighWeatherLevel
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InWeatherLevelName             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEGameInstance::GetIsHighWeatherLevel(const struct FString& InWeatherLevelName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetIsHighWeatherLevel");

	UUAEGameInstance_GetIsHighWeatherLevel_Params params;
	params.InWeatherLevelName = InWeatherLevelName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetGameID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEGameInstance::GetGameID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetGameID");

	UUAEGameInstance_GetGameID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetDeviceLevel
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAEGameInstance::GetDeviceLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetDeviceLevel");

	UUAEGameInstance_GetDeviceLevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetDataTable_Mod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAEGameInstance::GetDataTable_Mod(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetDataTable_Mod");

	UUAEGameInstance_GetDataTable_Mod_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetDataTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAEGameInstance::GetDataTable(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetDataTable");

	UUAEGameInstance_GetDataTable_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetAssociatedFrontendHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* UUAEGameInstance::GetAssociatedFrontendHUD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetAssociatedFrontendHUD");

	UUAEGameInstance_GetAssociatedFrontendHUD_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.CloseAssetLoadLog
// (Final, Exec, Native, Public)

void UUAEGameInstance::CloseAssetLoadLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.CloseAssetLoadLog");

	UUAEGameInstance_CloseAssetLoadLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.StartTimerToSyncRecordAttrValue
// (Final, Native, Public)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::StartTimerToSyncRecordAttrValue(float Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.StartTimerToSyncRecordAttrValue");

	UAttrModifyComponent_StartTimerToSyncRecordAttrValue_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.SetValueToAttributeSafety
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModifyRecordType               (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::SetValueToAttributeSafety(const struct FString& AttrName, float Value, int ModifyRecordType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.SetValueToAttributeSafety");

	UAttrModifyComponent_SetValueToAttributeSafety_Params params;
	params.AttrName = AttrName;
	params.Value = Value;
	params.ModifyRecordType = ModifyRecordType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.SetOrignalValueToAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::SetOrignalValueToAttribute(const struct FString& AttrName, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.SetOrignalValueToAttribute");

	UAttrModifyComponent_SetOrignalValueToAttribute_Params params;
	params.AttrName = AttrName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.SetAttrModifyStateValue
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::SetAttrModifyStateValue(int Index, bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.SetAttrModifyStateValue");

	UAttrModifyComponent_SetAttrModifyStateValue_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.SetAttributeMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          MaxValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::SetAttributeMaxValue(const struct FString& AttrName, float MaxValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.SetAttributeMaxValue");

	UAttrModifyComponent_SetAttributeMaxValue_Params params;
	params.AttrName = AttrName;
	params.MaxValue = MaxValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.ServerSendExceptionType
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// int                            ExceptionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::ServerSendExceptionType(const struct FString& AttrName, int ExceptionType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.ServerSendExceptionType");

	UAttrModifyComponent_ServerSendExceptionType_Params params;
	params.AttrName = AttrName;
	params.ExceptionType = ExceptionType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.ServerRequestRecordAttrValue
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)

void UAttrModifyComponent::ServerRequestRecordAttrValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.ServerRequestRecordAttrValue");

	UAttrModifyComponent_ServerRequestRecordAttrValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.ResponeAttrValue
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          FinalValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::ResponeAttrValue(const struct FString& AttrName, float FinalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.ResponeAttrValue");

	UAttrModifyComponent_ResponeAttrValue_Params params;
	params.AttrName = AttrName;
	params.FinalValue = FinalValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.RequestAttrValue
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)

void UAttrModifyComponent::RequestAttrValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RequestAttrValue");

	UAttrModifyComponent_RequestAttrValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.RemoveModifyItemFromCache
// (Final, Native, Public)
// Parameters:
// uint32_t                       ModifyUID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::RemoveModifyItemFromCache(uint32_t ModifyUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RemoveModifyItemFromCache");

	UAttrModifyComponent_RemoveModifyItemFromCache_Params params;
	params.ModifyUID = ModifyUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.RemoveAttrListener
// (Final, Native, Public)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// struct FSluaBPVar              Listener                       (Parm)

void UAttrModifyComponent::RemoveAttrListener(const struct FString& AttrName, const struct FSluaBPVar& Listener)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RemoveAttrListener");

	UAttrModifyComponent_RemoveAttrListener_Params params;
	params.AttrName = AttrName;
	params.Listener = Listener;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.RemoveAllDynamicModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::RemoveAllDynamicModifier(bool bForce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RemoveAllDynamicModifier");

	UAttrModifyComponent_RemoveAllDynamicModifier_Params params;
	params.bForce = bForce;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.RegisterModifyAbleAttr
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FAttrRegisterItem> AttrRegists                    (Parm, OutParm, ZeroConstructor)
// bool                           bSetAttrByOrigin               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::RegisterModifyAbleAttr(bool bSetAttrByOrigin, TArray<struct FAttrRegisterItem>* AttrRegists)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RegisterModifyAbleAttr");

	UAttrModifyComponent_RegisterModifyAbleAttr_Params params;
	params.bSetAttrByOrigin = bSetAttrByOrigin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AttrRegists != nullptr)
		*AttrRegists = params.AttrRegists;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.RegistAttrModifyRecordList
// (Final, Native, Public)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// int                            RecordLen                      (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::RegistAttrModifyRecordList(const struct FString& AttrName, int RecordLen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RegistAttrModifyRecordList");

	UAttrModifyComponent_RegistAttrModifyRecordList_Params params;
	params.AttrName = AttrName;
	params.RecordLen = RecordLen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.PushAttrModifyRecordItem
// (Final, Native, Public)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          PreValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurValue                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModifyRecordType               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModifyDesc                     (Parm, ZeroConstructor)

void UAttrModifyComponent::PushAttrModifyRecordItem(const struct FString& AttrName, float PreValue, float CurValue, int ModifyRecordType, const struct FString& ModifyDesc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.PushAttrModifyRecordItem");

	UAttrModifyComponent_PushAttrModifyRecordItem_Params params;
	params.AttrName = AttrName;
	params.PreValue = PreValue;
	params.CurValue = CurValue;
	params.ModifyRecordType = ModifyRecordType;
	params.ModifyDesc = ModifyDesc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.OnRep_ModSimulateSyncList
// (Final, Native, Public)

void UAttrModifyComponent::OnRep_ModSimulateSyncList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.OnRep_ModSimulateSyncList");

	UAttrModifyComponent_OnRep_ModSimulateSyncList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.OnRep_ExceptionAttrModifyRecords
// (Final, Native, Public)

void UAttrModifyComponent::OnRep_ExceptionAttrModifyRecords()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.OnRep_ExceptionAttrModifyRecords");

	UAttrModifyComponent_OnRep_ExceptionAttrModifyRecords_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.OnRep_DynamicModifier
// (Final, Native, Public)

void UAttrModifyComponent::OnRep_DynamicModifier()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.OnRep_DynamicModifier");

	UAttrModifyComponent_OnRep_DynamicModifier_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.OnRep_AttrModifyStateList
// (Final, Native, Public)

void UAttrModifyComponent::OnRep_AttrModifyStateList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.OnRep_AttrModifyStateList");

	UAttrModifyComponent_OnRep_AttrModifyStateList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.AttrModifyComponent.OnNeedSetSpeedOverLimit__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UAttrModifyComponent::OnNeedSetSpeedOverLimit__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.AttrModifyComponent.OnNeedSetSpeedOverLimit__DelegateSignature");

	UAttrModifyComponent_OnNeedSetSpeedOverLimit__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.AttrModifyComponent.OnAttrModifiedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// TArray<struct FAttrAffected>   AffectedAttrS                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAttrModifyComponent::OnAttrModifiedEvent__DelegateSignature(TArray<struct FAttrAffected> AffectedAttrS)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.AttrModifyComponent.OnAttrModifiedEvent__DelegateSignature");

	UAttrModifyComponent_OnAttrModifiedEvent__DelegateSignature_Params params;
	params.AffectedAttrS = AffectedAttrS;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.LuaSetValueToAttributeSafety
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::LuaSetValueToAttributeSafety(const struct FString& AttrName, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.LuaSetValueToAttributeSafety");

	UAttrModifyComponent_LuaSetValueToAttributeSafety_Params params;
	params.AttrName = AttrName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.IsAttrModifyStateValidIndex
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::IsAttrModifyStateValidIndex(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.IsAttrModifyStateValidIndex");

	UAttrModifyComponent_IsAttrModifyStateValidIndex_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.HasDynamicModifier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 AttrModifyId                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::HasDynamicModifier(const struct FString& AttrModifyId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.HasDynamicModifier");

	UAttrModifyComponent_HasDynamicModifier_Params params;
	params.AttrModifyId = AttrModifyId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.HandleExceptionAttrModify
// (Final, Native, Public)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// int                            ExceptionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::HandleExceptionAttrModify(const struct FString& AttrName, int ExceptionType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.HandleExceptionAttrModify");

	UAttrModifyComponent_HandleExceptionAttrModify_Params params;
	params.AttrName = AttrName;
	params.ExceptionType = ExceptionType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.GetSubsystem
// (Final, Native, Public)
// Parameters:
// class UAttrModifyModDataSubsystem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAttrModifyModDataSubsystem* UAttrModifyComponent::GetSubsystem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetSubsystem");

	UAttrModifyComponent_GetSubsystem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetMaxAttrName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAttrModifyComponent::GetMaxAttrName(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetMaxAttrName");

	UAttrModifyComponent_GetMaxAttrName_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttrModifyStateValue
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::GetAttrModifyStateValue(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttrModifyStateValue");

	UAttrModifyComponent_GetAttrModifyStateValue_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttrModifyStateNum
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAttrModifyComponent::GetAttrModifyStateNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttrModifyStateNum");

	UAttrModifyComponent_GetAttrModifyStateNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttrModifyItemByItemName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ItemName                       (Parm, ZeroConstructor)
// struct FAttrModifyItem         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAttrModifyItem UAttrModifyComponent::GetAttrModifyItemByItemName(const struct FString& ItemName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttrModifyItemByItemName");

	UAttrModifyComponent_GetAttrModifyItemByItemName_Params params;
	params.ItemName = ItemName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttributeValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttrModifyComponent::GetAttributeValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttributeValue");

	UAttrModifyComponent_GetAttributeValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttributeOrignalValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttrModifyComponent::GetAttributeOrignalValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttributeOrignalValue");

	UAttrModifyComponent_GetAttributeOrignalValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.EnableAttrModifierByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ModifyConfigIndex              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::EnableAttrModifierByIndex(int ModifyConfigIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.EnableAttrModifierByIndex");

	UAttrModifyComponent_EnableAttrModifierByIndex_Params params;
	params.ModifyConfigIndex = ModifyConfigIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.EnableAttrModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrModifyItemName             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::EnableAttrModifier(const struct FString& AttrModifyItemName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.EnableAttrModifier");

	UAttrModifyComponent_EnableAttrModifier_Params params;
	params.AttrModifyItemName = AttrModifyItemName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.DisableAttrModifierByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ModifyConfigIndex              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::DisableAttrModifierByIndex(int ModifyConfigIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.DisableAttrModifierByIndex");

	UAttrModifyComponent_DisableAttrModifierByIndex_Params params;
	params.ModifyConfigIndex = ModifyConfigIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.DisableAttrModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrModifyItemName             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::DisableAttrModifier(const struct FString& AttrModifyItemName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.DisableAttrModifier");

	UAttrModifyComponent_DisableAttrModifier_Params params;
	params.AttrModifyItemName = AttrModifyItemName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.DisableAllAttrModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::DisableAllAttrModifier(bool bForce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.DisableAllAttrModifier");

	UAttrModifyComponent_DisableAllAttrModifier_Params params;
	params.bForce = bForce;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.ConditionSyncRecordAttrValue
// (Final, Native, Public)

void UAttrModifyComponent::ConditionSyncRecordAttrValue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.ConditionSyncRecordAttrValue");

	UAttrModifyComponent_ConditionSyncRecordAttrValue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.ClientSyncRecordAttrValue
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<struct FAttrDesc>       AttrDescs                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UAttrModifyComponent::ClientSyncRecordAttrValue(TArray<struct FAttrDesc> AttrDescs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.ClientSyncRecordAttrValue");

	UAttrModifyComponent_ClientSyncRecordAttrValue_Params params;
	params.AttrDescs = AttrDescs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.ClientSendRecordData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FAttrModifyRecordItem   RecordItem                     (ConstParm, Parm, ReferenceParm)
// int                            ExceptionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::ClientSendRecordData(const struct FAttrModifyRecordItem& RecordItem, int ExceptionType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.ClientSendRecordData");

	UAttrModifyComponent_ClientSendRecordData_Params params;
	params.RecordItem = RecordItem;
	params.ExceptionType = ExceptionType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.ClearAllAttrModify
// (Final, Native, Public, BlueprintCallable)

void UAttrModifyComponent::ClearAllAttrModify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.ClearAllAttrModify");

	UAttrModifyComponent_ClearAllAttrModify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.AddValueToAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::AddValueToAttribute(const struct FString& AttrName, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddValueToAttribute");

	UAttrModifyComponent_AddValueToAttribute_Params params;
	params.AttrName = AttrName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.AddModifyItemAndCache
// (Final, Native, Public)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// EAttrModifyRefType             CModifyType                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          CValue                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           oldModify                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UAttrModifyComponent::AddModifyItemAndCache(const struct FString& AttrName, EAttrModifyRefType CModifyType, float CValue, bool bEnable, class UObject* Causer, bool oldModify)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddModifyItemAndCache");

	UAttrModifyComponent_AddModifyItemAndCache_Params params;
	params.AttrName = AttrName;
	params.CModifyType = CModifyType;
	params.CValue = CValue;
	params.bEnable = bEnable;
	params.Causer = Causer;
	params.oldModify = oldModify;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.AddDynamicModifier
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAttrModifyItem         AttrModifyItem                 (Parm, OutParm)
// bool                           RepOnlyOwner                   (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::AddDynamicModifier(bool RepOnlyOwner, struct FAttrModifyItem* AttrModifyItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddDynamicModifier");

	UAttrModifyComponent_AddDynamicModifier_Params params;
	params.RepOnlyOwner = RepOnlyOwner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AttrModifyItem != nullptr)
		*AttrModifyItem = params.AttrModifyItem;
}


// Function Basic.AttrModifyComponent.AddBModifyAndCacheWithCParam
// (Final, Native, Public)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// EAttrModifyRefType             CModifyType                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          CValue                         (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UAttrModifyComponent::AddBModifyAndCacheWithCParam(const struct FString& AttrName, EAttrModifyRefType CModifyType, float CValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddBModifyAndCacheWithCParam");

	UAttrModifyComponent_AddBModifyAndCacheWithCParam_Params params;
	params.AttrName = AttrName;
	params.CModifyType = CModifyType;
	params.CValue = CValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.AddBModifyAndCache
// (Final, Native, Public)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// EAttrOperator                  ModifyType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UAttrModifyComponent::AddBModifyAndCache(const struct FString& AttrName, EAttrOperator ModifyType, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddBModifyAndCache");

	UAttrModifyComponent_AddBModifyAndCache_Params params;
	params.AttrName = AttrName;
	params.ModifyType = ModifyType;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.AddAttrListener
// (Final, Native, Public)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// struct FSluaBPVar              Listener                       (Parm)

void UAttrModifyComponent::AddAttrListener(const struct FString& AttrName, const struct FSluaBPVar& Listener)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddAttrListener");

	UAttrModifyComponent_AddAttrListener_Params params;
	params.AttrName = AttrName;
	params.Listener = Listener;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyInterface.SetAttrValue
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          NewVal                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyInterface::SetAttrValue(const struct FString& AttrName, float NewVal, int Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.SetAttrValue");

	UAttrModifyInterface_SetAttrValue_Params params;
	params.AttrName = AttrName;
	params.NewVal = NewVal;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyInterface.RequestAttrValue
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)

void UAttrModifyInterface::RequestAttrValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.RequestAttrValue");

	UAttrModifyInterface_RequestAttrValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyInterface.RegisterModifiedAttributes
// (Native, Public, BlueprintCallable)

void UAttrModifyInterface::RegisterModifiedAttributes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.RegisterModifiedAttributes");

	UAttrModifyInterface_RegisterModifiedAttributes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyInterface.GetAttrValue
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttrModifyInterface::GetAttrValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.GetAttrValue");

	UAttrModifyInterface_GetAttrValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.GetAttrModifyRelevantActors
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UAttrModifyInterface::GetAttrModifyRelevantActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.GetAttrModifyRelevantActors");

	UAttrModifyInterface_GetAttrModifyRelevantActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.GetAttrModifyComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAttrModifyComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAttrModifyComponent* UAttrModifyInterface::GetAttrModifyComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.GetAttrModifyComponent");

	UAttrModifyInterface_GetAttrModifyComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.GetAttributeValue
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttrModifyInterface::GetAttributeValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.GetAttributeValue");

	UAttrModifyInterface_GetAttributeValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.AddAttrValue
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          AddVal                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyInterface::AddAttrValue(const struct FString& AttrName, float AddVal, int Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.AddAttrValue");

	UAttrModifyInterface_AddAttrValue_Params params;
	params.AttrName = AttrName;
	params.AddVal = AddVal;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BPClassManager.ModifyClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InNativeClass                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModTag                         (Parm, ZeroConstructor)

void UBPClassManager::ModifyClass(class UClass* InNativeClass, const struct FString& ModTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.ModifyClass");

	UBPClassManager_ModifyClass_Params params;
	params.InNativeClass = InNativeClass;
	params.ModTag = ModTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BPClassManager.GetUClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            KeyIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPClassManager::GetUClass(int KeyIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.GetUClass");

	UBPClassManager_GetUClass_Params params;
	params.KeyIndex = KeyIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPClassManager.GetBPClassOverrideByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ClassTagName                   (Parm, ZeroConstructor)
// struct FString                 ModTag                         (Parm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPClassManager::GetBPClassOverrideByName(const struct FString& ClassTagName, const struct FString& ModTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.GetBPClassOverrideByName");

	UBPClassManager_GetBPClassOverrideByName_Params params;
	params.ClassTagName = ClassTagName;
	params.ModTag = ModTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPClassManager.GetBPClassOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InNativeClass                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModTag                         (Parm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPClassManager::GetBPClassOverride(class UClass* InNativeClass, const struct FString& ModTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.GetBPClassOverride");

	UBPClassManager_GetBPClassOverride_Params params;
	params.InNativeClass = InNativeClass;
	params.ModTag = ModTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPClassManager.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBPClassManager*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBPClassManager* UBPClassManager::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.Get");

	UBPClassManager_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.DelayReplicationInterface.ReSendRPCAfterBeginPlay
// (Native, Public, BlueprintCallable)

void UDelayReplicationInterface::ReSendRPCAfterBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.DelayReplicationInterface.ReSendRPCAfterBeginPlay");

	UDelayReplicationInterface_ReSendRPCAfterBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.DelayReplicationInterface.ReCallRepAfterBeginPlay
// (Native, Public, BlueprintCallable)

void UDelayReplicationInterface::ReCallRepAfterBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.DelayReplicationInterface.ReCallRepAfterBeginPlay");

	UDelayReplicationInterface_ReCallRepAfterBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemContainerInterface.GetOwningObject
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UItemContainerInterface::GetOwningObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetOwningObject");

	UItemContainerInterface_GetOwningObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerInterface.GetItemHandleListByDefineID
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class UItemHandleBase*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UItemHandleBase*> UItemContainerInterface::GetItemHandleListByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetItemHandleListByDefineID");

	UItemContainerInterface_GetItemHandleListByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerInterface.GetItemHandleByDefineID
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UItemHandleBase*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemHandleBase* UItemContainerInterface::GetItemHandleByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetItemHandleByDefineID");

	UItemContainerInterface_GetItemHandleByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerInterface.GetItemDefineIDList
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FItemDefineID>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemDefineID> UItemContainerInterface::GetItemDefineIDList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetItemDefineIDList");

	UItemContainerInterface_GetItemDefineIDList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerInterface.GetFirstItemDefineBySpecificID
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemDefineID UItemContainerInterface::GetFirstItemDefineBySpecificID(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetFirstItemDefineBySpecificID");

	UItemContainerInterface_GetFirstItemDefineBySpecificID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerOwnerInterface.NotifyUpdateCapacity
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          inBackPackCapacity             (Parm, ZeroConstructor, IsPlainOldData)
// float                          inOccupiedCapacity             (Parm, ZeroConstructor, IsPlainOldData)

void UItemContainerOwnerInterface::NotifyUpdateCapacity(float inBackPackCapacity, float inOccupiedCapacity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerOwnerInterface.NotifyUpdateCapacity");

	UItemContainerOwnerInterface_NotifyUpdateCapacity_Params params;
	params.inBackPackCapacity = inBackPackCapacity;
	params.inOccupiedCapacity = inOccupiedCapacity;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemContainerOwnerInterface.NotifyItemUpdated
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemData         ItemData                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemContainerOwnerInterface::NotifyItemUpdated(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerOwnerInterface.NotifyItemUpdated");

	UItemContainerOwnerInterface_NotifyItemUpdated_Params params;
	params.DefineID = DefineID;
	params.ItemData = ItemData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemContainerOwnerInterface.NotifyItemRemoved
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemData         ItemData                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemContainerOwnerInterface::NotifyItemRemoved(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerOwnerInterface.NotifyItemRemoved");

	UItemContainerOwnerInterface_NotifyItemRemoved_Params params;
	params.DefineID = DefineID;
	params.ItemData = ItemData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemContainerOwnerInterface.NotifyItemEmpty
// (Native, Event, Public, BlueprintEvent)

void UItemContainerOwnerInterface::NotifyItemEmpty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerOwnerInterface.NotifyItemEmpty");

	UItemContainerOwnerInterface_NotifyItemEmpty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemContainerOwnerInterface.NotifyItemAdded
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemData         ItemData                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemContainerOwnerInterface::NotifyItemAdded(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerOwnerInterface.NotifyItemAdded");

	UItemContainerOwnerInterface_NotifyItemAdded_Params params;
	params.DefineID = DefineID;
	params.ItemData = ItemData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventBridgeFunction.UnRegisterEventByTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ObjContext                     (Parm, ZeroConstructor, IsPlainOldData)

void ULuaEventBridgeFunction::UnRegisterEventByTarget(class UObject* ObjContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridgeFunction.UnRegisterEventByTarget");

	ULuaEventBridgeFunction_UnRegisterEventByTarget_Params params;
	params.ObjContext = ObjContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventBridgeFunction.UnRegisterEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FEventType                     (Parm, ZeroConstructor)
// struct FString                 EventID                        (Parm, ZeroConstructor)
// class UObject*                 ObjContext                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            EventHandle                    (Parm, ZeroConstructor, IsPlainOldData)

void ULuaEventBridgeFunction::UnRegisterEvent(const struct FString& FEventType, const struct FString& EventID, class UObject* ObjContext, int EventHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridgeFunction.UnRegisterEvent");

	ULuaEventBridgeFunction_UnRegisterEvent_Params params;
	params.FEventType = FEventType;
	params.EventID = EventID;
	params.ObjContext = ObjContext;
	params.EventHandle = EventHandle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventBridgeFunction.RegistEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventType                      (Parm, ZeroConstructor)
// struct FString                 EventID                        (Parm, ZeroConstructor)
// class UObject*                 ObjContext                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULuaEventBridgeFunction::RegistEvent(const struct FString& EventType, const struct FString& EventID, class UObject* ObjContext, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridgeFunction.RegistEvent");

	ULuaEventBridgeFunction_RegistEvent_Params params;
	params.EventType = EventType;
	params.EventID = EventID;
	params.ObjContext = ObjContext;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.LuaEventBridge.SyncLuaRegisterEventNum
// (Final, Native, Public)
// Parameters:
// struct FString                 EventType                      (Parm, ZeroConstructor)
// struct FString                 EventID                        (Parm, ZeroConstructor)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void ULuaEventBridge::SyncLuaRegisterEventNum(const struct FString& EventType, const struct FString& EventID, int Number)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridge.SyncLuaRegisterEventNum");

	ULuaEventBridge_SyncLuaRegisterEventNum_Params params;
	params.EventType = EventType;
	params.EventID = EventID;
	params.Number = Number;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventBridge.GetCurrentParam
// (Final, Native, Public, Const)
// Parameters:
// TArray<class ULuaTemBPData*>   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class ULuaTemBPData*> ULuaEventBridge::GetCurrentParam()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridge.GetCurrentParam");

	ULuaEventBridge_GetCurrentParam_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.LuaEventBridge.DeactivateEventsByFilterKey
// (Final, Native, Public, HasOutParms)
// Parameters:
// uint32_t                       FilterKey                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ULuaEventBridge::DeactivateEventsByFilterKey(uint32_t FilterKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridge.DeactivateEventsByFilterKey");

	ULuaEventBridge_DeactivateEventsByFilterKey_Params params;
	params.FilterKey = FilterKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventBridge.CheckNeedPostEventWithFilterKey
// (Final, Native, Public, HasOutParms)
// Parameters:
// uint32_t                       FilterKey                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 EventType                      (Parm, ZeroConstructor)
// struct FString                 EventID                        (Parm, ZeroConstructor)
// bool                           bCheckNeedPostLua              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULuaEventBridge::CheckNeedPostEventWithFilterKey(uint32_t FilterKey, const struct FString& EventType, const struct FString& EventID, bool bCheckNeedPostLua)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridge.CheckNeedPostEventWithFilterKey");

	ULuaEventBridge_CheckNeedPostEventWithFilterKey_Params params;
	params.FilterKey = FilterKey;
	params.EventType = EventType;
	params.EventID = EventID;
	params.bCheckNeedPostLua = bCheckNeedPostLua;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.LuaEventBridge.ActiveEventByFilterKey
// (Final, Native, Public, HasOutParms)
// Parameters:
// uint32_t                       FilterKey                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 EventType                      (Parm, ZeroConstructor)
// struct FString                 EventID                        (Parm, ZeroConstructor)
// bool                           bActive                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULuaEventBridge::ActiveEventByFilterKey(uint32_t FilterKey, const struct FString& EventType, const struct FString& EventID, bool bActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridge.ActiveEventByFilterKey");

	ULuaEventBridge_ActiveEventByFilterKey_Params params;
	params.FilterKey = FilterKey;
	params.EventType = EventType;
	params.EventID = EventID;
	params.bActive = bActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventSubsystem.UnRegistEvent
// (Final, Native, Public)
// Parameters:
// int                            EventHandle                    (Parm, ZeroConstructor, IsPlainOldData)

void ULuaEventSubsystem::UnRegistEvent(int EventHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventSubsystem.UnRegistEvent");

	ULuaEventSubsystem_UnRegistEvent_Params params;
	params.EventHandle = EventHandle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventSubsystem.SetBridgeFunction
// (Final, Native, Public)
// Parameters:
// struct FSluaBPVar              OnRegistEvent                  (Parm)
// struct FSluaBPVar              OnUnRegistEvent                (Parm)
// struct FSluaBPVar              OnPostEvent                    (Parm)
// struct FSluaBPVar              OnPostBlueprintEvent           (Parm)

void ULuaEventSubsystem::SetBridgeFunction(const struct FSluaBPVar& OnRegistEvent, const struct FSluaBPVar& OnUnRegistEvent, const struct FSluaBPVar& OnPostEvent, const struct FSluaBPVar& OnPostBlueprintEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventSubsystem.SetBridgeFunction");

	ULuaEventSubsystem_SetBridgeFunction_Params params;
	params.OnRegistEvent = OnRegistEvent;
	params.OnUnRegistEvent = OnUnRegistEvent;
	params.OnPostEvent = OnPostEvent;
	params.OnPostBlueprintEvent = OnPostBlueprintEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventSubsystem.RegistEvent
// (Final, Native, Public)
// Parameters:
// struct FString                 EventID                        (Parm, ZeroConstructor)
// struct FString                 EventType                      (Parm, ZeroConstructor)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULuaEventSubsystem::RegistEvent(const struct FString& EventID, const struct FString& EventType, class UObject* Object, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventSubsystem.RegistEvent");

	ULuaEventSubsystem_RegistEvent_Params params;
	params.EventID = EventID;
	params.EventType = EventType;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.PlayerReliableSequentialSyncActor.OnActorSpawned
// (Final, Native, Protected)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void APlayerReliableSequentialSyncActor::OnActorSpawned(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.PlayerReliableSequentialSyncActor.OnActorSpawned");

	APlayerReliableSequentialSyncActor_OnActorSpawned_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.RenderFunctionLibrary.MarkComponentRenderStateDirty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         Comp                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URenderFunctionLibrary::MarkComponentRenderStateDirty(class UActorComponent* Comp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.RenderFunctionLibrary.MarkComponentRenderStateDirty");

	URenderFunctionLibrary_MarkComponentRenderStateDirty_Params params;
	params.Comp = Comp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffCarrierInterface.SyncInvincibleData
// (Native, Public)
// Parameters:
// float                          TotalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffCarrierInterface::SyncInvincibleData(float TotalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.SyncInvincibleData");

	USTBaseBuffCarrierInterface_SyncInvincibleData_Params params;
	params.TotalTime = TotalTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffCarrierInterface.RemoveBuffBySkill
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::RemoveBuffBySkill(int SkillID, int LayerCount, class AActor* Causer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.RemoveBuffBySkill");

	USTBaseBuffCarrierInterface_RemoveBuffBySkill_Params params;
	params.SkillID = SkillID;
	params.LayerCount = LayerCount;
	params.Causer = Causer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.RemoveBuffByID
// (Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::RemoveBuffByID(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.RemoveBuffByID");

	USTBaseBuffCarrierInterface_RemoveBuffByID_Params params;
	params.BuffID = BuffID;
	params.Causer = Causer;
	params.LayerCount = LayerCount;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.IsSameTeamWithFirstPC
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::IsSameTeamWithFirstPC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.IsSameTeamWithFirstPC");

	USTBaseBuffCarrierInterface_IsSameTeamWithFirstPC_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.HasBuffID
// (Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::HasBuffID(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.HasBuffID");

	USTBaseBuffCarrierInterface_HasBuffID_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.GetBuffDuration
// (Native, Public)
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTBaseBuffCarrierInterface::GetBuffDuration(int InstID, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.GetBuffDuration");

	USTBaseBuffCarrierInterface_GetBuffDuration_Params params;
	params.InstID = InstID;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.CheckBuffTarget
// (Native, Public)
// Parameters:
// class USTBuff*                 Buff                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::CheckBuffTarget(class USTBuff* Buff)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.CheckBuffTarget");

	USTBaseBuffCarrierInterface_CheckBuffTarget_Params params;
	params.Buff = Buff;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.ChangeBuffDuration
// (Native, Public)
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::ChangeBuffDuration(int InstID, float Duration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.ChangeBuffDuration");

	USTBaseBuffCarrierInterface_ChangeBuffDuration_Params params;
	params.InstID = InstID;
	params.Duration = Duration;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.AddBuffBySkill
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::AddBuffBySkill(int SkillID, int LayerCount, class AActor* Causer, int Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.AddBuffBySkill");

	USTBaseBuffCarrierInterface_AddBuffBySkill_Params params;
	params.SkillID = SkillID;
	params.LayerCount = LayerCount;
	params.Causer = Causer;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.AddBuffByID
// (Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBaseBuffCarrierInterface::AddBuffByID(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID, int Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.AddBuffByID");

	USTBaseBuffCarrierInterface_AddBuffByID_Params params;
	params.BuffID = BuffID;
	params.Causer = Causer;
	params.LayerCount = LayerCount;
	params.CauseSkillID = CauseSkillID;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuff.TryGetParams
// (Final, Native, Public)
// Parameters:
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::TryGetParams(int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.TryGetParams");

	USTBuff_TryGetParams_Params params;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.Tick
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeSeconds                    (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::Tick(class UActorComponent* BuffSystemComponent, int InstID, float DetalTime, float TimeSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.Tick");

	USTBuff_Tick_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;
	params.DetalTime = DetalTime;
	params.TimeSeconds = TimeSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.ResetActionExecute
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::ResetActionExecute(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.ResetActionExecute");

	USTBuff_ResetActionExecute_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.Initialize
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::Initialize(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.Initialize");

	USTBuff_Initialize_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.End
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::End(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.End");

	USTBuff_End_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.Destroy
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::Destroy(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.Destroy");

	USTBuff_Destroy_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.CopyActions
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuff::CopyActions()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.CopyActions");

	USTBuff_CopyActions_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuff.ChangeNotify
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::ChangeNotify(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.ChangeNotify");

	USTBuff_ChangeNotify_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnTick
// (Native, Public)
// Parameters:
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction_Lua::OnTick(float DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnTick");

	USTBuffAction_Lua_OnTick_Params params;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnInitialize
// (Native, Public)

void USTBuffAction_Lua::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnInitialize");

	USTBuffAction_Lua_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnExecute
// (Native, Public)

void USTBuffAction_Lua::OnExecute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnExecute");

	USTBuffAction_Lua_OnExecute_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnEnd
// (Native, Public)

void USTBuffAction_Lua::OnEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnEnd");

	USTBuffAction_Lua_OnEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnDestroy
// (Native, Public)

void USTBuffAction_Lua::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnDestroy");

	USTBuffAction_Lua_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnChangeNotify
// (Native, Public)

void USTBuffAction_Lua::OnChangeNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnChangeNotify");

	USTBuffAction_Lua_OnChangeNotify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition_Lua.OnInitialize
// (Native, Public)

void USTBuffCondition_Lua::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition_Lua.OnInitialize");

	USTBuffCondition_Lua_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition_Lua.OnDestroy
// (Native, Public)

void USTBuffCondition_Lua::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition_Lua.OnDestroy");

	USTBuffCondition_Lua_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition_Lua.CheckIsTrue
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffCondition_Lua::CheckIsTrue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition_Lua.CheckIsTrue");

	USTBuffCondition_Lua_CheckIsTrue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffConditionComplex.OnInitialize
// (Native, Protected)

void USTBuffConditionComplex::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionComplex.OnInitialize");

	USTBuffConditionComplex_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionComplex.OnDestroy
// (Native, Protected)

void USTBuffConditionComplex::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionComplex.OnDestroy");

	USTBuffConditionComplex_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionComplex.Copy
// (Native, Public)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USTBuffCondition*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBuffCondition* USTBuffConditionComplex::Copy(class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionComplex.Copy");

	USTBuffConditionComplex_Copy_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffConditionComplex.CheckIsTrue
// (Native, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffConditionComplex::CheckIsTrue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionComplex.CheckIsTrue");

	USTBuffConditionComplex_CheckIsTrue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffConditionNot.OnInitialize
// (Native, Protected)

void USTBuffConditionNot::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionNot.OnInitialize");

	USTBuffConditionNot_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionNot.OnDestroy
// (Native, Protected)

void USTBuffConditionNot::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionNot.OnDestroy");

	USTBuffConditionNot_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionNot.Copy
// (Native, Public)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USTBuffCondition*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBuffCondition* USTBuffConditionNot::Copy(class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionNot.Copy");

	USTBuffConditionNot_Copy_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffConditionNot.CheckIsTrue
// (Native, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffConditionNot::CheckIsTrue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionNot.CheckIsTrue");

	USTBuffConditionNot_CheckIsTrue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffConditionAction.OnTick
// (Native, Protected)
// Parameters:
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffConditionAction::OnTick(float DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnTick");

	USTBuffConditionAction_OnTick_Params params;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.OnInitialize
// (Native, Protected)

void USTBuffConditionAction::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnInitialize");

	USTBuffConditionAction_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.OnDestroy
// (Native, Protected)

void USTBuffConditionAction::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnDestroy");

	USTBuffConditionAction_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.OnConditionTrue
// (Final, Native, Protected)

void USTBuffConditionAction::OnConditionTrue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnConditionTrue");

	USTBuffConditionAction_OnConditionTrue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.OnConditionFalse
// (Final, Native, Protected)

void USTBuffConditionAction::OnConditionFalse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnConditionFalse");

	USTBuffConditionAction_OnConditionFalse_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.OnChangeNotify
// (Native, Protected)

void USTBuffConditionAction::OnChangeNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnChangeNotify");

	USTBuffConditionAction_OnChangeNotify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.CheckCondition
// (Final, Native, Protected)

void USTBuffConditionAction::CheckCondition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.CheckCondition");

	USTBuffConditionAction_CheckCondition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.UpdateClientBuff
// (Final, Native, Protected)
// Parameters:
// struct FClientSyncBrief        Brief                          (Parm)

void USTBuffSystemComponent::UpdateClientBuff(const struct FClientSyncBrief& Brief)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.UpdateClientBuff");

	USTBuffSystemComponent_UpdateClientBuff_Params params;
	params.Brief = Brief;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.RemoveClientBuff
// (Final, Native, Protected)
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::RemoveClientBuff(int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.RemoveClientBuff");

	USTBuffSystemComponent_RemoveClientBuff_Params params;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.RemoveBuff
// (Final, Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::RemoveBuff(int BuffID, int LayerCount, class AActor* Causer, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.RemoveBuff");

	USTBuffSystemComponent_RemoveBuff_Params params;
	params.BuffID = BuffID;
	params.LayerCount = LayerCount;
	params.Causer = Causer;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.RemoveAllBuffs
// (Final, Native, Public, BlueprintCallable)

void USTBuffSystemComponent::RemoveAllBuffs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.RemoveAllBuffs");

	USTBuffSystemComponent_RemoveAllBuffs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.OnRep_SyncBriefs
// (Final, Native, Public)

void USTBuffSystemComponent::OnRep_SyncBriefs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.OnRep_SyncBriefs");

	USTBuffSystemComponent_OnRep_SyncBriefs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.OnRep_OwnerSyncBriefs
// (Final, Native, Public)

void USTBuffSystemComponent::OnRep_OwnerSyncBriefs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.OnRep_OwnerSyncBriefs");

	USTBuffSystemComponent_OnRep_OwnerSyncBriefs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBuffSystemComponent.OnClientUpdateBuffEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::OnClientUpdateBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBuffSystemComponent.OnClientUpdateBuffEvent__DelegateSignature");

	USTBuffSystemComponent_OnClientUpdateBuffEvent__DelegateSignature_Params params;
	params.BuffID = BuffID;
	params.SkillID = SkillID;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBuffSystemComponent.OnClientRemoveBuffEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::OnClientRemoveBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBuffSystemComponent.OnClientRemoveBuffEvent__DelegateSignature");

	USTBuffSystemComponent_OnClientRemoveBuffEvent__DelegateSignature_Params params;
	params.BuffID = BuffID;
	params.SkillID = SkillID;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBuffSystemComponent.OnClientAddBuffEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::OnClientAddBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBuffSystemComponent.OnClientAddBuffEvent__DelegateSignature");

	USTBuffSystemComponent_OnClientAddBuffEvent__DelegateSignature_Params params;
	params.BuffID = BuffID;
	params.SkillID = SkillID;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBuffSystemComponent.OnAddBuffEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsExist                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::OnAddBuffEvent__DelegateSignature(int BuffID, int SkillID, bool IsExist, class AActor* Causer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBuffSystemComponent.OnAddBuffEvent__DelegateSignature");

	USTBuffSystemComponent_OnAddBuffEvent__DelegateSignature_Params params;
	params.BuffID = BuffID;
	params.SkillID = SkillID;
	params.IsExist = IsExist;
	params.Causer = Causer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.HasSkillID
// (Final, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::HasSkillID(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.HasSkillID");

	USTBuffSystemComponent_HasSkillID_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.HasBuff
// (Final, Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::HasBuff(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.HasBuff");

	USTBuffSystemComponent_HasBuff_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetSubsystem
// (Final, Native, Public)
// Parameters:
// class UBuffConfigSubsystem*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBuffConfigSubsystem* USTBuffSystemComponent::GetSubsystem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetSubsystem");

	USTBuffSystemComponent_GetSubsystem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetSTBuffByBuffID
// (Final, Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// class USTBuff*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBuff* USTBuffSystemComponent::GetSTBuffByBuffID(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetSTBuffByBuffID");

	USTBuffSystemComponent_GetSTBuffByBuffID_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetRealOwnerRoleSafety
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> USTBuffSystemComponent::GetRealOwnerRoleSafety()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetRealOwnerRoleSafety");

	USTBuffSystemComponent_GetRealOwnerRoleSafety_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffLayerCount
// (Final, Native, Public)
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBuffSystemComponent::GetBuffLayerCount(int InstID, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffLayerCount");

	USTBuffSystemComponent_GetBuffLayerCount_Params params;
	params.InstID = InstID;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffInfoByBuffID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBuffInstInfo>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBuffInstInfo> USTBuffSystemComponent::GetBuffInfoByBuffID(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffInfoByBuffID");

	USTBuffSystemComponent_GetBuffInfoByBuffID_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FBuffInstInfo           OutBuff                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::GetBuffInfo(int InstID, struct FBuffInstInfo* OutBuff)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffInfo");

	USTBuffSystemComponent_GetBuffInfo_Params params;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutBuff != nullptr)
		*OutBuff = params.OutBuff;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffDuration
// (Final, Native, Public)
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTBuffSystemComponent::GetBuffDuration(int InstID, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffDuration");

	USTBuffSystemComponent_GetBuffDuration_Params params;
	params.InstID = InstID;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffDSEndTime
// (Final, Native, Public)
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTBuffSystemComponent::GetBuffDSEndTime(int InstID, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffDSEndTime");

	USTBuffSystemComponent_GetBuffDSEndTime_Params params;
	params.InstID = InstID;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetAllBuffInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FBuffInstInfo>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBuffInstInfo> USTBuffSystemComponent::GetAllBuffInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetAllBuffInfo");

	USTBuffSystemComponent_GetAllBuffInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.ClearBuffs
// (Final, Native, Public)
// Parameters:
// bool                           bClearAll                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmediately                   (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::ClearBuffs(bool bClearAll, bool bImmediately)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.ClearBuffs");

	USTBuffSystemComponent_ClearBuffs_Params params;
	params.bClearAll = bClearAll;
	params.bImmediately = bImmediately;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.ChangeDuration
// (Final, Native, Public)
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::ChangeDuration(int InstID, float Duration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.ChangeDuration");

	USTBuffSystemComponent_ChangeDuration_Params params;
	params.InstID = InstID;
	params.Duration = Duration;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.AddBuff
// (Final, Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBuffSystemComponent::AddBuff(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID, int Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.AddBuff");

	USTBuffSystemComponent_AddBuff_Params params;
	params.BuffID = BuffID;
	params.Causer = Causer;
	params.LayerCount = LayerCount;
	params.CauseSkillID = CauseSkillID;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TableManagerSubsystem.SetModName
// (Final, Native, Public)
// Parameters:
// struct FString                 ModName                        (Parm, ZeroConstructor)

void UTableManagerSubsystem::SetModName(const struct FString& ModName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TableManagerSubsystem.SetModName");

	UTableManagerSubsystem_SetModName_Params params;
	params.ModName = ModName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TableManagerSubsystem.GetTableProxy
// (Final, Native, Public)
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// bool                           bTempory                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDataTableProxy*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDataTableProxy* UTableManagerSubsystem::GetTableProxy(const struct FString& tableName, bool bTempory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TableManagerSubsystem.GetTableProxy");

	UTableManagerSubsystem_GetTableProxy_Params params;
	params.tableName = tableName;
	params.bTempory = bTempory;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TableManagerSubsystem.GetTableDataField
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// struct FTableRowBase           Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Field                          (Parm, ZeroConstructor)
// struct FTableRowBase           Out                            (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTableManagerSubsystem::GetTableDataField(const struct FString& tableName, const struct FTableRowBase& Key, const struct FString& Field, struct FTableRowBase* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TableManagerSubsystem.GetTableDataField");

	UTableManagerSubsystem_GetTableDataField_Params params;
	params.tableName = tableName;
	params.Key = Key;
	params.Field = Field;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

	return params.ReturnValue;
}


// Function Basic.TableManagerSubsystem.GetTableData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FTableRowBase           OutRow                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTableManagerSubsystem::GetTableData(const struct FString& tableName, const struct FString& Key, struct FTableRowBase* OutRow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TableManagerSubsystem.GetTableData");

	UTableManagerSubsystem_GetTableData_Params params;
	params.tableName = tableName;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRow != nullptr)
		*OutRow = params.OutRow;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetWrapperPath
// (Final, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBPTable::GetWrapperPath(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetWrapperPath");

	UBPTable_GetWrapperPath_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetWrapperClass
// (Final, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPTable::GetWrapperClass(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetWrapperClass");

	UBPTable_GetWrapperClass_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetPath
// (Final, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceLobby                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBPTable::GetPath(int ID, bool IsLobby, bool bForceLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetPath");

	UBPTable_GetPath_Params params;
	params.ID = ID;
	params.IsLobby = IsLobby;
	params.bForceLobby = bForceLobby;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetObject
// (Final, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLowDevice                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBPTable::GetObject(int ID, class UObject* Outer, bool IsLobby, bool IsLowDevice)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetObject");

	UBPTable_GetObject_Params params;
	params.ID = ID;
	params.Outer = Outer;
	params.IsLobby = IsLobby;
	params.IsLowDevice = IsLowDevice;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetModObject
// (Final, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBPTable::GetModObject(int ID, class UObject* Outer, bool IsLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetModObject");

	UBPTable_GetModObject_Params params;
	params.ID = ID;
	params.Outer = Outer;
	params.IsLobby = IsLobby;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetModClass
// (Final, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPTable::GetModClass(int ID, bool IsLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetModClass");

	UBPTable_GetModClass_Params params;
	params.ID = ID;
	params.IsLobby = IsLobby;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetCustom1Class
// (Final, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPTable::GetCustom1Class(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetCustom1Class");

	UBPTable_GetCustom1Class_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetClass
// (Final, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLowDevice                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPTable::GetClass(int ID, bool IsLobby, bool IsLowDevice)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetClass");

	UBPTable_GetClass_Params params;
	params.ID = ID;
	params.IsLobby = IsLobby;
	params.IsLowDevice = IsLowDevice;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.ConvertPath
// (Final, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UBPTable::ConvertPath(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.ConvertPath");

	UBPTable_ConvertPath_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.InitTableData
// (Native, Event, Public, BlueprintEvent)

void UUAELoadedClassManager::InitTableData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.InitTableData");

	UUAELoadedClassManager_InitTableData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.InitialModTableItemMap
// (Native, Event, Public, BlueprintEvent)

void UUAELoadedClassManager::InitialModTableItemMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.InitialModTableItemMap");

	UUAELoadedClassManager_InitialModTableItemMap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.InitBPTableMap_Mod
// (Event, Public, BlueprintEvent)

void UUAELoadedClassManager::InitBPTableMap_Mod()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.InitBPTableMap_Mod");

	UUAELoadedClassManager_InitBPTableMap_Mod_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.InitBPTableMap
// (Event, Public, BlueprintEvent)

void UUAELoadedClassManager::InitBPTableMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.InitBPTableMap");

	UUAELoadedClassManager_InitBPTableMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.HandleTableModNameChanged
// (Final, Native, Public)
// Parameters:
// struct FString                 InModName                      (Parm, ZeroConstructor)

void UUAELoadedClassManager::HandleTableModNameChanged(const struct FString& InModName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.HandleTableModNameChanged");

	UUAELoadedClassManager_HandleTableModNameChanged_Params params;
	params.InModName = InModName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.GetWrapperPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAELoadedClassManager::GetWrapperPath(const struct FString& BPTableName, int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetWrapperPath");

	UUAELoadedClassManager_GetWrapperPath_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetWrapperClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUAELoadedClassManager::GetWrapperClass(const struct FString& BPTableName, int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetWrapperClass");

	UUAELoadedClassManager_GetWrapperClass_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceLobby                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAELoadedClassManager::GetPath(const struct FString& BPTableName, int ID, bool IsLobby, bool bForceLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetPath");

	UUAELoadedClassManager_GetPath_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;
	params.IsLobby = IsLobby;
	params.bForceLobby = bForceLobby;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLowDevice                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUAELoadedClassManager::GetObject(const struct FString& BPTableName, int ID, class UObject* Outer, bool IsLobby, bool IsLowDevice)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetObject");

	UUAELoadedClassManager_GetObject_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;
	params.Outer = Outer;
	params.IsLobby = IsLobby;
	params.IsLowDevice = IsLowDevice;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetCustom1Class
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUAELoadedClassManager::GetCustom1Class(const struct FString& BPTableName, int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetCustom1Class");

	UUAELoadedClassManager_GetCustom1Class_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLowDevice                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUAELoadedClassManager::GetClass(const struct FString& BPTableName, int ID, bool IsLobby, bool IsLowDevice)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetClass");

	UUAELoadedClassManager_GetClass_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;
	params.IsLobby = IsLobby;
	params.IsLowDevice = IsLowDevice;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetBPTableName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAELoadedClassManager::GetBPTableName(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetBPTableName");

	UUAELoadedClassManager_GetBPTableName_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetAssetByAssetReferenceAsync
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FSoftObjectPath         AssetReference                 (Parm)
// struct FScriptDelegate         AssetLoadSuccessDelegate       (Parm, ZeroConstructor)

void UUAELoadedClassManager::GetAssetByAssetReferenceAsync(const struct FSoftObjectPath& AssetReference, const struct FScriptDelegate& AssetLoadSuccessDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetAssetByAssetReferenceAsync");

	UUAELoadedClassManager_GetAssetByAssetReferenceAsync_Params params;
	params.AssetReference = AssetReference;
	params.AssetLoadSuccessDelegate = AssetLoadSuccessDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUAELoadedClassManager*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAELoadedClassManager* UUAELoadedClassManager::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.Get");

	UUAELoadedClassManager_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.CreateAndAddBPTable_Mod
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// class UBPTable*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBPTable* UUAELoadedClassManager::CreateAndAddBPTable_Mod(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.CreateAndAddBPTable_Mod");

	UUAELoadedClassManager_CreateAndAddBPTable_Mod_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.CreateAndAddBPTable
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// class UBPTable*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBPTable* UUAELoadedClassManager::CreateAndAddBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.CreateAndAddBPTable");

	UUAELoadedClassManager_CreateAndAddBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.ClearModTableItemMap
// (Native, Event, Public, BlueprintEvent)

void UUAELoadedClassManager::ClearModTableItemMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearModTableItemMap");

	UUAELoadedClassManager_ClearModTableItemMap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.ClearBPTable_Mod
// (Final, Native, Public, BlueprintCallable)

void UUAELoadedClassManager::ClearBPTable_Mod()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearBPTable_Mod");

	UUAELoadedClassManager_ClearBPTable_Mod_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.ClearBPTable
// (Final, Native, Public, BlueprintCallable)

void UUAELoadedClassManager::ClearBPTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearBPTable");

	UUAELoadedClassManager_ClearBPTable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.ClearAssetByAssetReferenceAsync
// (Final, Native, Public)
// Parameters:
// struct FScriptDelegate         AssetLoadSuccessDelegate       (Parm, ZeroConstructor)

void UUAELoadedClassManager::ClearAssetByAssetReferenceAsync(const struct FScriptDelegate& AssetLoadSuccessDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearAssetByAssetReferenceAsync");

	UUAELoadedClassManager_ClearAssetByAssetReferenceAsync_Params params;
	params.AssetLoadSuccessDelegate = AssetLoadSuccessDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.ClearAllData
// (Final, Native, Public, BlueprintCallable)

void UUAELoadedClassManager::ClearAllData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearAllData");

	UUAELoadedClassManager_ClearAllData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEMeshComponent.GetPredictedLODLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAEMeshComponent::GetPredictedLODLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEMeshComponent.GetPredictedLODLevel");

	UUAEMeshComponent_GetPredictedLODLevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAENetConnection.IsClosed
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAENetConnection::IsClosed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAENetConnection.IsClosed");

	UUAENetConnection_IsClosed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAENetConnection.HasSameRegion
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 OldLoc                         (Parm, IsPlainOldData)
// struct FVector                 NewLoc                         (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAENetConnection::HasSameRegion(const struct FVector& OldLoc, const struct FVector& NewLoc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAENetConnection.HasSameRegion");

	UUAENetConnection_HasSameRegion_Params params;
	params.OldLoc = OldLoc;
	params.NewLoc = NewLoc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAENetConnection.ForceRefreshRegionWeakNetUpdateObjects
// (Final, Native, Public)
// Parameters:
// float                          WeakNetConsiderFrequency       (Parm, ZeroConstructor, IsPlainOldData)

void UUAENetConnection::ForceRefreshRegionWeakNetUpdateObjects(float WeakNetConsiderFrequency)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAENetConnection.ForceRefreshRegionWeakNetUpdateObjects");

	UUAENetConnection_ForceRefreshRegionWeakNetUpdateObjects_Params params;
	params.WeakNetConsiderFrequency = WeakNetConsiderFrequency;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAETableManager.ReleaseTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TableFName                     (Parm, ZeroConstructor, IsPlainOldData)

void UUAETableManager::ReleaseTable(const struct FName& TableFName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.ReleaseTable");

	UUAETableManager_ReleaseTable_Params params;
	params.TableFName = TableFName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAETableManager.GetTablePtr_Mod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   tableName                      (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAETableManager::GetTablePtr_Mod(const struct FName& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetTablePtr_Mod");

	UUAETableManager_GetTablePtr_Mod_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetTablePtr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   tableName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCheckModTable                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAETableManager::GetTablePtr(const struct FName& tableName, bool bCheckModTable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetTablePtr");

	UUAETableManager_GetTablePtr_Params params;
	params.tableName = tableName;
	params.bCheckModTable = bCheckModTable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetTableMap
// (Final, Native, Public)
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// class UBaseTableResMap*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBaseTableResMap* UUAETableManager::GetTableMap(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetTableMap");

	UUAETableManager_GetTableMap_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetTableData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FTableRowBase           OutRow                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAETableManager::GetTableData(const struct FString& tableName, const struct FString& Key, struct FTableRowBase* OutRow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetTableData");

	UUAETableManager_GetTableData_Params params;
	params.tableName = tableName;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRow != nullptr)
		*OutRow = params.OutRow;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUAETableManager*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAETableManager* UUAETableManager::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetInstance");

	UUAETableManager_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetDomainByID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAETableManager::GetDomainByID(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetDomainByID");

	UUAETableManager_GetDomainByID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetDataTableStatic_Mod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAETableManager::GetDataTableStatic_Mod(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetDataTableStatic_Mod");

	UUAETableManager_GetDataTableStatic_Mod_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetDataTableStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAETableManager::GetDataTableStatic(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetDataTableStatic");

	UUAETableManager_GetDataTableStatic_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetDataTableProxy
// (Final, Native, Public)
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// bool                           bTempory                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDataTableProxy*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDataTableProxy* UUAETableManager::GetDataTableProxy(const struct FString& tableName, bool bTempory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetDataTableProxy");

	UUAETableManager_GetDataTableProxy_Params params;
	params.tableName = tableName;
	params.bTempory = bTempory;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UELanguageUtilityMethods.SetDownLoadLanguageName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Language                       (Parm, ZeroConstructor)

void UUELanguageUtilityMethods::SetDownLoadLanguageName(const struct FString& Language)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.SetDownLoadLanguageName");

	UUELanguageUtilityMethods_SetDownLoadLanguageName_Params params;
	params.Language = Language;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UELanguageUtilityMethods.IsJaguar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUELanguageUtilityMethods::IsJaguar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.IsJaguar");

	UUELanguageUtilityMethods_IsJaguar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UELanguageUtilityMethods.GetPublishRegion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUELanguageUtilityMethods::GetPublishRegion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.GetPublishRegion");

	UUELanguageUtilityMethods_GetPublishRegion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UELanguageUtilityMethods.GetDownLoadLanguageName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUELanguageUtilityMethods::GetDownLoadLanguageName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.GetDownLoadLanguageName");

	UUELanguageUtilityMethods_GetDownLoadLanguageName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UELanguageUtilityMethods.GetCurrentLanguageName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUELanguageUtilityMethods::GetCurrentLanguageName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.GetCurrentLanguageName");

	UUELanguageUtilityMethods_GetCurrentLanguageName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UELanguageUtilityMethods.CheckLocalizationExist
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUELanguageUtilityMethods::CheckLocalizationExist()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.CheckLocalizationExist");

	UUELanguageUtilityMethods_CheckLocalizationExist_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEMathUtilityMethods.VectorNormalizeMultiple
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 Out                            (Parm, OutParm, IsPlainOldData)
// struct FVector                 v1                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Multiple                       (Parm, ZeroConstructor, IsPlainOldData)

void UUEMathUtilityMethods::VectorNormalizeMultiple(const struct FVector& v1, float Multiple, struct FVector* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.VectorNormalizeMultiple");

	UUEMathUtilityMethods_VectorNormalizeMultiple_Params params;
	params.v1 = v1;
	params.Multiple = Multiple;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Basic.UEMathUtilityMethods.VectorMultiple
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 Out                            (Parm, OutParm, IsPlainOldData)
// struct FVector                 v1                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Multiple                       (Parm, ZeroConstructor, IsPlainOldData)

void UUEMathUtilityMethods::VectorMultiple(const struct FVector& v1, float Multiple, struct FVector* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.VectorMultiple");

	UUEMathUtilityMethods_VectorMultiple_Params params;
	params.v1 = v1;
	params.Multiple = Multiple;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Basic.UEMathUtilityMethods.VectorMinus
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 Out                            (Parm, OutParm, IsPlainOldData)
// struct FVector                 v1                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 v2                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUEMathUtilityMethods::VectorMinus(const struct FVector& v1, const struct FVector& v2, struct FVector* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.VectorMinus");

	UUEMathUtilityMethods_VectorMinus_Params params;
	params.v1 = v1;
	params.v2 = v2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Basic.UEMathUtilityMethods.VectorAdditive
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 Out                            (Parm, OutParm, IsPlainOldData)
// struct FVector                 v1                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 v2                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUEMathUtilityMethods::VectorAdditive(const struct FVector& v1, const struct FVector& v2, struct FVector* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.VectorAdditive");

	UUEMathUtilityMethods_VectorAdditive_Params params;
	params.v1 = v1;
	params.v2 = v2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Basic.UEMathUtilityMethods.FilterOKForCurrentMode
// (Final, Native, Static, Public)
// Parameters:
// unsigned char                  ModeType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModeOpenFlag                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModeTypes                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUEMathUtilityMethods::FilterOKForCurrentMode(unsigned char ModeType, int ModeOpenFlag, const struct FString& ModeTypes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.FilterOKForCurrentMode");

	UUEMathUtilityMethods_FilterOKForCurrentMode_Params params;
	params.ModeType = ModeType;
	params.ModeOpenFlag = ModeOpenFlag;
	params.ModeTypes = ModeTypes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEMathUtilityMethods.Conv_VectorToRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FRotator                Out                            (Parm, OutParm, IsPlainOldData)
// struct FVector                 Vec                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUEMathUtilityMethods::Conv_VectorToRotator(const struct FVector& Vec, struct FRotator* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.Conv_VectorToRotator");

	UUEMathUtilityMethods_Conv_VectorToRotator_Params params;
	params.Vec = Vec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Basic.UEMathUtilityMethods.CalculateAngleToTargetAngle
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          StartAngle                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          targetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          stepAngle                      (Parm, ZeroConstructor, IsPlainOldData)
// EAngleRotationDirectionType    Dir                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUEMathUtilityMethods::CalculateAngleToTargetAngle(float StartAngle, float targetAngle, float stepAngle, EAngleRotationDirectionType Dir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.CalculateAngleToTargetAngle");

	UUEMathUtilityMethods_CalculateAngleToTargetAngle_Params params;
	params.StartAngle = StartAngle;
	params.targetAngle = targetAngle;
	params.stepAngle = stepAngle;
	params.Dir = Dir;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEMathUtilityMethods.BKDRHash
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 StrToHash                      (Parm, ZeroConstructor)
// int                            Mod                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUEMathUtilityMethods::BKDRHash(const struct FString& StrToHash, int Mod)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.BKDRHash");

	UUEMathUtilityMethods_BKDRHash_Params params;
	params.StrToHash = StrToHash;
	params.Mod = Mod;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEMathUtilityMethods.AngleDis
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          angleA                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          angleB                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUEMathUtilityMethods::AngleDis(float angleA, float angleB)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.AngleDis");

	UUEMathUtilityMethods_AngleDis_Params params;
	params.angleA = angleA;
	params.angleB = angleB;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.IsPathExist
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 HandlePath                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUEPathUtilityMethods::IsPathExist(const struct FString& HandlePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.IsPathExist");

	UUEPathUtilityMethods_IsPathExist_Params params;
	params.HandlePath = HandlePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.IsAvatarResPathExist
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 HandlePath                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUEPathUtilityMethods::IsAvatarResPathExist(const struct FString& HandlePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.IsAvatarResPathExist");

	UUEPathUtilityMethods_IsAvatarResPathExist_Params params;
	params.HandlePath = HandlePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.GetModName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUEPathUtilityMethods::GetModName(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.GetModName");

	UUEPathUtilityMethods_GetModName_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.GetFullModName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MainMod                        (Parm, OutParm, ZeroConstructor)
// struct FString                 SubMod                         (Parm, OutParm, ZeroConstructor)

void UUEPathUtilityMethods::GetFullModName(class UObject* WorldContext, struct FString* MainMod, struct FString* SubMod)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.GetFullModName");

	UUEPathUtilityMethods_GetFullModName_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MainMod != nullptr)
		*MainMod = params.MainMod;
	if (SubMod != nullptr)
		*SubMod = params.SubMod;
}


// Function Basic.UEPathUtilityMethods.FilterOKForCurrentModeString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CurrentModeString              (Parm, ZeroConstructor)
// struct FString                 CurrentExtraModeString         (Parm, ZeroConstructor)
// struct FString                 ModStringInfo                  (Parm, ZeroConstructor)
// unsigned char                  ModeType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModeOpenFlag                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUEPathUtilityMethods::FilterOKForCurrentModeString(const struct FString& CurrentModeString, const struct FString& CurrentExtraModeString, const struct FString& ModStringInfo, unsigned char ModeType, int ModeOpenFlag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.FilterOKForCurrentModeString");

	UUEPathUtilityMethods_FilterOKForCurrentModeString_Params params;
	params.CurrentModeString = CurrentModeString;
	params.CurrentExtraModeString = CurrentExtraModeString;
	params.ModStringInfo = ModStringInfo;
	params.ModeType = ModeType;
	params.ModeOpenFlag = ModeOpenFlag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

