#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:14 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class PixUI.PixUIBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UPixUIBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIBPLibrary");
		return pStaticClass;
	}


	static struct FString PixUI_Version();
	static bool PixUI_Startup(const struct FString& fstr_CachePathForWrite);
	static bool PixUI_Shutdown();
	static void PixUI_ShowTick(bool b_show);
	static void PixUI_ShowResInfor();
	static void PixUI_ShowMousePos(bool b_show);
	static void PixUI_SetSupportTextShape(bool beSupportTextShape);
	static void PixUI_SetPaintDura(int n_duar_count);
	static void PixUI_SetMobileUseTouchEvent(bool b_used);
	static void PixUI_SetMatRootPath(const struct FString& fstr_root_path);
	static void PixUI_SetMatBasePath(const struct FString& fstr_base_path);
	static void PixUI_SetDynamicFixFontSize(bool b_OpenDynamicFix);
	static void PixUI_SetDrawEffectNoPixelSnapping(bool b_NoPixelSnapping);
	static void PixUI_SetDefaultFontSize(int n_FontSize);
	static void PixUI_SetDefaultFont(const struct FString& fstr_FontName);
	static void PixUI_SetDebugTickDelay(float f_delay);
	static void PixUI_SetDebugRetainDraw(bool b_retain);
	static void PixUI_SetDebugNoCoreTick(bool b_no_tick);
	static void PixUI_SetDebugCPURunTime(int n_time);
	static void PixUI_SetCoreTickDura(int n_duar_count);
	static int PixUI_RHIShaderPlatform();
	static int PixUI_RHIShaderLevel();
	static void PixUI_RemoveSystemFont(const struct FString& fstr_FontName);
	static float PixUI_PlatformOSVersionCode();
	static struct FString PixUI_PlatformOSVersion();
	static int PixUI_PlatformCode();
	static struct FString PixUI_Platform();
	static void PixUI_LogEnable(bool b_Enagble);
	static bool PixUI_IsSupportTextShape();
	static bool PixUI_IsStartUp();
	static bool PixUI_IsShowTick();
	static bool PixUI_IsShowMousePos();
	static bool PixUI_IsRHIShaderVulkan();
	static bool PixUI_IsRHIShaderOpenGLES2();
	static bool PixUI_IsRHIShaderOpenGL();
	static bool PixUI_IsRHIShaderMetal();
	static bool PixUI_IsRHIShaderDX();
	static bool PixUI_IsOsBit64();
	static bool PixUI_IsOsBit32();
	static bool PixUI_IsMobileUseTouchEvent();
	static bool PixUI_IsDynamicFixFontSize();
	static class UObject* PixUI_GetWindowSlotObject(int windowID, const struct FString& strTagId);
	static int PixUI_GetPaintDura();
	static struct FString PixUI_GetMatRootPath();
	static struct FString PixUI_GetMatBasePath();
	static bool PixUI_GetFontPath(const struct FString& fstr_FontName, struct FString* fstr_FontPath);
	static bool PixUI_GetDrawEffectNoPixelSnapping();
	static void PixUI_GetDefaultFontSize(int* n_FontSize);
	static void PixUI_GetDefaultFont(struct FString* fstr_FontName);
	static float PixUI_GetDebugTickDelay();
	static bool PixUI_GetDebugRetainDraw();
	static bool PixUI_GetDebugNoCoreTick();
	static int PixUI_GetDebugCPURunTime();
	static int PixUI_GetCoreTickDura();
	static struct FString PixUI_GetCachePath();
	static class UPixUIWidget* PixUI_FindByWindowID(int windowID);
	static float PixUI_CurrentGameFPS();
	static class UPixUIWidget* PixUI_CreateWidget();
	static class UPixUIViewPortWidget* PixUI_CreateViewPortWidget();
	static class UPixUIViewPortWidget* PixUI_CreateViewPortAddToCanvasEx(class UCanvasPanel* p_ParentCanvas);
	static class UPixUIViewPortWidget* PixUI_CreateViewPortAddToCanvas(class UCanvasPanel* p_ParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin);
	static class UPixUIWidget* PixUI_CreateAddToCanvasEx(class UCanvasPanel* p_ParentCanvas);
	static class UPixUIWidget* PixUI_CreateAddToCanvas(class UCanvasPanel* p_ParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin);
	static void PixUI_ClearCacheFile();
	static void PixUI_AddSystemFont(const struct FString& fstr_FontName, const struct FString& fstr_FontPath);
};


