// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:15 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function MediaCompositing.MediaPlaneComponent.SetMediaPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMediaPlaneParameters   Plane                          (Parm)

void UMediaPlaneComponent::SetMediaPlane(const struct FMediaPlaneParameters& Plane)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MediaCompositing.MediaPlaneComponent.SetMediaPlane");

	UMediaPlaneComponent_SetMediaPlane_Params params;
	params.Plane = Plane;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MediaCompositing.MediaPlaneComponent.OnRenderTextureChanged
// (Final, Native, Public)

void UMediaPlaneComponent::OnRenderTextureChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MediaCompositing.MediaPlaneComponent.OnRenderTextureChanged");

	UMediaPlaneComponent_OnRenderTextureChanged_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MediaCompositing.MediaPlaneComponent.GetPlane
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMediaPlaneParameters   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMediaPlaneParameters UMediaPlaneComponent::GetPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MediaCompositing.MediaPlaneComponent.GetPlane");

	UMediaPlaneComponent_GetPlane_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

