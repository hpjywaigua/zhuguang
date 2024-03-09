#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:13 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class LiveVideoPlugin.BP_LiveVideoLibrary
// 0x0040 (0x0068 - 0x0028)
class UBP_LiveVideoLibrary : public UBlueprintFunctionLibrary
{
public:
	struct FScriptMulticastDelegate                    m_PusherEventDelegate;                                    // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_PlayerEventDelegate;                                    // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_TcUploadEventDelegate;                                  // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_VideoEditerEventDelegate;                               // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LiveVideoPlugin.BP_LiveVideoLibrary");
		return pStaticClass;
	}


	static class UBP_LiveVideoLibrary* GetInstance();
	static void BP_VideoEditerInit(const struct FString& szLicenseUrl, const struct FString& szLicenseKey);
	static void BP_VideoEditerCallbackTest(int nCode, int nParam1, int nParam2, const struct FString& strMessage);
	static int BP_TcUploadVideFile(const struct FString& strSignature, const struct FString& strVideoPath, const struct FString& strCoverPath, bool bEnableResume, bool bEnableHttps, const struct FString& strFileName);
	static int BP_TcUploadUnInit();
	static int BP_TcUploadInit();
	static int BP_TcUploadCancel(int nSessionId);
	static void BP_SaveVideoToAlbum(const struct FString& strVideoPath);
	static void BP_SaveImageToAlbum(const struct FString& strImagePath);
	static void BP_OpenVideoEditer(const struct FString& szUrl);
	static int BP_LivePusherUnInit();
	static int BP_LivePusherStopRecord();
	static int BP_LivePusherStop();
	static int BP_LivePusherStartRecord(const struct FString& StrFilePath, int nWidth, int nHeight, int nFrameRate, int nBitRate, const struct FString& strThumbnailPath);
	static int BP_LivePusherStart(const struct FString& strUrl);
	static int BP_LivePusherSetOption(const struct FString& strOption, int nVal);
	static int BP_LivePusherSaveVideoThumbnail(const struct FString& strThumbnailPath, const struct FString& strVideoPath, float fTime);
	static int BP_LivePusherResume();
	static int BP_LivePusherPause();
	static bool BP_LivePusherIsRecord();
	static bool BP_LivePusherIsPushing();
	static bool BP_LivePusherIsPush();
	static int BP_LivePusherInit();
	static float BP_LivePusherGetVideoFileTotalTime(const struct FString& strVideoPath);
	static int BP_LivePusherGetStatus();
	static float BP_LivePusherGetCurRecordTime();
	static float BP_LivePusherGetCurFreeStorage();
	static float BP_LivePusherGetAllStorage();
	static int BP_LivePlayerUnInit();
	static class UTexture2D* BP_LivePlayerTexture(int nIndex);
	static int BP_LivePlayerSetVol(int nVolValue);
	static int BP_LivePlayerSeek(float fSeekTime);
	static int BP_LivePlayerResume();
	static int BP_LivePlayerPlayWithFd(int nFd, bool bLoopKey, bool bAutoPlayKey);
	static int BP_LivePlayerPlay(const struct FString& strUrl, bool bLoopKey, bool bAutoPlayKey);
	static int BP_LivePlayerPause();
	static bool BP_LivePlayerIsPlaying();
	static bool BP_LivePlayerIsPlay();
	static int BP_LivePlayerInit();
	static void BP_LivePlayerGetVideoTime(float* fCurTime, float* fTotalTime);
	static int BP_LivePlayerGetStatus();
	static void BP_LivePlayerGetSolution(int* nWidth, int* nHeight);
	static void BP_LivePlayerGetSDKVersion();
	static int BP_LivePlayerGetformat();
	static int BP_LivePlayerClose();
	static void BP_LiveLiveGetSavePath(struct FString* strSavePath);
	static void BP_LiveLiveGetFileSize(const struct FString& strSavePath, float* fFileSize);
	static void BP_LiveLiveForceGarbageCollection();
	static bool BP_IsOpenGLEs3();
	static int BP_ImageSizeCompres(const struct FString& strImagePath, const struct FString& strOutImagePath, int nNewWidth, int nNewHeight);
	static int BP_CompressImage(const struct FString& strImagePath, const struct FString& strOutImagePath, int nQuality);
};


}

