#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:16 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// BlueprintGeneratedClass GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C
// 0x0000 (0x0090 - 0x0090)
class UGlobalUIFunctionLibrary_C : public UBlueprintFunctionOverride
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C");
		return pStaticClass;
	}


	static void SetArenaWeaponLightProperty(class UObject* __WorldContext);
	static void SetLobbyDefaultLightProperty(class UObject* __WorldContext);
	static void SwitchLobbyMeshBg(int BgIdx, class UObject* __WorldContext);
	static void AddOrUpdateBlendable(class UCameraComponent* CameraComponent, class UMaterialInstanceDynamic* MIDynamic, float BlendWeight, class UObject* __WorldContext);
	static void ProcessAndroidBack(class UObject* __WorldContext);
	static void SetSpecialIconWithSprite2DMatchSize(class UImage* Widget, const struct FString& specialIconPath, class UObject* __WorldContext);
	static void GetItemTableRow(int ID, class UObject* __WorldContext, struct FBP_STRUCT_Item_type* Item);
	static void SecondsToMMSS(int Seconds, class UObject* __WorldContext, struct FString* FormatTime);
	static void PlaySoundPopup(class UObject* __WorldContext);
	static void PlaySoundTab(class UObject* __WorldContext);
	static void GetUIRectOffset(class UObject* __WorldContext, int* Left, int* Right);
	static void IsConfigGameModeSubType(EGameModeSubType InSubType, class UObject* Context, class UObject* __WorldContext, bool* res);
	static void IsConfigGameModeType(EGameModeType InGameModeType, class UObject* Context, class UObject* __WorldContext, bool* res);
	static void GetGlobalLuaUI(class UObject* WorldContextObject, class UObject* __WorldContext, class UGlobalLuaWidget_C** AsGlobal_Lua_Widget);
	static void GetVector4(float X, float Y, float W, float H, class UObject* __WorldContext, struct FVector4* Vector);
	static void InitAmmoDropBox(class UMeshComponent* MeshComponent, int LOD, class UObject* __WorldContext);
	static struct FString GetRankIntegralBigIcon(const struct FString& Icon, class UObject* __WorldContext);
	static struct FString GetRankIntegralSmallIcon(const struct FString& Icon, class UObject* __WorldContext);
	static struct FString GetRankIntegralSubIcon(const struct FString& Icon, class UObject* __WorldContext);
	static void SetRankInteral(const struct FBP_STRUCT_RankIntegralLevel_type& RankIntegralLevelInfo, class UImage* ImageIcon, class UTextBlock* TextBlock_Rank, class UCanvasPanel* Canvas_Panel_Star, class UImage* Image_Star, class UTextBlock* TextBlock_Star, bool isSegmentStarOpen, class UImage* Image_Quality, class UImage* vx_Image_Quality, class UObject* __WorldContext);
	static void SetImageFromPath(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext);
	static void GetBrushFromSprite(const struct FSlateBrush& Brush, const struct FString& Path, class UObject* __WorldContext, struct FSlateBrush* Result);
	static void LoadSprite(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext);
	static void GetXieQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path);
	static void GetBgQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path);
	static void GetQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path);
	static void SetCornerQuality(class UImage* Image, int Quality, class UObject* __WorldContext);
	static void GetPingColor(float ms, class UObject* __WorldContext, struct FLinearColor* Color);
	static void SetImgWithPath(class UImage* ImgRef, const struct FString& imgPath, bool IsMatchSize, class UObject* __WorldContext, bool* Success);
	static void GetItemName(const struct FString& Name, int Length, bool chineseSensity, class UObject* __WorldContext, struct FString* OutName);
	static void UpdateImageByPath(class UImage* Image, const struct FString& Path, class UObject* __WorldContext);
	static void UpdateImageTint(class UImage* Image, const struct FLinearColor& Color, class UObject* __WorldContext);
	static void ChangeBrushColor(const struct FSlateBrush& Brush, const struct FLinearColor& Color, class UObject* __WorldContext, struct FSlateBrush* NewBrush);
	static void GetCameraMod(class UObject* __WorldContext, int* Mod);
	static void SetHumanLightProperty(class UObject* __WorldContext);
	static void SetWeaponLightProperty(class UObject* __WorldContext);
	static void SetSceneSkyLightProperty(const struct FString& lightName, const struct FTransform& Trans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext);
	static void SetAndroidKeyIsValid(bool bValid, class UObject* __WorldContext);
	static void numToTimeStrFormat(int timeNum, class UObject* __WorldContext, struct FString* TimeStr);
	static void numToTimeStr(int timeNum, class UObject* __WorldContext, struct FString* TimeStr);
	static void UpdateNationImage(class UImage* Image, const struct FString& RoleNation, class UObject* __WorldContext);
	static void SetScenePointLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius, class UObject* __WorldContext);
	static void SetSceneDirectionalLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext);
	static void GetLobbyCorpsIcon(int IconID, class UObject* __WorldContext, class UTexture2D** Value);
	static void GetLobbyGlobalBp(class UObject* __WorldContext, class UGlobal_Bp_C** AsGlobal_Bp);
	static void GetLobbyFrameTexture(int frameLevel, class UObject* __WorldContext, class UTexture2D** Output);
	static void GetNationInfo(const struct FString& NationCode, class UObject* __WorldContext, struct FBP_STRUCT_RegionConfig_type* NationInfo);
	static void SetImageWithSpriteRes(const struct FString& ResPath, class UImage* Image, class UObject* __WorldContext);
	static void GetNationSwitch(const struct FString& Name, class UObject* __WorldContext, bool* Ret);
	static void CheckIfMenuOpen(int MenuId, class UObject* __WorldContext, bool* Ret);
	static void GetItemTimeS(int res_id, int FirstTimeNum, class UObject* __WorldContext, struct FString* time_s, bool* is_have_limit);
	static void ShowItemTipsByButton(int ItemId, class UButton* Button, int validHours, bool isShowCloseBtn, class UObject* __WorldContext);
	static void CloseItemTips(class UObject* __WorldContext);
	static void CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget);
	static void PlaySoundCloseButton(class UObject* __WorldContext);
	static void ShowEffect(bool IsShow, class UObject* __WorldContext, TArray<class UWidget*>* Widget);
	static void IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* Visible);
	static void PlaySoundClickButton(class UObject* __WorldContext);
	static void SendBAReport(int ButtonType, int Reason, class UObject* __WorldContext);
	static void IsWhiteSpace(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	static void GetTextLength(const struct FString& Text, bool chineseSensity, class UObject* __WorldContext, int* Length);
	static void BoolToVisible(bool Visible, bool collapse, bool isButton, class UObject* __WorldContext, ESlateVisibility* Visibility);
	static void IsEnglish(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	static void GetGlobalData(class UObject* __WorldContext, class Abp_global_C** globalObj);
	static void GetLocalizeString(int ID, const struct FString& string1, const struct FString& string2, const struct FString& string3, class UObject* __WorldContext, struct FString* TextValue);
};


}