// Class PixUI.PixUIInput
// 0x0038 (0x0060 - 0x0028)
class UPixUIInput : public UObject
{
public:
	struct FScriptDelegate                             ActivateDelegate;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DeativateInput;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIInput");
		return pStaticClass;
	}


	static void OnInputText(const struct FString& fstrInsert, bool b_end_input, bool b_lost_focus, bool b_replace);
	static class UPixUIInput* Get();
};


// Class PixUI.PixUILog
// 0x0010 (0x0038 - 0x0028)
class UPixUILog : public UObject
{
public:
	struct FScriptMulticastDelegate                    LogDelegate;                                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUILog");
		return pStaticClass;
	}


	static class UPixUILog* Get();
	static void DispatchLog(EPXLogTypes e_LogType, EPXLogLevels e_LogLevel, const struct FString& fstr_LogContent);
};


// Class PixUI.PixUIScriptVM
// 0x0148 (0x0170 - 0x0028)
class UPixUIScriptVM : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCloseDelegate;                                          // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDestroyDelegate;                                        // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiVmOnLoadedDelegate;                                  // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiVmOnScriptStateInitDelegate;                         // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiVmOnInternalErrorDelegate;                           // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             pixuiVmOpenDelegate;                                      // 0x00D0(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    pixuiVmCloseDelegate;                                     // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiVmAlertDelegate;                                     // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             pixuiVmConfirmDelegate;                                   // 0x0100(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             pixuiVmPrompDelegate;                                     // 0x0110(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    pixuiVmTransformDelegate;                                 // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiVmMessageDelegate;                                   // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiVmAppForegroundDelegate;                             // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiVmAppBackgroundDelegate;                             // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0160(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIScriptVM");
		return pStaticClass;
	}

};


// Class PixUI.PixUIViewPortWidget
// 0x0038 (0x0298 - 0x0260)
class UPixUIViewPortWidget : public UUserWidget
{
public:
	struct FScriptDelegate                             pixuiWinOpenDelegate;                                     // 0x0260(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             pixuiWinConfirmDelegate;                                  // 0x0270(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             pixuiWinPrompDelegate;                                    // 0x0280(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0290(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIViewPortWidget");
		return pStaticClass;
	}


	void PostPxMessage(const struct FString& fstr_Message);
	void OnPixuiTransformDelegate(EPXViewEvent PXEventType, int Param1, int Param2);
	struct FString OnPixuiPromptDelegate(const struct FString& fstr_Tip, const struct FString& fstr_Default);
	int OnPixuiOpenDelegate(const struct FString& fstr_Url, const struct FString& fstr_Name, const struct FString& fstr_Features, bool b_replace);
	bool OnPixuiConfirmDelegate(const struct FString& fstr_ConfirmMsg);
	int LoadPXViewFromUrl(const struct FString& fstr_Url);
	int LoadPXViewFromGameAssetPath(const struct FString& fstr_FilePath);
	int LoadPXViewFromData(const struct FString& fstr_RootPath, TArray<unsigned char>* arry_Data);
	class UPixUIWidget* GetPixuiWidget();
	void Close();
};


