#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:16 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// WidgetBlueprintGeneratedClass Global_Bp.Global_Bp_C
// 0x0120 (0x0538 - 0x0418)
class UGlobal_Bp_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (Transient, DuplicateTransient)
	class USettingConfig_C*                            SettingConfigObject;                                      // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, class UTexture2D*>            corpsIconTextureMap;                                      // 0x0428(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class Abp_global_C*                                bp_global;                                                // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, class UTexture2D*>            rankTextureMap;                                           // 0x0480(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, class UUserWidget*>                      dragDropItemMap;                                          // 0x04D0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isPostProcessVolumeInit;                                  // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0521(0x0007) MISSED OFFSET
	class APostProcessVolume*                          postProcessClassic;                                       // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACameraPostProcessActor_C*                   cameraPostProcessActor;                                   // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Global_Bp.Global_Bp_C");
		return pStaticClass;
	}


	void InitFireGyroSensibilitySettingData(class USettingConfig_C* ServerSettingConfig);
	void MapFromCBToESBH(class USettingConfig_C* SettingConfig);
	void InitMirrorObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void InitThrowObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void InitDrugMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void InitBasicSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitPickupSettingData_XT(class USettingConfig_C* SettingConfig);
	void InitPickupSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitSensibilitySettingData(class USettingConfig_C* ServerSettingConfig);
	void SetGrenadeDefaultPickValue();
	void InitMapFromCBToES();
	void MapFromCBToESGlobal(class USettingConfig_C* SettingConfig);
	void MapFromCBToESJK(class USettingConfig_C* SettingConfig);
	void MapFromCBToESVN(class USettingConfig_C* SettingConfig);
	void LoadSettingConfigFromSlot();
	void UpdateBigHandOperateRedPoint();
	void SetPostProcessSettings(int ID, float Time, bool isReverse, bool isClosing);
	void ShowItemPreviewPress();
	void ShowItemPreviewClick(int ItemId);
	void SaveAnniversaryNeedShow();
	void GetAnniversaryNeedShow();
	void SaveResidentEvilNeedShow();
	void GetResidentEvilNeedShow();
	void SaveChristmasNeedShow();
	void GetChristmasNeedShow();
	void GetDragDropWidget(int dragDropType);
	void GetRankTexture(int rankIntegral, class UTexture2D** Output);
	void GetCorpsIconTexture(int IconID, class UTexture2D** Value);
	void GetFrameTexture(int frameLevel, class UTexture2D** Output);
	void EventAndroidQuitGame();
	void EnterLogin();
	void Construct();
	void RecoverMaxFps();
	void ExecuteUbergraph_Global_Bp(int EntryPoint);
};


}

