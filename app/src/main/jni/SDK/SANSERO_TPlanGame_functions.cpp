// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:14 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function TPlanGame.BackpackComponentTPlan.PickupItemFromWrapperDetail
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemPickupInfo   PickupInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemClientPickupType    BattleItemClientPickupType     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponentTPlan::PickupItemFromWrapperDetail(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.BackpackComponentTPlan.PickupItemFromWrapperDetail");

	UBackpackComponentTPlan_PickupItemFromWrapperDetail_Params params;
	params.DefineID = DefineID;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;
	params.BattleItemClientPickupType = BattleItemClientPickupType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanGame.BackpackComponentTPlan.PickItem_IntoSafetyBox
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemPickupInfo   PickupInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponentTPlan::PickItem_IntoSafetyBox(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.BackpackComponentTPlan.PickItem_IntoSafetyBox");

	UBackpackComponentTPlan_PickItem_IntoSafetyBox_Params params;
	params.DefineID = DefineID;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanGame.BackpackComponentTPlan.NotifyItemUpdated
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)

void UBackpackComponentTPlan::NotifyItemUpdated(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.BackpackComponentTPlan.NotifyItemUpdated");

	UBackpackComponentTPlan_NotifyItemUpdated_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.BackpackComponentTPlan.NotifyItemRemoved
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)

void UBackpackComponentTPlan::NotifyItemRemoved(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.BackpackComponentTPlan.NotifyItemRemoved");

	UBackpackComponentTPlan_NotifyItemRemoved_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.BackpackComponentTPlan.NotifyItemListUpdated
// (Native, Public, BlueprintCallable)

void UBackpackComponentTPlan::NotifyItemListUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.BackpackComponentTPlan.NotifyItemListUpdated");

	UBackpackComponentTPlan_NotifyItemListUpdated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.BackpackTPlanUtils.UnRegisterInvokeClass
// (Final, Native, Static, Public, BlueprintCallable)

void UBackpackTPlanUtils::UnRegisterInvokeClass()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.BackpackTPlanUtils.UnRegisterInvokeClass");

	UBackpackTPlanUtils_UnRegisterInvokeClass_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.BackpackTPlanUtils.RegisterInvokeClass
// (Final, Native, Static, Public, BlueprintCallable)

void UBackpackTPlanUtils::RegisterInvokeClass()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.BackpackTPlanUtils.RegisterInvokeClass");

	UBackpackTPlanUtils_RegisterInvokeClass_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.BackpackTPlanUtils.RealGetBPUtils
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBackpackBlueprintTPlanUtils* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackBlueprintTPlanUtils* UBackpackTPlanUtils::RealGetBPUtils()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.BackpackTPlanUtils.RealGetBPUtils");

	UBackpackTPlanUtils_RealGetBPUtils_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanGame.MetroStoreComponent.OnRep_StoreID
// (Native, Event, Public, BlueprintEvent)

void UMetroStoreComponent::OnRep_StoreID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.MetroStoreComponent.OnRep_StoreID");

	UMetroStoreComponent_OnRep_StoreID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.MetroStoreComponent.OnRep_Status
// (Native, Event, Public, BlueprintEvent)

void UMetroStoreComponent::OnRep_Status()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.MetroStoreComponent.OnRep_Status");

	UMetroStoreComponent_OnRep_Status_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.MetroStoreComponent.OnRep_GoodsNum
// (Native, Event, Public, BlueprintEvent)

void UMetroStoreComponent::OnRep_GoodsNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.MetroStoreComponent.OnRep_GoodsNum");

	UMetroStoreComponent_OnRep_GoodsNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.MetroStoreComponent.OnRep_GoodsListNum
// (Native, Event, Public, BlueprintEvent)

void UMetroStoreComponent::OnRep_GoodsListNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.MetroStoreComponent.OnRep_GoodsListNum");

	UMetroStoreComponent_OnRep_GoodsListNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.MetroStoreComponent.OnRep_GoodsList
// (Native, Event, Public, BlueprintEvent)

void UMetroStoreComponent::OnRep_GoodsList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.MetroStoreComponent.OnRep_GoodsList");

	UMetroStoreComponent_OnRep_GoodsList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.MetroStoreComponent.OnRep_CurrencyList
// (Native, Event, Public, BlueprintEvent)

void UMetroStoreComponent::OnRep_CurrencyList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.MetroStoreComponent.OnRep_CurrencyList");

	UMetroStoreComponent_OnRep_CurrencyList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.MetroStoreComponent.OnRep_BuyFrequence
// (Native, Event, Public, BlueprintEvent)

void UMetroStoreComponent::OnRep_BuyFrequence()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.MetroStoreComponent.OnRep_BuyFrequence");

	UMetroStoreComponent_OnRep_BuyFrequence_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

