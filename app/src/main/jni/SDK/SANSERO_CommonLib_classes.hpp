#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:14 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class CommonLib.TextWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UTextWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonLib.TextWidgetInterface");
		return pStaticClass;
	}


	struct FString GetTextContent();
};


// Class CommonLib.LuaService
// 0x0000 (0x0028 - 0x0028)
class ULuaService : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonLib.LuaService");
		return pStaticClass;
	}

};


// Class CommonLib.CommonLuaLibrary
// 0x0000 (0x0028 - 0x0028)
class UCommonLuaLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonLib.CommonLuaLibrary");
		return pStaticClass;
	}


	static bool IsMatch(const struct FString& Source, const struct FString& regex);
	static struct FString GetName(class UObject* Obj);
	static TArray<struct FString> GetModNames();
	static class UWorld* GetGWorld();
	static struct FString GetFullName(class UObject* Obj);
};


// Class CommonLib.RuntimeFilesDownloaderLibrary
// 0x0070 (0x0098 - 0x0028)
class URuntimeFilesDownloaderLibrary : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnProgress;                                               // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnResult;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0060(0x0018) MISSED OFFSET
	struct FString                                     FileURL;                                                  // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     FileSavePath;                                             // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonLib.RuntimeFilesDownloaderLibrary");
		return pStaticClass;
	}


	class URuntimeFilesDownloaderLibrary* DownloadFile(const struct FString& URL, const struct FString& SavePath);
	static class URuntimeFilesDownloaderLibrary* CreateDownloader();
};


// Class CommonLib.ServiceManager
// 0x0050 (0x0078 - 0x0028)
class UServiceManager : public UObject
{
public:
	TMap<struct FName, struct FServiceCollection>      Services;                                                 // 0x0028(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonLib.ServiceManager");
		return pStaticClass;
	}


	void UnregisterService(class UClass* ServiceType, const struct FString& serviceName);
	void RegisterService(class UObject* Service, class UClass* ServiceType, const struct FString& serviceName);
	class UObject* GetService(class UClass* ServiceType, const struct FString& serviceName);
};


}

