#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:14 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class HelpshiftUE4.HelpshiftUE4Settings
// 0x0048 (0x0070 - 0x0028)
class UHelpshiftUE4Settings : public UObject
{
public:
	struct FString                                     APIKey;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     DomainName;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     AppID_iOS;                                                // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     AppID_Android;                                            // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               FirebaseIntegration;                                      // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HelpshiftUE4.HelpshiftUE4Settings");
		return pStaticClass;
	}

};


}

