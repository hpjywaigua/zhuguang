#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:14 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class TPlanGame.BackpackComponentTPlan
// 0x0000 (0x0500 - 0x0500)
class UBackpackComponentTPlan : public UBackpackComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.BackpackComponentTPlan");
		return pStaticClass;
	}


	bool PickupItemFromWrapperDetail(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType);
	bool PickItem_IntoSafetyBox(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	void NotifyItemUpdated(const struct FItemDefineID& DefineID);
	void NotifyItemRemoved(const struct FItemDefineID& DefineID);
	void NotifyItemListUpdated();
};


// Class TPlanGame.BackpackTPlanUtils
// 0x0000 (0x0028 - 0x0028)
class UBackpackTPlanUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.BackpackTPlanUtils");
		return pStaticClass;
	}


	static void UnRegisterInvokeClass();
	static void RegisterInvokeClass();
	static class UBackpackBlueprintTPlanUtils* RealGetBPUtils();
};


// Class TPlanGame.BackpackBlueprintTPlanUtils
// 0x0000 (0x0C80 - 0x0C80)
class UBackpackBlueprintTPlanUtils : public UBackpackBlueprintUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.BackpackBlueprintTPlanUtils");
		return pStaticClass;
	}

};


// Class TPlanGame.MetroStoreComponent
// 0x0048 (0x0220 - 0x01D8)
class UMetroStoreComponent : public ULuaActorComponent
{
public:
	int                                                Status;                                                   // 0x01D8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              BuyFrequence;                                             // 0x01DC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	TArray<struct FCurrencyInfo>                       CurrencyList;                                             // 0x01E0(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	TArray<struct FGoodsInfo>                          GoodsList;                                                // 0x01F0(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	TArray<int>                                        GoodsListNum;                                             // 0x0200(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	TArray<int>                                        GoodsNum;                                                 // 0x0210(0x0010) (BlueprintVisible, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.MetroStoreComponent");
		return pStaticClass;
	}


	void OnRep_StoreID();
	void OnRep_Status();
	void OnRep_GoodsNum();
	void OnRep_GoodsListNum();
	void OnRep_GoodsList();
	void OnRep_CurrencyList();
	void OnRep_BuyFrequence();
};


}

