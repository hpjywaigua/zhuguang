// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:15 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function NiagaraUIRenderer.NiagaraSystemWidget.SetIsActivated
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsActive                    (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraSystemWidget::SetIsActivated(bool bInIsActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.SetIsActivated");

	UNiagaraSystemWidget_SetIsActivated_Params params;
	params.bInIsActive = bInIsActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNiagaraUIComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UNiagaraUIComponent* UNiagaraSystemWidget::GetNiagaraComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent");

	UNiagaraSystemWidget_GetNiagaraComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.GetIsActivated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagaraSystemWidget::GetIsActivated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.GetIsActivated");

	UNiagaraSystemWidget_GetIsActivated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
// (Final, Native, Public, BlueprintCallable)

void UNiagaraSystemWidget::DeactivateSystem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem");

	UNiagaraSystemWidget_DeactivateSystem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraSystemWidget::ActivateSystem(bool Reset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem");

	UNiagaraSystemWidget_ActivateSystem_Params params;
	params.Reset = Reset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

