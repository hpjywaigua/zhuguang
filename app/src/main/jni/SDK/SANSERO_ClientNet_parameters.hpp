#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Parameters
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function ClientNet.HDmpveNet.SetTickNetMsgMaxTime
struct UHDmpveNet_SetTickNetMsgMaxTime_Params
{
	float                                              MaxTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.HDmpveNet.OnWebviewNotify
struct UHDmpveNet_OnWebviewNotify_Params
{
	struct FWebviewInfoWrapper                         webviewinfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ClientNet.HDmpveNet.OnUAAssistantNotify
struct UHDmpveNet_OnUAAssistantNotify_Params
{
	struct FUAAssistantInfoWrapper                     uaAssistantInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ClientNet.HDmpveNet.OnTraceCallBack
struct UHDmpveNet_OnTraceCallBack_Params
{
	int                                                code;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     dataJson;                                                 // (Parm, ZeroConstructor)
};

// Function ClientNet.HDmpveNet.OnTConndAuthFailDelegate
struct UHDmpveNet_OnTConndAuthFailDelegate_Params
{
};

// Function ClientNet.HDmpveNet.OnShareNotify
struct UHDmpveNet_OnShareNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlatForm;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.HDmpveNet.OnRequestPermissionsResult
struct UHDmpveNet_OnRequestPermissionsResult_Params
{
	int                                                code;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     permission;                                               // (Parm, ZeroConstructor)
	struct FString                                     grantResult;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.HDmpveNet.OnReceiveDataNotify
struct UHDmpveNet_OnReceiveDataNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Msg;                                                      // (Parm, ZeroConstructor)
};

// Function ClientNet.HDmpveNet.OnQuickLoginNotify
struct UHDmpveNet_OnQuickLoginNotify_Params
{
	struct FWakeupInfoWrapper                          wakeupinfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ClientNet.HDmpveNet.OnQRCodeGenQRImg
struct UHDmpveNet_OnQRCodeGenQRImg_Params
{
	int                                                Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Ret;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     imgPath;                                                  // (Parm, ZeroConstructor)
};

// Function ClientNet.HDmpveNet.OnMigrateNotify
struct UHDmpveNet_OnMigrateNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.HDmpveNet.OnLaunchInfo
struct UHDmpveNet_OnLaunchInfo_Params
{
	struct FString                                     roominfo;                                                 // (Parm, ZeroConstructor)
};

// Function ClientNet.HDmpveNet.OnIGShareUploadFinished
struct UHDmpveNet_OnIGShareUploadFinished_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlatForm;                                                 // (Parm, ZeroConstructor)
};

// Function ClientNet.HDmpveNet.OnGroupNotify
struct UHDmpveNet_OnGroupNotify_Params
{
	struct FGroupInfoWrapper                           groupInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ClientNet.HDmpveNet.OnGetWebviewActionNotify
struct UHDmpveNet_OnGetWebviewActionNotify_Params
{
	struct FString                                     webviewinfo;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.HDmpveNet.OnGetTicketNotify
struct UHDmpveNet_OnGetTicketNotify_Params
{
	struct FString                                     TicketInfo;                                               // (Parm, ZeroConstructor)
};

// Function ClientNet.HDmpveNet.OnGetShortUrlNotify
struct UHDmpveNet_OnGetShortUrlNotify_Params
{
	struct FShortURLInfoWrapper                        shorturlinfo;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ClientNet.HDmpveNet.OnGetPlatformFriendsNotify
struct UHDmpveNet_OnGetPlatformFriendsNotify_Params
{
	struct FPlatformFriendInfoMap                      platformFriends;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ClientNet.HDmpveNet.OnGetCountryNoByIMSDK
struct UHDmpveNet_OnGetCountryNoByIMSDK_Params
{
	int                                                Country;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.HDmpveNet.OnGameMasterEvent
struct UHDmpveNet_OnGameMasterEvent_Params
{
	struct FString                                     EvenName;                                                 // (Parm, ZeroConstructor)
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.HDmpveNet.OnConnectorStateChangeNotify
struct UHDmpveNet_OnConnectorStateChangeNotify_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                param3;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.HDmpveNet.OnConnectorDisconnectedNotify
struct UHDmpveNet_OnConnectorDisconnectedNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.HDmpveNet.OnConnectorConnectedNotify
struct UHDmpveNet_OnConnectorConnectedNotify_Params
{
	int                                                IsConnected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nResult;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.HDmpveNet.OnBindIntlNotify
struct UHDmpveNet_OnBindIntlNotify_Params
{
	int                                                bindEventID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.HDmpveNet.OnAccountLogoutNotify
struct UHDmpveNet_OnAccountLogoutNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.HDmpveNet.OnAccountLoginNotify
struct UHDmpveNet_OnAccountLoginNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     resultMsg;                                                // (Parm, ZeroConstructor)
	int                                                thirdRetCode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.HDmpveNet.OnAccountInitializeNotify
struct UHDmpveNet_OnAccountInitializeNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.HDmpveNet.OnAccessTokenRefreshedNotify
struct UHDmpveNet_OnAccessTokenRefreshedNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.HDmpveSDK.UploadFile
struct UHDmpveSDK_UploadFile_Params
{
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	int                                                shareFileType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.HDmpveSDK.ShareWithPhotoByChannel_Simple
struct UHDmpveSDK_ShareWithPhotoByChannel_Simple_Params
{
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _title;                                                   // (Parm, ZeroConstructor)
	struct FString                                     _content;                                                 // (Parm, ZeroConstructor)
	int                                                _channel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.HDmpveSDK.ShareFacebookLink
struct UHDmpveSDK_ShareFacebookLink_Params
{
	struct FString                                     ftitle;                                                   // (Parm, ZeroConstructor)
	struct FString                                     fdesc;                                                    // (Parm, ZeroConstructor)
	struct FString                                     fsharelink;                                               // (Parm, ZeroConstructor)
};

// Function ClientNet.HDmpveSDK.SetTestLogin
struct UHDmpveSDK_SetTestLogin_Params
{
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.HDmpveSDK.InviteSystemOfflineFriendsExt2
struct UHDmpveSDK_InviteSystemOfflineFriendsExt2_Params
{
	struct FString                                     _title;                                                   // (Parm, ZeroConstructor)
	struct FString                                     _content;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _link;                                                    // (Parm, ZeroConstructor)
};

// Function ClientNet.HDmpveSDK.InviteSystemOfflineFriendsExt
struct UHDmpveSDK_InviteSystemOfflineFriendsExt_Params
{
	struct FString                                     _title;                                                   // (Parm, ZeroConstructor)
	struct FString                                     _content;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _link;                                                    // (Parm, ZeroConstructor)
};

// Function ClientNet.HDmpveSDK.InviteFBFriendsUnregistered_Link
struct UHDmpveSDK_InviteFBFriendsUnregistered_Link_Params
{
	struct FString                                     _title;                                                   // (Parm, ZeroConstructor)
	struct FString                                     _content;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _link;                                                    // (Parm, ZeroConstructor)
	struct FString                                     _extend;                                                  // (Parm, ZeroConstructor)
};

// Function ClientNet.HDmpveSDK.GetUploadUrlByFile
struct UHDmpveSDK_GetUploadUrlByFile_Params
{
	struct FString                                     file;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ClientNet.HDmpveSDK.GetUploadUrl
struct UHDmpveSDK_GetUploadUrl_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ClientNet.HDmpveSDK.GetUploadStatusByFile
struct UHDmpveSDK_GetUploadStatusByFile_Params
{
	struct FString                                     file;                                                     // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.HDmpveSDK.GetUploadStatus
struct UHDmpveSDK_GetUploadStatus_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.HDmpveSDK.ClearFileUpload
struct UHDmpveSDK_ClearFileUpload_Params
{
	struct FString                                     file;                                                     // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKConfig.PatchMSDKConfigWithAreaConfig
struct UIMSDKConfig_PatchMSDKConfigWithAreaConfig_Params
{
};

// Function ClientNet.IMSDKHelper.Transfer
struct UIMSDKHelper_Transfer_Params
{
};

// Function ClientNet.IMSDKHelper.StartWebVerify
struct UIMSDKHelper_StartWebVerify_Params
{
	struct FString                                     InExtraInfo;                                              // (Parm, ZeroConstructor)
	struct FString                                     InVerifyAppId;                                            // (Parm, ZeroConstructor)
	struct FString                                     InAccount;                                                // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.StartNewGame
struct UIMSDKHelper_StartNewGame_Params
{
};

// Function ClientNet.IMSDKHelper.SetupLoginCacheInfo
struct UIMSDKHelper_SetupLoginCacheInfo_Params
{
	int                                                InChannelID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsQuickLogin;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.SetNoAuthOpenid
struct UIMSDKHelper_SetNoAuthOpenid_Params
{
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.SetMSDKConfig
struct UIMSDKHelper_SetMSDKConfig_Params
{
	TMap<struct FString, struct FString>               InConfigMaps;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               InClearLoginData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.SetIMSDKEnv
struct UIMSDKHelper_SetIMSDKEnv_Params
{
	int                                                iEnv;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.SetChannel
struct UIMSDKHelper_SetChannel_Params
{
	struct FString                                     InIMSDKChannelName;                                       // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.SetAdvertiseUserID
struct UIMSDKHelper_SetAdvertiseUserID_Params
{
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.SetAdvertiseCustomData
struct UIMSDKHelper_SetAdvertiseCustomData_Params
{
	struct FString                                     InCustomData;                                             // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.SaveLastIMSDKChannelID
struct UIMSDKHelper_SaveLastIMSDKChannelID_Params
{
	int                                                channelId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.RequestVerifyCode
struct UIMSDKHelper_RequestVerifyCode_Params
{
	struct FString                                     InPhoneOrEmail;                                           // (Parm, ZeroConstructor)
	int                                                InAccountType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InUseForType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InPhoneAreaCode;                                          // (Parm, ZeroConstructor)
	struct FString                                     InLanuageCode;                                            // (Parm, ZeroConstructor)
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.ReqBindInfo
struct UIMSDKHelper_ReqBindInfo_Params
{
};

// Function ClientNet.IMSDKHelper.RefreshLogin
struct UIMSDKHelper_RefreshLogin_Params
{
};

// Function ClientNet.IMSDKHelper.RecoverGuest
struct UIMSDKHelper_RecoverGuest_Params
{
	struct FString                                     channelUserId;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.QuickLogin
struct UIMSDKHelper_QuickLogin_Params
{
};

// Function ClientNet.IMSDKHelper.QueryQRCodeStatus
struct UIMSDKHelper_QueryQRCodeStatus_Params
{
	struct FString                                     InCodeId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InRandStr;                                                // (Parm, ZeroConstructor)
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.PlayAdvertise
struct UIMSDKHelper_PlayAdvertise_Params
{
};

// Function ClientNet.IMSDKHelper.ModifyAccountInfo
struct UIMSDKHelper_ModifyAccountInfo_Params
{
	struct FString                                     InAccount;                                                // (Parm, ZeroConstructor)
	int                                                InAccountType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InVerifyType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InVerifyData;                                             // (Parm, ZeroConstructor)
	struct FString                                     InPhoneAreaCode;                                          // (Parm, ZeroConstructor)
	struct FString                                     InLanuageCode;                                            // (Parm, ZeroConstructor)
	struct FString                                     InMondifyToAccount;                                       // (Parm, ZeroConstructor)
	int                                                InModifyAccountType;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InModifyVerifyCode;                                       // (Parm, ZeroConstructor)
	struct FString                                     InModifyPhoneAreaCode;                                    // (Parm, ZeroConstructor)
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.LogoutWith
struct UIMSDKHelper_LogoutWith_Params
{
	int                                                InMSDKChannelId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.LoadAdvertise
struct UIMSDKHelper_LoadAdvertise_Params
{
	struct FString                                     InAdvertiseUnitId;                                        // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.IsEqualCurLoginPlatform
struct UIMSDKHelper_IsEqualCurLoginPlatform_Params
{
	struct FString                                     strChannel;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.isBindFBOrGPGC
struct UIMSDKHelper_isBindFBOrGPGC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindVK
struct UIMSDKHelper_IsAlreadyBindVK_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindUnifiedAccount
struct UIMSDKHelper_IsAlreadyBindUnifiedAccount_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindTwitter
struct UIMSDKHelper_IsAlreadyBindTwitter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindNosChat
struct UIMSDKHelper_IsAlreadyBindNosChat_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindLine
struct UIMSDKHelper_IsAlreadyBindLine_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindHMS
struct UIMSDKHelper_IsAlreadyBindHMS_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindGPGC
struct UIMSDKHelper_IsAlreadyBindGPGC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindGooglePlay
struct UIMSDKHelper_IsAlreadyBindGooglePlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindGameCenter
struct UIMSDKHelper_IsAlreadyBindGameCenter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindFB
struct UIMSDKHelper_IsAlreadyBindFB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindDiscord
struct UIMSDKHelper_IsAlreadyBindDiscord_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindBgBg
struct UIMSDKHelper_IsAlreadyBindBgBg_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindApple
struct UIMSDKHelper_IsAlreadyBindApple_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.InvalidateQRCode
struct UIMSDKHelper_InvalidateQRCode_Params
{
	struct FString                                     InCodeId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InRandStr;                                                // (Parm, ZeroConstructor)
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.InitAdvertiseSDK
struct UIMSDKHelper_InitAdvertiseSDK_Params
{
};

// Function ClientNet.IMSDKHelper.GetVerifyAppId4SendCode
struct UIMSDKHelper_GetVerifyAppId4SendCode_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ClientNet.IMSDKHelper.GetShortUrl
struct UIMSDKHelper_GetShortUrl_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Mask;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Extra;                                                    // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.GetPlatformType
struct UIMSDKHelper_GetPlatformType_Params
{
	EIMSDKPlatformType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.GetOpenId
struct UIMSDKHelper_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ClientNet.IMSDKHelper.GetLoginResult
struct UIMSDKHelper_GetLoginResult_Params
{
	struct FIMSDKLoginResult                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ClientNet.IMSDKHelper.GetLastIMSDKChannelID
struct UIMSDKHelper_GetLastIMSDKChannelID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.GetInstance
struct UIMSDKHelper_GetInstance_Params
{
	class UIMSDKHelper*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.GetIMSDKLoginToken
struct UIMSDKHelper_GetIMSDKLoginToken_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ClientNet.IMSDKHelper.GetHDmpveChannelID
struct UIMSDKHelper_GetHDmpveChannelID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.GetCurLoginPlatform
struct UIMSDKHelper_GetCurLoginPlatform_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ClientNet.IMSDKHelper.GetChannelNickname
struct UIMSDKHelper_GetChannelNickname_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ClientNet.IMSDKHelper.GetBindInfo
struct UIMSDKHelper_GetBindInfo_Params
{
};

// Function ClientNet.IMSDKHelper.GetBindFBRetCode
struct UIMSDKHelper_GetBindFBRetCode_Params
{
};

// Function ClientNet.IMSDKHelper.GetBindCount
struct UIMSDKHelper_GetBindCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.GenerateTransferCode
struct UIMSDKHelper_GenerateTransferCode_Params
{
};

// Function ClientNet.IMSDKHelper.GenerateQRCode
struct UIMSDKHelper_GenerateQRCode_Params
{
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.CopyTransferCodeToClipboard
struct UIMSDKHelper_CopyTransferCodeToClipboard_Params
{
};

// Function ClientNet.IMSDKHelper.ConvertTConndChannel2IMSDKChannel
struct UIMSDKHelper_ConvertTConndChannel2IMSDKChannel_Params
{
	int                                                InTConndChannelId;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.ConvertStrToIMSDKChannel
struct UIMSDKHelper_ConvertStrToIMSDKChannel_Params
{
	struct FString                                     strChannel;                                               // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.ConvertIMSDKChannelToStr
struct UIMSDKHelper_ConvertIMSDKChannelToStr_Params
{
	int                                                imsdkChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ClientNet.IMSDKHelper.ConvertIMSDKChannel2TConndChannel
struct UIMSDKHelper_ConvertIMSDKChannel2TConndChannel_Params
{
	int                                                InIMSDKChannelId;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.CheckVerifyCodeValid
struct UIMSDKHelper_CheckVerifyCodeValid_Params
{
	struct FString                                     InAccount;                                                // (Parm, ZeroConstructor)
	int                                                InAccountType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InPhoneAreaCode;                                          // (Parm, ZeroConstructor)
	struct FString                                     InVerifyCode;                                             // (Parm, ZeroConstructor)
	int                                                InCodeType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InLanuageCode;                                            // (Parm, ZeroConstructor)
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.CheckIsRegisted
struct UIMSDKHelper_CheckIsRegisted_Params
{
	struct FString                                     InAccount;                                                // (Parm, ZeroConstructor)
	int                                                InAccountType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InPhoneAreaCode;                                          // (Parm, ZeroConstructor)
	struct FString                                     InLanuageCode;                                            // (Parm, ZeroConstructor)
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.ChangePassword
struct UIMSDKHelper_ChangePassword_Params
{
	struct FString                                     InAccount;                                                // (Parm, ZeroConstructor)
	int                                                InAccountType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InVerifyCode;                                             // (Parm, ZeroConstructor)
	struct FString                                     InNewPassword;                                            // (Parm, ZeroConstructor)
	struct FString                                     InAreaCode;                                               // (Parm, ZeroConstructor)
	struct FString                                     InLangType;                                               // (Parm, ZeroConstructor)
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.BindVK
struct UIMSDKHelper_BindVK_Params
{
};

// Function ClientNet.IMSDKHelper.BindUnifiedAccount
struct UIMSDKHelper_BindUnifiedAccount_Params
{
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.BindTwitter
struct UIMSDKHelper_BindTwitter_Params
{
};

// Function ClientNet.IMSDKHelper.BindNosChat
struct UIMSDKHelper_BindNosChat_Params
{
};

// Function ClientNet.IMSDKHelper.BindLine
struct UIMSDKHelper_BindLine_Params
{
};

// Function ClientNet.IMSDKHelper.BindHMS
struct UIMSDKHelper_BindHMS_Params
{
};

// Function ClientNet.IMSDKHelper.BindGPGC
struct UIMSDKHelper_BindGPGC_Params
{
};

// Function ClientNet.IMSDKHelper.BindFB
struct UIMSDKHelper_BindFB_Params
{
};

// Function ClientNet.IMSDKHelper.BindDiscord
struct UIMSDKHelper_BindDiscord_Params
{
};

// Function ClientNet.IMSDKHelper.BindBgBg
struct UIMSDKHelper_BindBgBg_Params
{
};

// Function ClientNet.IMSDKHelper.BindApple
struct UIMSDKHelper_BindApple_Params
{
};

}

