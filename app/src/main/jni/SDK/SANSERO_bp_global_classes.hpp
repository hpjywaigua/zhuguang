#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:18 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// ScriptBlueprintGeneratedClass bp_global.bp_global_C
// 0x0088 (0x04E8 - 0x0460)
class Abp_global_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     GLOBAL_USE_ITEM;                                          // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_NATION_SWITCH                    BP_STRUCT_NATION_SWITCH;                                  // 0x0478(0x0004) (Edit, BlueprintVisible)
	int                                                BP_StartUpType;                                           // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Share_Platform;                                        // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Platform;                                              // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsAppleAudit;                                          // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IS_EXTERNAL_CHANNEL;                                   // 0x0489(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IOS_CHECK;                                             // 0x048A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x048B(0x0001) MISSED OFFSET
	int                                                BP_GlobalSwitchCameraIndex;                               // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_PreviewItemId;                                  // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_IsResidentEvilNeedShow;                         // 0x0494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_IsChristmasNeedShow;                            // 0x0495(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_IsAnniversaryNeedShow;                          // 0x0496(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_AndroidKey_IsValid;                             // 0x0497(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_AdvertiseNeedShowtask;                          // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	struct FString                                     BP_GEM_REPORT_SUBEVENT;                                   // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GEM_REPORT_PARA2;                                      // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GEM_REPORT_PARA1;                                      // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CHECK_MENU_OPEN_RESULT;                                // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	int                                                BP_CHECK_MENU_OPEN_ID;                                    // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BA_REASON;                                             // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BA_BUTTON_TYPE;                                        // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_global.bp_global_C");
		return pStaticClass;
	}


	void EventShowPlatWXStartup_NoFetch();
	void EventShowPlatWXStartup();
	void EventShowPlatQQStartup_NoFetch();
	void EventShowPlatQQStartup();
	void EventShowPlatIconTips_NoFetch();
	void EventShowPlatIconTips();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventSendClickGemReport_NoFetch();
	void EventSendClickGemReport();
	void EventSendBAReport_NoFetch();
	void EventSendBAReport();
	void EventGotoItemPreviewPress_NoFetch();
	void EventGotoItemPreviewPress();
	void EventGotoItemPreviewClick_NoFetch();
	void EventGotoItemPreviewClick();
	void EventGlobalUseItem_NoFetch();
	void EventGlobalUseItem();
	void EventGlobalCloseItemTips_NoFetch();
	void EventGlobalCloseItemTips();
	void EventFetchNationSwitch_NoFetch();
	void EventFetchNationSwitch();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventComMsgBoxSluaClickUrl_NoFetch();
	void EventComMsgBoxSluaClickUrl();
	void EventClickLobbyEventGemReport_NoFetch();
	void EventClickLobbyEventGemReport();
	void EventCheckIfMenuOpen_NoFetch();
	void EventCheckIfMenuOpen();
	void EventAndroidQuitGame_NoFetch();
	void EventAndroidQuitGame();
	void UserConstructionScript();
};


}

