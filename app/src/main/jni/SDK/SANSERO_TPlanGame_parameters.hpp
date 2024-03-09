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

// Function TPlanGame.BackpackComponentTPlan.PickupItemFromWrapperDetail
struct UBackpackComponentTPlan_PickupItemFromWrapperDetail_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBattleItemPickupInfo                       PickupInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	EBattleItemPickupReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemClientPickupType                        BattleItemClientPickupType;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanGame.BackpackComponentTPlan.PickItem_IntoSafetyBox
struct UBackpackComponentTPlan_PickItem_IntoSafetyBox_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBattleItemPickupInfo                       PickupInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	EBattleItemPickupReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanGame.BackpackComponentTPlan.NotifyItemUpdated
struct UBackpackComponentTPlan_NotifyItemUpdated_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TPlanGame.BackpackComponentTPlan.NotifyItemRemoved
struct UBackpackComponentTPlan_NotifyItemRemoved_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TPlanGame.BackpackComponentTPlan.NotifyItemListUpdated
struct UBackpackComponentTPlan_NotifyItemListUpdated_Params
{
};

// Function TPlanGame.BackpackTPlanUtils.UnRegisterInvokeClass
struct UBackpackTPlanUtils_UnRegisterInvokeClass_Params
{
};

// Function TPlanGame.BackpackTPlanUtils.RegisterInvokeClass
struct UBackpackTPlanUtils_RegisterInvokeClass_Params
{
};

// Function TPlanGame.BackpackTPlanUtils.RealGetBPUtils
struct UBackpackTPlanUtils_RealGetBPUtils_Params
{
	class UBackpackBlueprintTPlanUtils*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanGame.MetroStoreComponent.OnRep_StoreID
struct UMetroStoreComponent_OnRep_StoreID_Params
{
};

// Function TPlanGame.MetroStoreComponent.OnRep_Status
struct UMetroStoreComponent_OnRep_Status_Params
{
};

// Function TPlanGame.MetroStoreComponent.OnRep_GoodsNum
struct UMetroStoreComponent_OnRep_GoodsNum_Params
{
};

// Function TPlanGame.MetroStoreComponent.OnRep_GoodsListNum
struct UMetroStoreComponent_OnRep_GoodsListNum_Params
{
};

// Function TPlanGame.MetroStoreComponent.OnRep_GoodsList
struct UMetroStoreComponent_OnRep_GoodsList_Params
{
};

// Function TPlanGame.MetroStoreComponent.OnRep_CurrencyList
struct UMetroStoreComponent_OnRep_CurrencyList_Params
{
};

// Function TPlanGame.MetroStoreComponent.OnRep_BuyFrequence
struct UMetroStoreComponent_OnRep_BuyFrequence_Params
{
};

}

