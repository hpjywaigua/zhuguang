// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:20 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.AddWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UUserWidget**            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIContainer_BP_C::AddWidgetInternal(class UUserWidget** Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.AddWidgetInternal");

	UGlobalUIContainer_BP_C_AddWidgetInternal_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.RemoveWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UUserWidget**            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIContainer_BP_C::RemoveWidgetInternal(class UUserWidget** Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.RemoveWidgetInternal");

	UGlobalUIContainer_BP_C_RemoveWidgetInternal_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.AddWidgetWithZOrderInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UUserWidget**            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ZOrder                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIContainer_BP_C::AddWidgetWithZOrderInternal(class UUserWidget** Widget, int* ZOrder)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.AddWidgetWithZOrderInternal");

	UGlobalUIContainer_BP_C_AddWidgetWithZOrderInternal_Params params;
	params.Widget = Widget;
	params.ZOrder = ZOrder;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.ExecuteUbergraph_GlobalUIContainer_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIContainer_BP_C::ExecuteUbergraph_GlobalUIContainer_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.ExecuteUbergraph_GlobalUIContainer_BP");

	UGlobalUIContainer_BP_C_ExecuteUbergraph_GlobalUIContainer_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

