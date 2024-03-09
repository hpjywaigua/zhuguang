#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:14 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class Ninja.BattleFieldCircle
// 0x00A8 (0x0560 - 0x04B8)
class ABattleFieldCircle : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04B8(0x0020) MISSED OFFSET
	float                                              CircleInterval;                                           // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurRadius;                                                // 0x04DC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OnlyCheckPlayerTag;                                       // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     LuaEventType;                                             // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LuaEventID;                                               // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<uint32_t, bool>                               PlayerKeyCache;                                           // 0x0508(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0558(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Ninja.BattleFieldCircle");
		return pStaticClass;
	}


	void StartMove(const struct FVector& StartCircle, const struct FVector& EndCircle, float MoveTime);
	void SetCircle(const struct FVector& circle);
	void OnRep_CircleMoveInfo();
	bool IsInBlueCircle(class AActor* uActor);
	void InitCircle(const struct FVector& InitCircle);
	TArray<uint32_t> GetAllPlayerInCircle();
	void CircleMove();
	void CheckInCircle();
};


}

