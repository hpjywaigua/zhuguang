#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:13 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class Intl.StatManager
// 0x01B0 (0x01D8 - 0x0028)
class UStatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0028(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Intl.StatManager");
		return pStaticClass;
	}


	void ReportEventWithString(int EventType, const struct FString& _eventBody, bool isRealTime);
	void ReportEventWithParam(int EventType, TMap<struct FString, struct FString> _params, bool isRealTime);
	void ReportEventWithNoParam(int EventType, bool isRealTime);
	static class UStatManager* GetInstance();
};


}

