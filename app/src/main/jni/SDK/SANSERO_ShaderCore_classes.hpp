#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class ShaderCore.PrecompileShaderGameConfig
// 0x0048 (0x0070 - 0x0028)
class UPrecompileShaderGameConfig : public UObject
{
public:
	struct FCollectSwitchs                             CollectSwitchs;                                           // 0x0028(0x000D) (Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	TArray<struct FDeviceRenderConfig>                 DeviceRenderConfigs;                                      // 0x0038(0x0010) (ZeroConstructor, Config)
	TArray<struct FMapRenderConfig>                    MapRenderConfigs;                                         // 0x0048(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ShaderCore.PrecompileShaderGameConfig");
		return pStaticClass;
	}

};


// Class ShaderCore.ShaderGroupSettings
// 0x0058 (0x0080 - 0x0028)
class UShaderGroupSettings : public UObject
{
public:
	TArray<struct FShaderLevel>                        Levels_IOS;                                               // 0x0028(0x0010) (ZeroConstructor, Config)
	TArray<struct FShaderLevel>                        Levels_AOS;                                               // 0x0038(0x0010) (ZeroConstructor, Config)
	TArray<struct FShaderPak>                          Paks_IOS;                                                 // 0x0048(0x0010) (ZeroConstructor, Config)
	TArray<struct FShaderPak>                          Paks_AOS;                                                 // 0x0058(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ShaderCore.ShaderGroupSettings");
		return pStaticClass;
	}

};


}

