#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:13 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class BuildPatchServices.BuildPatchManifest
// 0x00F8 (0x0120 - 0x0028)
class UBuildPatchManifest : public UObject
{
public:
	unsigned char                                      ManifestFileVersion;                                      // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsFileData;                                              // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	uint32_t                                           AppID;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     AppName;                                                  // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     BuildVersion;                                             // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     LaunchExe;                                                // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     LaunchCommand;                                            // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0070(0x0050) UNKNOWN PROPERTY: SetProperty BuildPatchServices.BuildPatchManifest.PrereqIds
	struct FString                                     PrereqName;                                               // 0x00C0(0x0010) (ZeroConstructor)
	struct FString                                     PrereqPath;                                               // 0x00D0(0x0010) (ZeroConstructor)
	struct FString                                     PrereqArgs;                                               // 0x00E0(0x0010) (ZeroConstructor)
	TArray<struct FFileManifestData>                   FileManifestList;                                         // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FChunkInfoData>                      ChunkList;                                                // 0x0100(0x0010) (ZeroConstructor)
	TArray<struct FCustomFieldData>                    CustomFields;                                             // 0x0110(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildPatchServices.BuildPatchManifest");
		return pStaticClass;
	}

};


}