// Class PixUI.PixUIWidget
// 0x02B0 (0x03E0 - 0x0130)
class UPixUIWidget : public UCanvasPanel
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0130(0x0068) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCloseDelegate;                                          // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDestroyDelegate;                                        // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnLoadedDelegate;                                    // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnScriptStateInitDelegate;                           // 0x01C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnInternalErrorDelegate;                             // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             pixuiWinOpenDelegate;                                     // 0x01E8(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    pixuiWinCloseDelegate;                                    // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWinAlertDelegate;                                    // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             pixuiWinConfirmDelegate;                                  // 0x0218(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             pixuiWinPrompDelegate;                                    // 0x0228(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    pixuiWinTransformDelegate;                                // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWinMessageDelegate;                                  // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWin_app_foreground_delegate;                         // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWin_app_background_delegate;                         // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             pixuiWinHookKeyEvent;                                     // 0x0278(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x158];                                     // 0x0288(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIWidget");
		return pStaticClass;
	}


	void SetScriptGlobalString(const struct FString& Name, const struct FString& Key, const struct FString& str);
	void SetScriptGlobalNumber(const struct FString& Name, const struct FString& Key, float Num);
	void SetScriptGlobalBoolean(const struct FString& Name, const struct FString& Key, bool V);
	void SetAutoTransform(bool b_auto);
	void PostPxMessage(const struct FString& fstr_Message);
	int OpenPageFromUrl(const struct FString& fstrUrl);
	int OpenPageFromGameAssetPath(const struct FString& fstr_File);
	int OpenPageFromData(const struct FString& fstr_BasePath, TArray<unsigned char>* arry_Data);
	void OnExternalTouchEvent(int touchPosX, int touchPosY, int Pointer, int touchType);
	void OnExternalTextInput(const struct FString& strInputText, bool beEndInput, bool beLostFocus, bool beReplace);
	void OnExternalMouseEvent(int mousePosX, int mousePosY, int wheelOffsetZ, int wheelOffsetW, int btnType, bool btnDown);
	void OnExternalKeyBoardEvent(int keyCode, int keyModifiers, bool keyDown);
	class UObject* GetSlotObjectByTagId(const struct FString& slotTagId);
	struct FString GetScriptGlobalString(const struct FString& Name, const struct FString& Key);
	float GetScriptGlobalNumber(const struct FString& Name, const struct FString& Key);
	bool GetScriptGlobalBoolean(const struct FString& Name, const struct FString& Key);
	int GetPxWinId();
	class UWidget* GetCtrlWidget();
	void DisablePaint(bool bDisablePaint);
	void DestroyPage();
	void CreateScriptGlobal(const struct FString& Name);
	void ClosePage();
};


// Class PixUI.PixUIWidgetOld
// 0x0150 (0x0250 - 0x0100)
class UPixUIWidgetOld : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCloseDelegate;                                          // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDestroyDelegate;                                        // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnLoadedDelegate;                                    // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnScriptStateInitDelegate;                           // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnInternalErrorDelegate;                             // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             pixuiWinOpenDelegate;                                     // 0x0160(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    pixuiWinCloseDelegate;                                    // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWinAlertDelegate;                                    // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             pixuiWinConfirmDelegate;                                  // 0x0190(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             pixuiWinPrompDelegate;                                    // 0x01A0(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    pixuiWinTransformDelegate;                                // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWinMessageDelegate;                                  // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWin_app_foreground_delegate;                         // 0x01D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWin_app_background_delegate;                         // 0x01E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x60];                                      // 0x01F0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIWidgetOld");
		return pStaticClass;
	}


	void SetScriptGlobalString(const struct FString& Name, const struct FString& Key, const struct FString& str);
	void SetScriptGlobalNumber(const struct FString& Name, const struct FString& Key, float Num);
	void SetScriptGlobalBoolean(const struct FString& Name, const struct FString& Key, bool V);
	void SetCustomLayer(int n_in_layer);
	void SetAutoTransform(bool b_auto);
	void PostPxMessage(const struct FString& fstr_Message);
	int OpenPageFromUrl(const struct FString& fstr_Url);
	int OpenPageFromGameAssetPath(const struct FString& fstr_File);
	int OpenPageFromData(const struct FString& fstr_BasePath, TArray<unsigned char>* arry_Data);
	struct FString GetScriptGlobalString(const struct FString& Name, const struct FString& Key);
	float GetScriptGlobalNumber(const struct FString& Name, const struct FString& Key);
	bool GetScriptGlobalBoolean(const struct FString& Name, const struct FString& Key);
	int GetPxWinId();
	int GetCustomLayer();
	void DestroyPage();
	void CreateScriptGlobal(const struct FString& Name);
	void ClosePage();
};


// Class PixUI.PxSubLayerWidget
// 0x0020 (0x0120 - 0x0100)
class UPxSubLayerWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxSubLayerWidget");
		return pStaticClass;
	}

};


// Class PixUI.PxSubCtrlWidget
// 0x0010 (0x0130 - 0x0120)
class UPxSubCtrlWidget : public UPxSubLayerWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxSubCtrlWidget");
		return pStaticClass;
	}

};


}

