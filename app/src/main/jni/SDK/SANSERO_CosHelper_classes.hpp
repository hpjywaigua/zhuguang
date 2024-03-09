#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:14 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class CosHelper.CosBase
// 0x0000 (0x0028 - 0x0028)
class UCosBase : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CosHelper.CosBase");
		return pStaticClass;
	}


	TArray<unsigned char> GetContent();
};


// Class CosHelper.CosHelper
// 0x00E8 (0x0110 - 0x0028)
class UCosHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CosHelper.CosHelper");
		return pStaticClass;
	}

};


// Class CosHelper.CosHelperBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UCosHelperBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CosHelper.CosHelperBlueprintLibrary");
		return pStaticClass;
	}


	static class UCosRequest* UploadFileMemory(class UCosHelper* CosHelper, TArray<unsigned char> FileMemoryBuffer, const struct FString& URIPathName, const struct FString& URLParameters, const struct FScriptDelegate& OnCosRequestCompleted);
	static class UCosRequest* UploadFile(class UCosHelper* CosHelper, const struct FString& FilePathName, const struct FString& URIPathName, const struct FString& URLParameters, const struct FScriptDelegate& OnCosRequestCompleted);
	static struct FCosHelperInitializeInfo InitCosInfo(const struct FString& Section);
	static class UCosRequest* GetFileInfo(class UCosHelper* CosHelper, const struct FString& URIPathName, const struct FString& URLParameters, int FileInfoType, const struct FScriptDelegate& OnCosRequestCompleted);
	static class UCosRequest* DownloadFile(class UCosHelper* CosHelper, const struct FString& URIPathName, const struct FString& URLParameters, const struct FString& SavedPathName, const struct FScriptDelegate& OnCosRequestCompleted);
	static void DestroyCosHelper(class UCosHelper* CosHelper);
	static class UCosHelper* ConstructCosHelper(const struct FCosHelperInitializeInfo& InitializeInfo);
};


// Class CosHelper.CosRequest
// 0x0010 (0x0038 - 0x0028)
class UCosRequest : public UCosBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CosHelper.CosRequest");
		return pStaticClass;
	}

};


// Class CosHelper.CosResponse
// 0x0068 (0x0090 - 0x0028)
class UCosResponse : public UCosBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CosHelper.CosResponse");
		return pStaticClass;
	}


	bool IsOK();
	int GetResponseCode();
	struct FString GetRequestURL();
	struct FString GetFileInfo(ECosHelperFileInfoType InFileInfoType);
	struct FString GetContentAsString();
};


}

