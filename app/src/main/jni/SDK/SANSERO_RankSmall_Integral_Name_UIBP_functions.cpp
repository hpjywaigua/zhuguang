// Pubg Mobile Battelgrounds (2.9.0) SDK Generated By @hhamk2 
// 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @SANSERO_MOD_1
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RankSmall_Integral_Name_UIBP.RankSmall_Integral_Name_UIBP_C.SetRankText
// (Native, Event, NetResponse, Static, NetMulticast, Public, Delegate, NetServer, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor             ShadowColor                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateFontInfo          FontInfo                       (BlueprintVisible, BlueprintReadOnly, Parm)

void URankSmall_Integral_Name_UIBP_C::STATIC_SetRankText(const struct FSlateColor& Color, const struct FSlateColor& ShadowColor, const struct FSlateFontInfo& FontInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RankSmall_Integral_Name_UIBP.RankSmall_Integral_Name_UIBP_C.SetRankText");

	URankSmall_Integral_Name_UIBP_C_SetRankText_Params params;
	params.Color = Color;
	params.ShadowColor = ShadowColor;
	params.FontInfo = FontInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RankSmall_Integral_Name_UIBP.RankSmall_Integral_Name_UIBP_C.SetRankIntegral
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Delegate, NetServer, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// struct FBP_STRUCT_RankIntegralLevel_type RankIntegralLevel_Info         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           isStarOpen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankSmall_Integral_Name_UIBP_C::STATIC_SetRankIntegral(const struct FBP_STRUCT_RankIntegralLevel_type& RankIntegralLevel_Info, bool isStarOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RankSmall_Integral_Name_UIBP.RankSmall_Integral_Name_UIBP_C.SetRankIntegral");

	URankSmall_Integral_Name_UIBP_C_SetRankIntegral_Params params;
	params.RankIntegralLevel_Info = RankIntegralLevel_Info;
	params.isStarOpen = isStarOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RankSmall_Integral_Name_UIBP.RankSmall_Integral_Name_UIBP_C.ExecuteUbergraph_RankSmall_Integral_Name_UIBP
// (Net, NetReliable, Exec, Native, Event, Static, MulticastDelegate, Private, NetServer, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankSmall_Integral_Name_UIBP_C::STATIC_ExecuteUbergraph_RankSmall_Integral_Name_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RankSmall_Integral_Name_UIBP.RankSmall_Integral_Name_UIBP_C.ExecuteUbergraph_RankSmall_Integral_Name_UIBP");

	URankSmall_Integral_Name_UIBP_C_ExecuteUbergraph_RankSmall_Integral_Name_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

