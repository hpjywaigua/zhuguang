#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:15 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Parameters
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function WebCameraFeed.WebCameraWidget.UnLockScreenOrientation
struct UWebCameraWidget_UnLockScreenOrientation_Params
{
};

// Function WebCameraFeed.WebCameraWidget.SwitchFrontAndBackCamera
struct UWebCameraWidget_SwitchFrontAndBackCamera_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WebCameraFeed.WebCameraWidget.SetDeviceId
struct UWebCameraWidget_SetDeviceId_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WebCameraFeed.WebCameraWidget.SetColorAndOpacity
struct UWebCameraWidget_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (Parm, IsPlainOldData)
};

// Function WebCameraFeed.WebCameraWidget.SaveAsImage
struct UWebCameraWidget_SaveAsImage_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WebCameraFeed.WebCameraWidget.ReleaseVideoGrabber
struct UWebCameraWidget_ReleaseVideoGrabber_Params
{
};

// Function WebCameraFeed.WebCameraWidget.LockScreenOrientation
struct UWebCameraWidget_LockScreenOrientation_Params
{
};

// Function WebCameraFeed.WebCameraWidget.InitVideoGrabber
struct UWebCameraWidget_InitVideoGrabber_Params
{
};

// Function WebCameraFeed.WebCameraWidget.GetFrontCameraId
struct UWebCameraWidget_GetFrontCameraId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WebCameraFeed.WebCameraWidget.GetBackCameraId
struct UWebCameraWidget_GetBackCameraId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

