// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:16 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetArenaWeaponLightProperty
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetArenaWeaponLightProperty(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetArenaWeaponLightProperty");

	UGlobalUIFunctionLibrary_C_SetArenaWeaponLightProperty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetLobbyDefaultLightProperty
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetLobbyDefaultLightProperty(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetLobbyDefaultLightProperty");

	UGlobalUIFunctionLibrary_C_SetLobbyDefaultLightProperty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchLobbyMeshBg
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BgIdx                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SwitchLobbyMeshBg(int BgIdx, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchLobbyMeshBg");

	UGlobalUIFunctionLibrary_C_SwitchLobbyMeshBg_Params params;
	params.BgIdx = BgIdx;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.AddOrUpdateBlendable
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        CameraComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* MIDynamic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendWeight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::AddOrUpdateBlendable(class UCameraComponent* CameraComponent, class UMaterialInstanceDynamic* MIDynamic, float BlendWeight, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.AddOrUpdateBlendable");

	UGlobalUIFunctionLibrary_C_AddOrUpdateBlendable_Params params;
	params.CameraComponent = CameraComponent;
	params.MIDynamic = MIDynamic;
	params.BlendWeight = BlendWeight;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ProcessAndroidBack
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::ProcessAndroidBack(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ProcessAndroidBack");

	UGlobalUIFunctionLibrary_C_ProcessAndroidBack_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSpecialIconWithSprite2DMatchSize
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 specialIconPath                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetSpecialIconWithSprite2DMatchSize(class UImage* Widget, const struct FString& specialIconPath, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSpecialIconWithSprite2DMatchSize");

	UGlobalUIFunctionLibrary_C_SetSpecialIconWithSprite2DMatchSize_Params params;
	params.Widget = Widget;
	params.specialIconPath = specialIconPath;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTableRow
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_Item_type    Item                           (Parm, OutParm)

void UGlobalUIFunctionLibrary_C::GetItemTableRow(int ID, class UObject* __WorldContext, struct FBP_STRUCT_Item_type* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTableRow");

	UGlobalUIFunctionLibrary_C_GetItemTableRow_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SecondsToMMSS
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FormatTime                     (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::SecondsToMMSS(int Seconds, class UObject* __WorldContext, struct FString* FormatTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SecondsToMMSS");

	UGlobalUIFunctionLibrary_C_SecondsToMMSS_Params params;
	params.Seconds = Seconds;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FormatTime != nullptr)
		*FormatTime = params.FormatTime;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundPopup
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::PlaySoundPopup(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundPopup");

	UGlobalUIFunctionLibrary_C_PlaySoundPopup_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundTab
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::PlaySoundTab(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundTab");

	UGlobalUIFunctionLibrary_C_PlaySoundTab_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetUIRectOffset
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Left                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Right                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetUIRectOffset(class UObject* __WorldContext, int* Left, int* Right)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetUIRectOffset");

	UGlobalUIFunctionLibrary_C_GetUIRectOffset_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Left != nullptr)
		*Left = params.Left;
	if (Right != nullptr)
		*Right = params.Right;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsConfigGameModeSubType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameModeSubType               InSubType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsConfigGameModeSubType(EGameModeSubType InSubType, class UObject* Context, class UObject* __WorldContext, bool* res)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsConfigGameModeSubType");

	UGlobalUIFunctionLibrary_C_IsConfigGameModeSubType_Params params;
	params.InSubType = InSubType;
	params.Context = Context;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsConfigGameModeType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameModeType                  InGameModeType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsConfigGameModeType(EGameModeType InGameModeType, class UObject* Context, class UObject* __WorldContext, bool* res)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsConfigGameModeType");

	UGlobalUIFunctionLibrary_C_IsConfigGameModeType_Params params;
	params.InGameModeType = InGameModeType;
	params.Context = Context;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalLuaUI
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGlobalLuaWidget_C*      AsGlobal_Lua_Widget            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetGlobalLuaUI(class UObject* WorldContextObject, class UObject* __WorldContext, class UGlobalLuaWidget_C** AsGlobal_Lua_Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalLuaUI");

	UGlobalUIFunctionLibrary_C_GetGlobalLuaUI_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AsGlobal_Lua_Widget != nullptr)
		*AsGlobal_Lua_Widget = params.AsGlobal_Lua_Widget;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetVector4
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          W                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          H                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector4                Vector                         (Parm, OutParm, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetVector4(float X, float Y, float W, float H, class UObject* __WorldContext, struct FVector4* Vector)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetVector4");

	UGlobalUIFunctionLibrary_C_GetVector4_Params params;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Vector != nullptr)
		*Vector = params.Vector;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InitAmmoDropBox
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          MeshComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LOD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::InitAmmoDropBox(class UMeshComponent* MeshComponent, int LOD, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InitAmmoDropBox");

	UGlobalUIFunctionLibrary_C_InitAmmoDropBox_Params params;
	params.MeshComponent = MeshComponent;
	params.LOD = LOD;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralBigIcon
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGlobalUIFunctionLibrary_C::GetRankIntegralBigIcon(const struct FString& Icon, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralBigIcon");

	UGlobalUIFunctionLibrary_C_GetRankIntegralBigIcon_Params params;
	params.Icon = Icon;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralSmallIcon
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGlobalUIFunctionLibrary_C::GetRankIntegralSmallIcon(const struct FString& Icon, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralSmallIcon");

	UGlobalUIFunctionLibrary_C_GetRankIntegralSmallIcon_Params params;
	params.Icon = Icon;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralSubIcon
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGlobalUIFunctionLibrary_C::GetRankIntegralSubIcon(const struct FString& Icon, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralSubIcon");

	UGlobalUIFunctionLibrary_C_GetRankIntegralSubIcon_Params params;
	params.Icon = Icon;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetRankInteral
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_STRUCT_RankIntegralLevel_type RankIntegralLevelInfo          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UImage*                  ImageIcon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextBlock_Rank                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCanvasPanel*            Canvas_Panel_Star              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Image_Star                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextBlock_Star                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSegmentStarOpen              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Image_Quality                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  vx_Image_Quality               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetRankInteral(const struct FBP_STRUCT_RankIntegralLevel_type& RankIntegralLevelInfo, class UImage* ImageIcon, class UTextBlock* TextBlock_Rank, class UCanvasPanel* Canvas_Panel_Star, class UImage* Image_Star, class UTextBlock* TextBlock_Star, bool isSegmentStarOpen, class UImage* Image_Quality, class UImage* vx_Image_Quality, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetRankInteral");

	UGlobalUIFunctionLibrary_C_SetRankInteral_Params params;
	params.RankIntegralLevelInfo = RankIntegralLevelInfo;
	params.ImageIcon = ImageIcon;
	params.TextBlock_Rank = TextBlock_Rank;
	params.Canvas_Panel_Star = Canvas_Panel_Star;
	params.Image_Star = Image_Star;
	params.TextBlock_Star = TextBlock_Star;
	params.isSegmentStarOpen = isSegmentStarOpen;
	params.Image_Quality = Image_Quality;
	params.vx_Image_Quality = vx_Image_Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImageFromPath
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 IconPath                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetImageFromPath(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImageFromPath");

	UGlobalUIFunctionLibrary_C_SetImageFromPath_Params params;
	params.Image = Image;
	params.IconPath = IconPath;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBrushFromSprite
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 Path                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             Result                         (Parm, OutParm)

void UGlobalUIFunctionLibrary_C::GetBrushFromSprite(const struct FSlateBrush& Brush, const struct FString& Path, class UObject* __WorldContext, struct FSlateBrush* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBrushFromSprite");

	UGlobalUIFunctionLibrary_C_GetBrushFromSprite_Params params;
	params.Brush = Brush;
	params.Path = Path;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.LoadSprite
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 IconPath                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::LoadSprite(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.LoadSprite");

	UGlobalUIFunctionLibrary_C_LoadSprite_Params params;
	params.Image = Image;
	params.IconPath = IconPath;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetXieQualityPath
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::GetXieQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetXieQualityPath");

	UGlobalUIFunctionLibrary_C_GetXieQualityPath_Params params;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBgQualityPath
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::GetBgQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBgQualityPath");

	UGlobalUIFunctionLibrary_C_GetBgQualityPath_Params params;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetQualityPath
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::GetQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetQualityPath");

	UGlobalUIFunctionLibrary_C_GetQualityPath_Params params;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCornerQuality
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetCornerQuality(class UImage* Image, int Quality, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCornerQuality");

	UGlobalUIFunctionLibrary_C_SetCornerQuality_Params params;
	params.Image = Image;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPingColor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ms                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetPingColor(float ms, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPingColor");

	UGlobalUIFunctionLibrary_C_GetPingColor_Params params;
	params.ms = ms;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImgWithPath
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  ImgRef                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 imgPath                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsMatchSize                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetImgWithPath(class UImage* ImgRef, const struct FString& imgPath, bool IsMatchSize, class UObject* __WorldContext, bool* Success)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImgWithPath");

	UGlobalUIFunctionLibrary_C_SetImgWithPath_Params params;
	params.ImgRef = ImgRef;
	params.imgPath = imgPath;
	params.IsMatchSize = IsMatchSize;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           chineseSensity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutName                        (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::GetItemName(const struct FString& Name, int Length, bool chineseSensity, class UObject* __WorldContext, struct FString* OutName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemName");

	UGlobalUIFunctionLibrary_C_GetItemName_Params params;
	params.Name = Name;
	params.Length = Length;
	params.chineseSensity = chineseSensity;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutName != nullptr)
		*OutName = params.OutName;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateImageByPath
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::UpdateImageByPath(class UImage* Image, const struct FString& Path, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateImageByPath");

	UGlobalUIFunctionLibrary_C_UpdateImageByPath_Params params;
	params.Image = Image;
	params.Path = Path;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateImageTint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::UpdateImageTint(class UImage* Image, const struct FLinearColor& Color, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateImageTint");

	UGlobalUIFunctionLibrary_C_UpdateImageTint_Params params;
	params.Image = Image;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ChangeBrushColor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             NewBrush                       (Parm, OutParm)

void UGlobalUIFunctionLibrary_C::ChangeBrushColor(const struct FSlateBrush& Brush, const struct FLinearColor& Color, class UObject* __WorldContext, struct FSlateBrush* NewBrush)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ChangeBrushColor");

	UGlobalUIFunctionLibrary_C_ChangeBrushColor_Params params;
	params.Brush = Brush;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewBrush != nullptr)
		*NewBrush = params.NewBrush;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetCameraMod
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Mod                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetCameraMod(class UObject* __WorldContext, int* Mod)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetCameraMod");

	UGlobalUIFunctionLibrary_C_GetCameraMod_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Mod != nullptr)
		*Mod = params.Mod;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetHumanLightProperty
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetHumanLightProperty(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetHumanLightProperty");

	UGlobalUIFunctionLibrary_C_SetHumanLightProperty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetWeaponLightProperty
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetWeaponLightProperty(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetWeaponLightProperty");

	UGlobalUIFunctionLibrary_C_SetWeaponLightProperty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneSkyLightProperty
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 lightName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTransform              Trans                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetSceneSkyLightProperty(const struct FString& lightName, const struct FTransform& Trans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneSkyLightProperty");

	UGlobalUIFunctionLibrary_C_SetSceneSkyLightProperty_Params params;
	params.lightName = lightName;
	params.Trans = Trans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetAndroidKeyIsValid
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetAndroidKeyIsValid(bool bValid, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetAndroidKeyIsValid");

	UGlobalUIFunctionLibrary_C_SetAndroidKeyIsValid_Params params;
	params.bValid = bValid;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.numToTimeStrFormat
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            timeNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TimeStr                        (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::numToTimeStrFormat(int timeNum, class UObject* __WorldContext, struct FString* TimeStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.numToTimeStrFormat");

	UGlobalUIFunctionLibrary_C_numToTimeStrFormat_Params params;
	params.timeNum = timeNum;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TimeStr != nullptr)
		*TimeStr = params.TimeStr;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.numToTimeStr
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            timeNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TimeStr                        (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::numToTimeStr(int timeNum, class UObject* __WorldContext, struct FString* TimeStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.numToTimeStr");

	UGlobalUIFunctionLibrary_C_numToTimeStr_Params params;
	params.timeNum = timeNum;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TimeStr != nullptr)
		*TimeStr = params.TimeStr;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateNationImage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 RoleNation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::UpdateNationImage(class UImage* Image, const struct FString& RoleNation, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateNationImage");

	UGlobalUIFunctionLibrary_C_UpdateNationImage_Params params;
	params.Image = Image;
	params.RoleNation = RoleNation;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetScenePointLightProperty
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 lightName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTransform              targetTrans                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            inverseSquareFalloff           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetScenePointLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetScenePointLightProperty");

	UGlobalUIFunctionLibrary_C_SetScenePointLightProperty_Params params;
	params.lightName = lightName;
	params.targetTrans = targetTrans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.inverseSquareFalloff = inverseSquareFalloff;
	params.Radius = Radius;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneDirectionalLightProperty
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 lightName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTransform              targetTrans                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetSceneDirectionalLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneDirectionalLightProperty");

	UGlobalUIFunctionLibrary_C_SetSceneDirectionalLightProperty_Params params;
	params.lightName = lightName;
	params.targetTrans = targetTrans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyCorpsIcon
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IconID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetLobbyCorpsIcon(int IconID, class UObject* __WorldContext, class UTexture2D** Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyCorpsIcon");

	UGlobalUIFunctionLibrary_C_GetLobbyCorpsIcon_Params params;
	params.IconID = IconID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyGlobalBp
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGlobal_Bp_C*            AsGlobal_Bp                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetLobbyGlobalBp(class UObject* __WorldContext, class UGlobal_Bp_C** AsGlobal_Bp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyGlobalBp");

	UGlobalUIFunctionLibrary_C_GetLobbyGlobalBp_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AsGlobal_Bp != nullptr)
		*AsGlobal_Bp = params.AsGlobal_Bp;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyFrameTexture
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            frameLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetLobbyFrameTexture(int frameLevel, class UObject* __WorldContext, class UTexture2D** Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyFrameTexture");

	UGlobalUIFunctionLibrary_C_GetLobbyFrameTexture_Params params;
	params.frameLevel = frameLevel;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetNationInfo
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NationCode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_RegionConfig_type NationInfo                     (Parm, OutParm)

void UGlobalUIFunctionLibrary_C::GetNationInfo(const struct FString& NationCode, class UObject* __WorldContext, struct FBP_STRUCT_RegionConfig_type* NationInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetNationInfo");

	UGlobalUIFunctionLibrary_C_GetNationInfo_Params params;
	params.NationCode = NationCode;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NationInfo != nullptr)
		*NationInfo = params.NationInfo;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImageWithSpriteRes
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ResPath                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetImageWithSpriteRes(const struct FString& ResPath, class UImage* Image, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImageWithSpriteRes");

	UGlobalUIFunctionLibrary_C_SetImageWithSpriteRes_Params params;
	params.ResPath = ResPath;
	params.Image = Image;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetNationSwitch
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetNationSwitch(const struct FString& Name, class UObject* __WorldContext, bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetNationSwitch");

	UGlobalUIFunctionLibrary_C_GetNationSwitch_Params params;
	params.Name = Name;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CheckIfMenuOpen
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MenuId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::CheckIfMenuOpen(int MenuId, class UObject* __WorldContext, bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CheckIfMenuOpen");

	UGlobalUIFunctionLibrary_C_CheckIfMenuOpen_Params params;
	params.MenuId = MenuId;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            res_id                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FirstTimeNum                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 time_s                         (Parm, OutParm, ZeroConstructor)
// bool                           is_have_limit                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetItemTimeS(int res_id, int FirstTimeNum, class UObject* __WorldContext, struct FString* time_s, bool* is_have_limit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS");

	UGlobalUIFunctionLibrary_C_GetItemTimeS_Params params;
	params.res_id = res_id;
	params.FirstTimeNum = FirstTimeNum;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (time_s != nullptr)
		*time_s = params.time_s;
	if (is_have_limit != nullptr)
		*is_have_limit = params.is_have_limit;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsByButton
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            validHours                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isShowCloseBtn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::ShowItemTipsByButton(int ItemId, class UButton* Button, int validHours, bool isShowCloseBtn, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsByButton");

	UGlobalUIFunctionLibrary_C_ShowItemTipsByButton_Params params;
	params.ItemId = ItemId;
	params.Button = Button;
	params.validHours = validHours;
	params.isShowCloseBtn = isShowCloseBtn;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseItemTips
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::CloseItemTips(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseItemTips");

	UGlobalUIFunctionLibrary_C_CloseItemTips_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CreateUAEUserWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CreateUAEUserWidget");

	UGlobalUIFunctionLibrary_C_CreateUAEUserWidget_Params params;
	params.Class = Class;
	params.Parent = Parent;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundCloseButton
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::PlaySoundCloseButton(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundCloseButton");

	UGlobalUIFunctionLibrary_C_PlaySoundCloseButton_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowEffect
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::ShowEffect(bool IsShow, class UObject* __WorldContext, TArray<class UWidget*>* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowEffect");

	UGlobalUIFunctionLibrary_C_ShowEffect_Params params;
	params.IsShow = IsShow;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWidgetVisible
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWidgetVisible");

	UGlobalUIFunctionLibrary_C_IsWidgetVisible_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundClickButton
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::PlaySoundClickButton(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundClickButton");

	UGlobalUIFunctionLibrary_C_PlaySoundClickButton_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendBAReport
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SendBAReport(int ButtonType, int Reason, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendBAReport");

	UGlobalUIFunctionLibrary_C_SendBAReport_Params params;
	params.ButtonType = ButtonType;
	params.Reason = Reason;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWhiteSpace
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsWhiteSpace(const struct FString& Text, class UObject* __WorldContext, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWhiteSpace");

	UGlobalUIFunctionLibrary_C_IsWhiteSpace_Params params;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetTextLength
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           chineseSensity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetTextLength(const struct FString& Text, bool chineseSensity, class UObject* __WorldContext, int* Length)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetTextLength");

	UGlobalUIFunctionLibrary_C_GetTextLength_Params params;
	params.Text = Text;
	params.chineseSensity = chineseSensity;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.BoolToVisible
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           collapse                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isButton                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               Visibility                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::BoolToVisible(bool Visible, bool collapse, bool isButton, class UObject* __WorldContext, ESlateVisibility* Visibility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.BoolToVisible");

	UGlobalUIFunctionLibrary_C_BoolToVisible_Params params;
	params.Visible = Visible;
	params.collapse = collapse;
	params.isButton = isButton;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Visibility != nullptr)
		*Visibility = params.Visibility;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsEnglish
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsEnglish(const struct FString& Text, class UObject* __WorldContext, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsEnglish");

	UGlobalUIFunctionLibrary_C_IsEnglish_Params params;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalData
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Abp_global_C*            globalObj                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetGlobalData(class UObject* __WorldContext, class Abp_global_C** globalObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalData");

	UGlobalUIFunctionLibrary_C_GetGlobalData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (globalObj != nullptr)
		*globalObj = params.globalObj;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLocalizeString
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 string1                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 string2                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 string3                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TextValue                      (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::GetLocalizeString(int ID, const struct FString& string1, const struct FString& string2, const struct FString& string3, class UObject* __WorldContext, struct FString* TextValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLocalizeString");

	UGlobalUIFunctionLibrary_C_GetLocalizeString_Params params;
	params.ID = ID;
	params.string1 = string1;
	params.string2 = string2;
	params.string3 = string3;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TextValue != nullptr)
		*TextValue = params.TextValue;
}


}

