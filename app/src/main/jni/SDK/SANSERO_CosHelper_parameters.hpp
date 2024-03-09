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

// Function CosHelper.CosBase.GetContent
struct UCosBase_GetContent_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function CosHelper.CosHelperBlueprintLibrary.UploadFileMemory
struct UCosHelperBlueprintLibrary_UploadFileMemory_Params
{
	class UCosHelper*                                  CosHelper;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              FileMemoryBuffer;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     URIPathName;                                              // (Parm, ZeroConstructor)
	struct FString                                     URLParameters;                                            // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnCosRequestCompleted;                                    // (Parm, ZeroConstructor)
	class UCosRequest*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CosHelper.CosHelperBlueprintLibrary.UploadFile
struct UCosHelperBlueprintLibrary_UploadFile_Params
{
	class UCosHelper*                                  CosHelper;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FilePathName;                                             // (Parm, ZeroConstructor)
	struct FString                                     URIPathName;                                              // (Parm, ZeroConstructor)
	struct FString                                     URLParameters;                                            // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnCosRequestCompleted;                                    // (Parm, ZeroConstructor)
	class UCosRequest*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CosHelper.CosHelperBlueprintLibrary.InitCosInfo
struct UCosHelperBlueprintLibrary_InitCosInfo_Params
{
	struct FString                                     Section;                                                  // (Parm, ZeroConstructor)
	struct FCosHelperInitializeInfo                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CosHelper.CosHelperBlueprintLibrary.GetFileInfo
struct UCosHelperBlueprintLibrary_GetFileInfo_Params
{
	class UCosHelper*                                  CosHelper;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     URIPathName;                                              // (Parm, ZeroConstructor)
	struct FString                                     URLParameters;                                            // (Parm, ZeroConstructor)
	int                                                FileInfoType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnCosRequestCompleted;                                    // (Parm, ZeroConstructor)
	class UCosRequest*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CosHelper.CosHelperBlueprintLibrary.DownloadFile
struct UCosHelperBlueprintLibrary_DownloadFile_Params
{
	class UCosHelper*                                  CosHelper;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     URIPathName;                                              // (Parm, ZeroConstructor)
	struct FString                                     URLParameters;                                            // (Parm, ZeroConstructor)
	struct FString                                     SavedPathName;                                            // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnCosRequestCompleted;                                    // (Parm, ZeroConstructor)
	class UCosRequest*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CosHelper.CosHelperBlueprintLibrary.DestroyCosHelper
struct UCosHelperBlueprintLibrary_DestroyCosHelper_Params
{
	class UCosHelper*                                  CosHelper;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CosHelper.CosHelperBlueprintLibrary.ConstructCosHelper
struct UCosHelperBlueprintLibrary_ConstructCosHelper_Params
{
	struct FCosHelperInitializeInfo                    InitializeInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class UCosHelper*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CosHelper.CosResponse.IsOK
struct UCosResponse_IsOK_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CosHelper.CosResponse.GetResponseCode
struct UCosResponse_GetResponseCode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CosHelper.CosResponse.GetRequestURL
struct UCosResponse_GetRequestURL_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CosHelper.CosResponse.GetFileInfo
struct UCosResponse_GetFileInfo_Params
{
	ECosHelperFileInfoType                             InFileInfoType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CosHelper.CosResponse.GetContentAsString
struct UCosResponse_GetContentAsString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

