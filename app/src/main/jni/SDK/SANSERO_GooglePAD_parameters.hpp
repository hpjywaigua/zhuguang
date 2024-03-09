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

// Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
struct UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Params
{
	EGooglePADErrorCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
struct UGooglePADFunctionLibrary_RequestRemoval_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	EGooglePADErrorCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
struct UGooglePADFunctionLibrary_RequestInfo_Params
{
	TArray<struct FString>                             AssetPacks;                                               // (ConstParm, Parm, ZeroConstructor)
	EGooglePADErrorCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
struct UGooglePADFunctionLibrary_RequestDownload_Params
{
	TArray<struct FString>                             AssetPacks;                                               // (ConstParm, Parm, ZeroConstructor)
	EGooglePADErrorCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
struct UGooglePADFunctionLibrary_ReleaseDownloadState_Params
{
	int                                                State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
struct UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Params
{
	int                                                Location;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
struct UGooglePADFunctionLibrary_GetTotalBytesToDownload_Params
{
	int                                                State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
struct UGooglePADFunctionLibrary_GetStorageMethod_Params
{
	int                                                Location;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EGooglePADStorageMethod                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
struct UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Params
{
	EGooglePADCellularDataConfirmStatus                Status;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EGooglePADErrorCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
struct UGooglePADFunctionLibrary_GetDownloadStatus_Params
{
	int                                                State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EGooglePADDownloadStatus                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
struct UGooglePADFunctionLibrary_GetDownloadState_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EGooglePADErrorCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
struct UGooglePADFunctionLibrary_GetBytesDownloaded_Params
{
	int                                                State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
struct UGooglePADFunctionLibrary_GetAssetsPath_Params
{
	int                                                Location;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
struct UGooglePADFunctionLibrary_GetAssetPackLocation_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EGooglePADErrorCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
struct UGooglePADFunctionLibrary_CancelDownload_Params
{
	TArray<struct FString>                             AssetPacks;                                               // (ConstParm, Parm, ZeroConstructor)
	EGooglePADErrorCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

