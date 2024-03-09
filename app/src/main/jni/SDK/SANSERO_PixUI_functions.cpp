// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:14 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function PixUI.PixUIBPLibrary.PixUI_Version
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIBPLibrary::PixUI_Version()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_Version");

	UPixUIBPLibrary_PixUI_Version_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_Startup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 fstr_CachePathForWrite         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_Startup(const struct FString& fstr_CachePathForWrite)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_Startup");

	UPixUIBPLibrary_PixUI_Startup_Params params;
	params.fstr_CachePathForWrite = fstr_CachePathForWrite;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_Shutdown
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_Shutdown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_Shutdown");

	UPixUIBPLibrary_PixUI_Shutdown_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_ShowTick
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           b_show                         (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_ShowTick(bool b_show)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_ShowTick");

	UPixUIBPLibrary_PixUI_ShowTick_Params params;
	params.b_show = b_show;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_ShowResInfor
// (Final, Native, Static, Public, BlueprintCallable)

void UPixUIBPLibrary::PixUI_ShowResInfor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_ShowResInfor");

	UPixUIBPLibrary_PixUI_ShowResInfor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_ShowMousePos
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           b_show                         (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_ShowMousePos(bool b_show)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_ShowMousePos");

	UPixUIBPLibrary_PixUI_ShowMousePos_Params params;
	params.b_show = b_show;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetSupportTextShape
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           beSupportTextShape             (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetSupportTextShape(bool beSupportTextShape)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetSupportTextShape");

	UPixUIBPLibrary_PixUI_SetSupportTextShape_Params params;
	params.beSupportTextShape = beSupportTextShape;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetPaintDura
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            n_duar_count                   (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetPaintDura(int n_duar_count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetPaintDura");

	UPixUIBPLibrary_PixUI_SetPaintDura_Params params;
	params.n_duar_count = n_duar_count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetMobileUseTouchEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           b_used                         (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetMobileUseTouchEvent(bool b_used)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetMobileUseTouchEvent");

	UPixUIBPLibrary_PixUI_SetMobileUseTouchEvent_Params params;
	params.b_used = b_used;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetMatRootPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 fstr_root_path                 (Parm, ZeroConstructor)

void UPixUIBPLibrary::PixUI_SetMatRootPath(const struct FString& fstr_root_path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetMatRootPath");

	UPixUIBPLibrary_PixUI_SetMatRootPath_Params params;
	params.fstr_root_path = fstr_root_path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetMatBasePath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 fstr_base_path                 (Parm, ZeroConstructor)

void UPixUIBPLibrary::PixUI_SetMatBasePath(const struct FString& fstr_base_path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetMatBasePath");

	UPixUIBPLibrary_PixUI_SetMatBasePath_Params params;
	params.fstr_base_path = fstr_base_path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetDynamicFixFontSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           b_OpenDynamicFix               (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetDynamicFixFontSize(bool b_OpenDynamicFix)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetDynamicFixFontSize");

	UPixUIBPLibrary_PixUI_SetDynamicFixFontSize_Params params;
	params.b_OpenDynamicFix = b_OpenDynamicFix;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetDrawEffectNoPixelSnapping
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           b_NoPixelSnapping              (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetDrawEffectNoPixelSnapping(bool b_NoPixelSnapping)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetDrawEffectNoPixelSnapping");

	UPixUIBPLibrary_PixUI_SetDrawEffectNoPixelSnapping_Params params;
	params.b_NoPixelSnapping = b_NoPixelSnapping;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetDefaultFontSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            n_FontSize                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetDefaultFontSize(int n_FontSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetDefaultFontSize");

	UPixUIBPLibrary_PixUI_SetDefaultFontSize_Params params;
	params.n_FontSize = n_FontSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetDefaultFont
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 fstr_FontName                  (Parm, ZeroConstructor)

void UPixUIBPLibrary::PixUI_SetDefaultFont(const struct FString& fstr_FontName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetDefaultFont");

	UPixUIBPLibrary_PixUI_SetDefaultFont_Params params;
	params.fstr_FontName = fstr_FontName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetDebugTickDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          f_delay                        (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetDebugTickDelay(float f_delay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetDebugTickDelay");

	UPixUIBPLibrary_PixUI_SetDebugTickDelay_Params params;
	params.f_delay = f_delay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetDebugRetainDraw
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           b_retain                       (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetDebugRetainDraw(bool b_retain)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetDebugRetainDraw");

	UPixUIBPLibrary_PixUI_SetDebugRetainDraw_Params params;
	params.b_retain = b_retain;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetDebugNoCoreTick
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           b_no_tick                      (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetDebugNoCoreTick(bool b_no_tick)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetDebugNoCoreTick");

	UPixUIBPLibrary_PixUI_SetDebugNoCoreTick_Params params;
	params.b_no_tick = b_no_tick;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetDebugCPURunTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            n_time                         (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetDebugCPURunTime(int n_time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetDebugCPURunTime");

	UPixUIBPLibrary_PixUI_SetDebugCPURunTime_Params params;
	params.n_time = n_time;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetCoreTickDura
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            n_duar_count                   (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetCoreTickDura(int n_duar_count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetCoreTickDura");

	UPixUIBPLibrary_PixUI_SetCoreTickDura_Params params;
	params.n_duar_count = n_duar_count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_RHIShaderPlatform
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIBPLibrary::PixUI_RHIShaderPlatform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_RHIShaderPlatform");

	UPixUIBPLibrary_PixUI_RHIShaderPlatform_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_RHIShaderLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIBPLibrary::PixUI_RHIShaderLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_RHIShaderLevel");

	UPixUIBPLibrary_PixUI_RHIShaderLevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_RemoveSystemFont
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 fstr_FontName                  (Parm, ZeroConstructor)

void UPixUIBPLibrary::PixUI_RemoveSystemFont(const struct FString& fstr_FontName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_RemoveSystemFont");

	UPixUIBPLibrary_PixUI_RemoveSystemFont_Params params;
	params.fstr_FontName = fstr_FontName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_PlatformOSVersionCode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPixUIBPLibrary::PixUI_PlatformOSVersionCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_PlatformOSVersionCode");

	UPixUIBPLibrary_PixUI_PlatformOSVersionCode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_PlatformOSVersion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIBPLibrary::PixUI_PlatformOSVersion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_PlatformOSVersion");

	UPixUIBPLibrary_PixUI_PlatformOSVersion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_PlatformCode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIBPLibrary::PixUI_PlatformCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_PlatformCode");

	UPixUIBPLibrary_PixUI_PlatformCode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_Platform
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIBPLibrary::PixUI_Platform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_Platform");

	UPixUIBPLibrary_PixUI_Platform_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_LogEnable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           b_Enagble                      (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_LogEnable(bool b_Enagble)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_LogEnable");

	UPixUIBPLibrary_PixUI_LogEnable_Params params;
	params.b_Enagble = b_Enagble;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsSupportTextShape
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsSupportTextShape()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsSupportTextShape");

	UPixUIBPLibrary_PixUI_IsSupportTextShape_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsStartUp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsStartUp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsStartUp");

	UPixUIBPLibrary_PixUI_IsStartUp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsShowTick
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsShowTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsShowTick");

	UPixUIBPLibrary_PixUI_IsShowTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsShowMousePos
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsShowMousePos()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsShowMousePos");

	UPixUIBPLibrary_PixUI_IsShowMousePos_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderVulkan
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsRHIShaderVulkan()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderVulkan");

	UPixUIBPLibrary_PixUI_IsRHIShaderVulkan_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderOpenGLES2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsRHIShaderOpenGLES2()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderOpenGLES2");

	UPixUIBPLibrary_PixUI_IsRHIShaderOpenGLES2_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderOpenGL
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsRHIShaderOpenGL()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderOpenGL");

	UPixUIBPLibrary_PixUI_IsRHIShaderOpenGL_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderMetal
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsRHIShaderMetal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderMetal");

	UPixUIBPLibrary_PixUI_IsRHIShaderMetal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderDX
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsRHIShaderDX()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderDX");

	UPixUIBPLibrary_PixUI_IsRHIShaderDX_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsOsBit64
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsOsBit64()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsOsBit64");

	UPixUIBPLibrary_PixUI_IsOsBit64_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsOsBit32
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsOsBit32()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsOsBit32");

	UPixUIBPLibrary_PixUI_IsOsBit32_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsMobileUseTouchEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsMobileUseTouchEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsMobileUseTouchEvent");

	UPixUIBPLibrary_PixUI_IsMobileUseTouchEvent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsDynamicFixFontSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsDynamicFixFontSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsDynamicFixFontSize");

	UPixUIBPLibrary_PixUI_IsDynamicFixFontSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetWindowSlotObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            windowID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 strTagId                       (Parm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UPixUIBPLibrary::PixUI_GetWindowSlotObject(int windowID, const struct FString& strTagId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetWindowSlotObject");

	UPixUIBPLibrary_PixUI_GetWindowSlotObject_Params params;
	params.windowID = windowID;
	params.strTagId = strTagId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetPaintDura
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIBPLibrary::PixUI_GetPaintDura()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetPaintDura");

	UPixUIBPLibrary_PixUI_GetPaintDura_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetMatRootPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIBPLibrary::PixUI_GetMatRootPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetMatRootPath");

	UPixUIBPLibrary_PixUI_GetMatRootPath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetMatBasePath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIBPLibrary::PixUI_GetMatBasePath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetMatBasePath");

	UPixUIBPLibrary_PixUI_GetMatBasePath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetFontPath
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 fstr_FontName                  (Parm, ZeroConstructor)
// struct FString                 fstr_FontPath                  (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_GetFontPath(const struct FString& fstr_FontName, struct FString* fstr_FontPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetFontPath");

	UPixUIBPLibrary_PixUI_GetFontPath_Params params;
	params.fstr_FontName = fstr_FontName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (fstr_FontPath != nullptr)
		*fstr_FontPath = params.fstr_FontPath;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetDrawEffectNoPixelSnapping
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_GetDrawEffectNoPixelSnapping()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetDrawEffectNoPixelSnapping");

	UPixUIBPLibrary_PixUI_GetDrawEffectNoPixelSnapping_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetDefaultFontSize
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            n_FontSize                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_GetDefaultFontSize(int* n_FontSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetDefaultFontSize");

	UPixUIBPLibrary_PixUI_GetDefaultFontSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (n_FontSize != nullptr)
		*n_FontSize = params.n_FontSize;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetDefaultFont
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 fstr_FontName                  (Parm, OutParm, ZeroConstructor)

void UPixUIBPLibrary::PixUI_GetDefaultFont(struct FString* fstr_FontName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetDefaultFont");

	UPixUIBPLibrary_PixUI_GetDefaultFont_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (fstr_FontName != nullptr)
		*fstr_FontName = params.fstr_FontName;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetDebugTickDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPixUIBPLibrary::PixUI_GetDebugTickDelay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetDebugTickDelay");

	UPixUIBPLibrary_PixUI_GetDebugTickDelay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetDebugRetainDraw
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_GetDebugRetainDraw()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetDebugRetainDraw");

	UPixUIBPLibrary_PixUI_GetDebugRetainDraw_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetDebugNoCoreTick
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_GetDebugNoCoreTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetDebugNoCoreTick");

	UPixUIBPLibrary_PixUI_GetDebugNoCoreTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetDebugCPURunTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIBPLibrary::PixUI_GetDebugCPURunTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetDebugCPURunTime");

	UPixUIBPLibrary_PixUI_GetDebugCPURunTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetCoreTickDura
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIBPLibrary::PixUI_GetCoreTickDura()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetCoreTickDura");

	UPixUIBPLibrary_PixUI_GetCoreTickDura_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetCachePath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIBPLibrary::PixUI_GetCachePath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetCachePath");

	UPixUIBPLibrary_PixUI_GetCachePath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_FindByWindowID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            windowID                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPixUIWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIWidget* UPixUIBPLibrary::PixUI_FindByWindowID(int windowID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_FindByWindowID");

	UPixUIBPLibrary_PixUI_FindByWindowID_Params params;
	params.windowID = windowID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_CurrentGameFPS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPixUIBPLibrary::PixUI_CurrentGameFPS()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_CurrentGameFPS");

	UPixUIBPLibrary_PixUI_CurrentGameFPS_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_CreateWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPixUIWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIWidget* UPixUIBPLibrary::PixUI_CreateWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_CreateWidget");

	UPixUIBPLibrary_PixUI_CreateWidget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPixUIViewPortWidget*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIViewPortWidget* UPixUIBPLibrary::PixUI_CreateViewPortWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortWidget");

	UPixUIBPLibrary_PixUI_CreateViewPortWidget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortAddToCanvasEx
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCanvasPanel*            p_ParentCanvas                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPixUIViewPortWidget*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIViewPortWidget* UPixUIBPLibrary::PixUI_CreateViewPortAddToCanvasEx(class UCanvasPanel* p_ParentCanvas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortAddToCanvasEx");

	UPixUIBPLibrary_PixUI_CreateViewPortAddToCanvasEx_Params params;
	params.p_ParentCanvas = p_ParentCanvas;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortAddToCanvas
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCanvasPanel*            p_ParentCanvas                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FAnchors                Anchors                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FMargin                 Margin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UPixUIViewPortWidget*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIViewPortWidget* UPixUIBPLibrary::PixUI_CreateViewPortAddToCanvas(class UCanvasPanel* p_ParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortAddToCanvas");

	UPixUIBPLibrary_PixUI_CreateViewPortAddToCanvas_Params params;
	params.p_ParentCanvas = p_ParentCanvas;
	params.Anchors = Anchors;
	params.Margin = Margin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_CreateAddToCanvasEx
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCanvasPanel*            p_ParentCanvas                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPixUIWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIWidget* UPixUIBPLibrary::PixUI_CreateAddToCanvasEx(class UCanvasPanel* p_ParentCanvas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_CreateAddToCanvasEx");

	UPixUIBPLibrary_PixUI_CreateAddToCanvasEx_Params params;
	params.p_ParentCanvas = p_ParentCanvas;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_CreateAddToCanvas
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCanvasPanel*            p_ParentCanvas                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FAnchors                Anchors                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FMargin                 Margin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UPixUIWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIWidget* UPixUIBPLibrary::PixUI_CreateAddToCanvas(class UCanvasPanel* p_ParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_CreateAddToCanvas");

	UPixUIBPLibrary_PixUI_CreateAddToCanvas_Params params;
	params.p_ParentCanvas = p_ParentCanvas;
	params.Anchors = Anchors;
	params.Margin = Margin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_ClearCacheFile
// (Final, Native, Static, Public, BlueprintCallable)

void UPixUIBPLibrary::PixUI_ClearCacheFile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_ClearCacheFile");

	UPixUIBPLibrary_PixUI_ClearCacheFile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_AddSystemFont
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 fstr_FontName                  (Parm, ZeroConstructor)
// struct FString                 fstr_FontPath                  (Parm, ZeroConstructor)

void UPixUIBPLibrary::PixUI_AddSystemFont(const struct FString& fstr_FontName, const struct FString& fstr_FontPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_AddSystemFont");

	UPixUIBPLibrary_PixUI_AddSystemFont_Params params;
	params.fstr_FontName = fstr_FontName;
	params.fstr_FontPath = fstr_FontPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIInput.OnInputText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 fstrInsert                     (Parm, ZeroConstructor)
// bool                           b_end_input                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           b_lost_focus                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           b_replace                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIInput::OnInputText(const struct FString& fstrInsert, bool b_end_input, bool b_lost_focus, bool b_replace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIInput.OnInputText");

	UPixUIInput_OnInputText_Params params;
	params.fstrInsert = fstrInsert;
	params.b_end_input = b_end_input;
	params.b_lost_focus = b_lost_focus;
	params.b_replace = b_replace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIInput.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPixUIInput*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPixUIInput* UPixUIInput::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIInput.Get");

	UPixUIInput_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUILog.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPixUILog*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPixUILog* UPixUILog::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUILog.Get");

	UPixUILog_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUILog.DispatchLog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EPXLogTypes                    e_LogType                      (Parm, ZeroConstructor, IsPlainOldData)
// EPXLogLevels                   e_LogLevel                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 fstr_LogContent                (Parm, ZeroConstructor)

void UPixUILog::DispatchLog(EPXLogTypes e_LogType, EPXLogLevels e_LogLevel, const struct FString& fstr_LogContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUILog.DispatchLog");

	UPixUILog_DispatchLog_Params params;
	params.e_LogType = e_LogType;
	params.e_LogLevel = e_LogLevel;
	params.fstr_LogContent = fstr_LogContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIViewPortWidget.PostPxMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 fstr_Message                   (Parm, ZeroConstructor)

void UPixUIViewPortWidget::PostPxMessage(const struct FString& fstr_Message)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.PostPxMessage");

	UPixUIViewPortWidget_PostPxMessage_Params params;
	params.fstr_Message = fstr_Message;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIViewPortWidget.OnPixuiTransformDelegate
// (Final, Native, Public)
// Parameters:
// EPXViewEvent                   PXEventType                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Param1                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param2                         (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIViewPortWidget::OnPixuiTransformDelegate(EPXViewEvent PXEventType, int Param1, int Param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.OnPixuiTransformDelegate");

	UPixUIViewPortWidget_OnPixuiTransformDelegate_Params params;
	params.PXEventType = PXEventType;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIViewPortWidget.OnPixuiPromptDelegate
// (Final, Native, Public)
// Parameters:
// struct FString                 fstr_Tip                       (Parm, ZeroConstructor)
// struct FString                 fstr_Default                   (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIViewPortWidget::OnPixuiPromptDelegate(const struct FString& fstr_Tip, const struct FString& fstr_Default)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.OnPixuiPromptDelegate");

	UPixUIViewPortWidget_OnPixuiPromptDelegate_Params params;
	params.fstr_Tip = fstr_Tip;
	params.fstr_Default = fstr_Default;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.OnPixuiOpenDelegate
// (Final, Native, Public)
// Parameters:
// struct FString                 fstr_Url                       (Parm, ZeroConstructor)
// struct FString                 fstr_Name                      (Parm, ZeroConstructor)
// struct FString                 fstr_Features                  (Parm, ZeroConstructor)
// bool                           b_replace                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIViewPortWidget::OnPixuiOpenDelegate(const struct FString& fstr_Url, const struct FString& fstr_Name, const struct FString& fstr_Features, bool b_replace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.OnPixuiOpenDelegate");

	UPixUIViewPortWidget_OnPixuiOpenDelegate_Params params;
	params.fstr_Url = fstr_Url;
	params.fstr_Name = fstr_Name;
	params.fstr_Features = fstr_Features;
	params.b_replace = b_replace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.OnPixuiConfirmDelegate
// (Final, Native, Public)
// Parameters:
// struct FString                 fstr_ConfirmMsg                (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIViewPortWidget::OnPixuiConfirmDelegate(const struct FString& fstr_ConfirmMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.OnPixuiConfirmDelegate");

	UPixUIViewPortWidget_OnPixuiConfirmDelegate_Params params;
	params.fstr_ConfirmMsg = fstr_ConfirmMsg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.LoadPXViewFromUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 fstr_Url                       (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIViewPortWidget::LoadPXViewFromUrl(const struct FString& fstr_Url)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.LoadPXViewFromUrl");

	UPixUIViewPortWidget_LoadPXViewFromUrl_Params params;
	params.fstr_Url = fstr_Url;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.LoadPXViewFromGameAssetPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 fstr_FilePath                  (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIViewPortWidget::LoadPXViewFromGameAssetPath(const struct FString& fstr_FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.LoadPXViewFromGameAssetPath");

	UPixUIViewPortWidget_LoadPXViewFromGameAssetPath_Params params;
	params.fstr_FilePath = fstr_FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.LoadPXViewFromData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          arry_Data                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 fstr_RootPath                  (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIViewPortWidget::LoadPXViewFromData(const struct FString& fstr_RootPath, TArray<unsigned char>* arry_Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.LoadPXViewFromData");

	UPixUIViewPortWidget_LoadPXViewFromData_Params params;
	params.fstr_RootPath = fstr_RootPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (arry_Data != nullptr)
		*arry_Data = params.arry_Data;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.GetPixuiWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPixUIWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIWidget* UPixUIViewPortWidget::GetPixuiWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.GetPixuiWidget");

	UPixUIViewPortWidget_GetPixuiWidget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.Close
// (Final, Native, Public, BlueprintCallable)

void UPixUIViewPortWidget::Close()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.Close");

	UPixUIViewPortWidget_Close_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.SetScriptGlobalString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 str                            (Parm, ZeroConstructor)

void UPixUIWidget::SetScriptGlobalString(const struct FString& Name, const struct FString& Key, const struct FString& str)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.SetScriptGlobalString");

	UPixUIWidget_SetScriptGlobalString_Params params;
	params.Name = Name;
	params.Key = Key;
	params.str = str;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.SetScriptGlobalNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::SetScriptGlobalNumber(const struct FString& Name, const struct FString& Key, float Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.SetScriptGlobalNumber");

	UPixUIWidget_SetScriptGlobalNumber_Params params;
	params.Name = Name;
	params.Key = Key;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.SetScriptGlobalBoolean
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           V                              (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::SetScriptGlobalBoolean(const struct FString& Name, const struct FString& Key, bool V)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.SetScriptGlobalBoolean");

	UPixUIWidget_SetScriptGlobalBoolean_Params params;
	params.Name = Name;
	params.Key = Key;
	params.V = V;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.SetAutoTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           b_auto                         (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::SetAutoTransform(bool b_auto)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.SetAutoTransform");

	UPixUIWidget_SetAutoTransform_Params params;
	params.b_auto = b_auto;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.PostPxMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 fstr_Message                   (Parm, ZeroConstructor)

void UPixUIWidget::PostPxMessage(const struct FString& fstr_Message)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.PostPxMessage");

	UPixUIWidget_PostPxMessage_Params params;
	params.fstr_Message = fstr_Message;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.OpenPageFromUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 fstrUrl                        (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidget::OpenPageFromUrl(const struct FString& fstrUrl)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.OpenPageFromUrl");

	UPixUIWidget_OpenPageFromUrl_Params params;
	params.fstrUrl = fstrUrl;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.OpenPageFromGameAssetPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 fstr_File                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidget::OpenPageFromGameAssetPath(const struct FString& fstr_File)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.OpenPageFromGameAssetPath");

	UPixUIWidget_OpenPageFromGameAssetPath_Params params;
	params.fstr_File = fstr_File;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.OpenPageFromData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          arry_Data                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 fstr_BasePath                  (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidget::OpenPageFromData(const struct FString& fstr_BasePath, TArray<unsigned char>* arry_Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.OpenPageFromData");

	UPixUIWidget_OpenPageFromData_Params params;
	params.fstr_BasePath = fstr_BasePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (arry_Data != nullptr)
		*arry_Data = params.arry_Data;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.OnExternalTouchEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            touchPosX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            touchPosY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Pointer                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            touchType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::OnExternalTouchEvent(int touchPosX, int touchPosY, int Pointer, int touchType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.OnExternalTouchEvent");

	UPixUIWidget_OnExternalTouchEvent_Params params;
	params.touchPosX = touchPosX;
	params.touchPosY = touchPosY;
	params.Pointer = Pointer;
	params.touchType = touchType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.OnExternalTextInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strInputText                   (Parm, ZeroConstructor)
// bool                           beEndInput                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           beLostFocus                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           beReplace                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::OnExternalTextInput(const struct FString& strInputText, bool beEndInput, bool beLostFocus, bool beReplace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.OnExternalTextInput");

	UPixUIWidget_OnExternalTextInput_Params params;
	params.strInputText = strInputText;
	params.beEndInput = beEndInput;
	params.beLostFocus = beLostFocus;
	params.beReplace = beReplace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.OnExternalMouseEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            mousePosX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            mousePosY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            wheelOffsetZ                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            wheelOffsetW                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            btnType                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           btnDown                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::OnExternalMouseEvent(int mousePosX, int mousePosY, int wheelOffsetZ, int wheelOffsetW, int btnType, bool btnDown)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.OnExternalMouseEvent");

	UPixUIWidget_OnExternalMouseEvent_Params params;
	params.mousePosX = mousePosX;
	params.mousePosY = mousePosY;
	params.wheelOffsetZ = wheelOffsetZ;
	params.wheelOffsetW = wheelOffsetW;
	params.btnType = btnType;
	params.btnDown = btnDown;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.OnExternalKeyBoardEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            keyCode                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            keyModifiers                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           keyDown                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::OnExternalKeyBoardEvent(int keyCode, int keyModifiers, bool keyDown)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.OnExternalKeyBoardEvent");

	UPixUIWidget_OnExternalKeyBoardEvent_Params params;
	params.keyCode = keyCode;
	params.keyModifiers = keyModifiers;
	params.keyDown = keyDown;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.GetSlotObjectByTagId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 slotTagId                      (Parm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UPixUIWidget::GetSlotObjectByTagId(const struct FString& slotTagId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.GetSlotObjectByTagId");

	UPixUIWidget_GetSlotObjectByTagId_Params params;
	params.slotTagId = slotTagId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.GetScriptGlobalString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIWidget::GetScriptGlobalString(const struct FString& Name, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.GetScriptGlobalString");

	UPixUIWidget_GetScriptGlobalString_Params params;
	params.Name = Name;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.GetScriptGlobalNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPixUIWidget::GetScriptGlobalNumber(const struct FString& Name, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.GetScriptGlobalNumber");

	UPixUIWidget_GetScriptGlobalNumber_Params params;
	params.Name = Name;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.GetScriptGlobalBoolean
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIWidget::GetScriptGlobalBoolean(const struct FString& Name, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.GetScriptGlobalBoolean");

	UPixUIWidget_GetScriptGlobalBoolean_Params params;
	params.Name = Name;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.GetPxWinId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidget::GetPxWinId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.GetPxWinId");

	UPixUIWidget_GetPxWinId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.GetCtrlWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UPixUIWidget::GetCtrlWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.GetCtrlWidget");

	UPixUIWidget_GetCtrlWidget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.DisablePaint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDisablePaint                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::DisablePaint(bool bDisablePaint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.DisablePaint");

	UPixUIWidget_DisablePaint_Params params;
	params.bDisablePaint = bDisablePaint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.DestroyPage
// (Final, Native, Public, BlueprintCallable)

void UPixUIWidget::DestroyPage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.DestroyPage");

	UPixUIWidget_DestroyPage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.CreateScriptGlobal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)

void UPixUIWidget::CreateScriptGlobal(const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.CreateScriptGlobal");

	UPixUIWidget_CreateScriptGlobal_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.ClosePage
// (Final, Native, Public, BlueprintCallable)

void UPixUIWidget::ClosePage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.ClosePage");

	UPixUIWidget_ClosePage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidgetOld.SetScriptGlobalString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 str                            (Parm, ZeroConstructor)

void UPixUIWidgetOld::SetScriptGlobalString(const struct FString& Name, const struct FString& Key, const struct FString& str)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.SetScriptGlobalString");

	UPixUIWidgetOld_SetScriptGlobalString_Params params;
	params.Name = Name;
	params.Key = Key;
	params.str = str;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidgetOld.SetScriptGlobalNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidgetOld::SetScriptGlobalNumber(const struct FString& Name, const struct FString& Key, float Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.SetScriptGlobalNumber");

	UPixUIWidgetOld_SetScriptGlobalNumber_Params params;
	params.Name = Name;
	params.Key = Key;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidgetOld.SetScriptGlobalBoolean
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           V                              (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidgetOld::SetScriptGlobalBoolean(const struct FString& Name, const struct FString& Key, bool V)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.SetScriptGlobalBoolean");

	UPixUIWidgetOld_SetScriptGlobalBoolean_Params params;
	params.Name = Name;
	params.Key = Key;
	params.V = V;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidgetOld.SetCustomLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            n_in_layer                     (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidgetOld::SetCustomLayer(int n_in_layer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.SetCustomLayer");

	UPixUIWidgetOld_SetCustomLayer_Params params;
	params.n_in_layer = n_in_layer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidgetOld.SetAutoTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           b_auto                         (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidgetOld::SetAutoTransform(bool b_auto)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.SetAutoTransform");

	UPixUIWidgetOld_SetAutoTransform_Params params;
	params.b_auto = b_auto;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidgetOld.PostPxMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 fstr_Message                   (Parm, ZeroConstructor)

void UPixUIWidgetOld::PostPxMessage(const struct FString& fstr_Message)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.PostPxMessage");

	UPixUIWidgetOld_PostPxMessage_Params params;
	params.fstr_Message = fstr_Message;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidgetOld.OpenPageFromUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 fstr_Url                       (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidgetOld::OpenPageFromUrl(const struct FString& fstr_Url)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.OpenPageFromUrl");

	UPixUIWidgetOld_OpenPageFromUrl_Params params;
	params.fstr_Url = fstr_Url;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidgetOld.OpenPageFromGameAssetPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 fstr_File                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidgetOld::OpenPageFromGameAssetPath(const struct FString& fstr_File)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.OpenPageFromGameAssetPath");

	UPixUIWidgetOld_OpenPageFromGameAssetPath_Params params;
	params.fstr_File = fstr_File;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidgetOld.OpenPageFromData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          arry_Data                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 fstr_BasePath                  (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidgetOld::OpenPageFromData(const struct FString& fstr_BasePath, TArray<unsigned char>* arry_Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.OpenPageFromData");

	UPixUIWidgetOld_OpenPageFromData_Params params;
	params.fstr_BasePath = fstr_BasePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (arry_Data != nullptr)
		*arry_Data = params.arry_Data;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidgetOld.GetScriptGlobalString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIWidgetOld::GetScriptGlobalString(const struct FString& Name, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.GetScriptGlobalString");

	UPixUIWidgetOld_GetScriptGlobalString_Params params;
	params.Name = Name;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidgetOld.GetScriptGlobalNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPixUIWidgetOld::GetScriptGlobalNumber(const struct FString& Name, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.GetScriptGlobalNumber");

	UPixUIWidgetOld_GetScriptGlobalNumber_Params params;
	params.Name = Name;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidgetOld.GetScriptGlobalBoolean
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIWidgetOld::GetScriptGlobalBoolean(const struct FString& Name, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.GetScriptGlobalBoolean");

	UPixUIWidgetOld_GetScriptGlobalBoolean_Params params;
	params.Name = Name;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidgetOld.GetPxWinId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidgetOld::GetPxWinId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.GetPxWinId");

	UPixUIWidgetOld_GetPxWinId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidgetOld.GetCustomLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidgetOld::GetCustomLayer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.GetCustomLayer");

	UPixUIWidgetOld_GetCustomLayer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidgetOld.DestroyPage
// (Final, Native, Public, BlueprintCallable)

void UPixUIWidgetOld::DestroyPage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.DestroyPage");

	UPixUIWidgetOld_DestroyPage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidgetOld.CreateScriptGlobal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)

void UPixUIWidgetOld::CreateScriptGlobal(const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.CreateScriptGlobal");

	UPixUIWidgetOld_CreateScriptGlobal_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidgetOld.ClosePage
// (Final, Native, Public, BlueprintCallable)

void UPixUIWidgetOld::ClosePage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidgetOld.ClosePage");

	UPixUIWidgetOld_ClosePage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

