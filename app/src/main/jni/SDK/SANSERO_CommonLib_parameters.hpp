#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:14 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Parameters
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function CommonLib.TextWidgetInterface.GetTextContent
struct UTextWidgetInterface_GetTextContent_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CommonLib.CommonLuaLibrary.IsMatch
struct UCommonLuaLibrary_IsMatch_Params
{
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
	struct FString                                     regex;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonLib.CommonLuaLibrary.GetName
struct UCommonLuaLibrary_GetName_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CommonLib.CommonLuaLibrary.GetModNames
struct UCommonLuaLibrary_GetModNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CommonLib.CommonLuaLibrary.GetGWorld
struct UCommonLuaLibrary_GetGWorld_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonLib.CommonLuaLibrary.GetFullName
struct UCommonLuaLibrary_GetFullName_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CommonLib.RuntimeFilesDownloaderLibrary.DownloadFile
struct URuntimeFilesDownloaderLibrary_DownloadFile_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     SavePath;                                                 // (Parm, ZeroConstructor)
	class URuntimeFilesDownloaderLibrary*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonLib.RuntimeFilesDownloaderLibrary.CreateDownloader
struct URuntimeFilesDownloaderLibrary_CreateDownloader_Params
{
	class URuntimeFilesDownloaderLibrary*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonLib.ServiceManager.UnregisterService
struct UServiceManager_UnregisterService_Params
{
	class UClass*                                      ServiceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     serviceName;                                              // (Parm, ZeroConstructor)
};

// Function CommonLib.ServiceManager.RegisterService
struct UServiceManager_RegisterService_Params
{
	class UObject*                                     Service;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ServiceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     serviceName;                                              // (Parm, ZeroConstructor)
};

// Function CommonLib.ServiceManager.GetService
struct UServiceManager_GetService_Params
{
	class UClass*                                      ServiceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     serviceName;                                              // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

