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

// Function QuantumDevKit.FirebaseHelper.IsNotificationLaunchApp
struct UFirebaseHelper_IsNotificationLaunchApp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuantumDevKit.FirebaseHelper.GetNotificationLaunchAppExtraData
struct UFirebaseHelper_GetNotificationLaunchAppExtraData_Params
{
	struct FString                                     InKey;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QuantumDevKit.FirebaseHelper.GetInstance
struct UFirebaseHelper_GetInstance_Params
{
	class UFirebaseHelper*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuantumDevKit.FirebaseHelper.GetFIRInstallId
struct UFirebaseHelper_GetFIRInstallId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QuantumDevKit.FirebaseHelper.GetFIRAppInstanceId
struct UFirebaseHelper_GetFIRAppInstanceId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QuantumDevKit.FirebaseHelper.GetFCMToken
struct UFirebaseHelper_GetFCMToken_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QuantumDevKit.FirebaseHelper.ConsumeNotificationLaunchApp
struct UFirebaseHelper_ConsumeNotificationLaunchApp_Params
{
};

// Function QuantumDevKit.PhotoAlbumHelper.Initialize
struct UPhotoAlbumHelper_Initialize_Params
{
};

// Function QuantumDevKit.PhotoAlbumHelper.GetInstance
struct UPhotoAlbumHelper_GetInstance_Params
{
	class UPhotoAlbumHelper*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuantumDevKit.PhotoAlbumHelper.GenerateImageFromAlbum
struct UPhotoAlbumHelper_GenerateImageFromAlbum_Params
{
	struct FString                                     InFilePath;                                               // (Parm, ZeroConstructor)
	struct FString                                     InThumbFilePath;                                          // (Parm, ZeroConstructor)
	int                                                InThumbnailWidth;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InThumbnailHeight;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InForceJPG;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuantumDevKit.PhotoAlbumHelper.FetchAlbumImageInfo
struct UPhotoAlbumHelper_FetchAlbumImageInfo_Params
{
	int                                                InStartIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InLimitNum;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InThumbWidth;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InThumbHeight;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InThumbPath;                                              // (Parm, ZeroConstructor)
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetStatus
struct UQuantumFirebaseRemoteConfig_GetStatus_Params
{
	EQuantumFirebaseRemoteConfigStatus                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetRemoteConfig
struct UQuantumFirebaseRemoteConfig_GetRemoteConfig_Params
{
	struct FString                                     ConfigNameToQuery;                                        // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetInstance
struct UQuantumFirebaseRemoteConfig_GetInstance_Params
{
	class UQuantumFirebaseRemoteConfig*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuantumDevKit.SystemPermissionHelper.RequestPermissions
struct USystemPermissionHelper_RequestPermissions_Params
{
	int                                                InPermissionType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InRequestCode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuantumDevKit.SystemPermissionHelper.IsPermissionGranted
struct USystemPermissionHelper_IsPermissionGranted_Params
{
	int                                                InPermissionType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuantumDevKit.SystemPermissionHelper.Initialize
struct USystemPermissionHelper_Initialize_Params
{
};

// Function QuantumDevKit.SystemPermissionHelper.GetInstance
struct USystemPermissionHelper_GetInstance_Params
{
	class USystemPermissionHelper*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuantumDevKit.SystemPermissionHelper.AndroidShouldShowRequestPermissionRationale
struct USystemPermissionHelper_AndroidShouldShowRequestPermissionRationale_Params
{
	struct FString                                     InPermission;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuantumDevKit.SystemPermissionHelper.AndroidRequestPermissions
struct USystemPermissionHelper_AndroidRequestPermissions_Params
{
	struct FString                                     InPermission;                                             // (Parm, ZeroConstructor)
	int                                                InRequestCode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuantumDevKit.SystemPermissionHelper.AndroidIsPermissionGranted
struct USystemPermissionHelper_AndroidIsPermissionGranted_Params
{
	struct FString                                     InPermission;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuantumDevKit.SystemPermissionHelper.AndroidHasDefinePermission
struct USystemPermissionHelper_AndroidHasDefinePermission_Params
{
	struct FString                                     InPermssionName;                                          // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

