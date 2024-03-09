#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:13 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class ZLevel.ZLevelData
// 0x00F0 (0x04E8 - 0x03F8)
class AZLevelData : public AActor
{
public:
	struct FGameLevelDesc                              LevelDesc;                                                // 0x03F8(0x0018) (Edit)
	TArray<struct FString>                             TargetClassPaths;                                         // 0x0410(0x0010) (Edit, ZeroConstructor)
	struct FString                                     LeveDirectorFilePath;                                     // 0x0420(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<ELevelEndCondType>                     EndCondType;                                              // 0x0430(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	struct FString                                     EndCondPar;                                               // 0x0438(0x0010) (Edit, ZeroConstructor)
	bool                                               IsLastLevel;                                              // 0x0448(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	int                                                DiffcultPerc;                                             // 0x044C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UZPVECircle*>                         PVECircleConfigs;                                         // 0x0450(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<class UZPVERelifePoint*>                    PVERelifePoints;                                          // 0x0460(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<class UZMonsterSpotGroup*>                  MonsterSpotGroups;                                        // 0x0470(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<struct FVector>                             TaskPointLocations;                                       // 0x0480(0x0010) (Edit, ZeroConstructor)
	TArray<struct FRelifePoint>                        PVERelifePointsInfo;                                      // 0x0490(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPVECircle>                          PVECircleInfo;                                            // 0x04A0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FMonsterWave>                        MonsterWaveCfg;                                           // 0x04B0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FLevelData>                          CfgList;                                                  // 0x04C0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FLevelObjets>                        LevelAddObjs;                                             // 0x04D0(0x0010) (Edit, ZeroConstructor)
	int                                                CurComponentNameIndex;                                    // 0x04E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZLevelData");
		return pStaticClass;
	}


	void ReBindLevelDataComponent();
	void CheckMonsterSpotIsOnLand(class UZMonsterSpot* MonsterSpot, class UZMonsterSpotGroup* SpotGroup);
};


// Class ZLevel.ZSpotSceneComponent
// 0x0000 (0x0330 - 0x0330)
class UZSpotSceneComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZSpotSceneComponent");
		return pStaticClass;
	}

};


// Class ZLevel.ZMonsterRoadPoint
// 0x0010 (0x0340 - 0x0330)
class UZMonsterRoadPoint : public UZSpotSceneComponent
{
public:
	int                                                Radius;                                                   // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0334(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZMonsterRoadPoint");
		return pStaticClass;
	}

};


// Class ZLevel.ZMonsterSpot
// 0x0030 (0x0360 - 0x0330)
class UZMonsterSpot : public UZSpotSceneComponent
{
public:
	struct FString                                     Desc;                                                     // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      MonsterSpotType;                                          // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	TArray<class UZMonsterRoadPoint*>                  RoadPointList;                                            // 0x0348(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	unsigned char                                      SpotRadius;                                               // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0359(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZMonsterSpot");
		return pStaticClass;
	}

};


// Class ZLevel.ZMonsterSpotGroup
// 0x0020 (0x0350 - 0x0330)
class UZMonsterSpotGroup : public USceneComponent
{
public:
	struct FString                                     Desc;                                                     // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UZMonsterSpot*>                       SpotList;                                                 // 0x0340(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZMonsterSpotGroup");
		return pStaticClass;
	}

};


// Class ZLevel.ZPVECircle
// 0x0020 (0x0350 - 0x0330)
class UZPVECircle : public UZSpotSceneComponent
{
public:
	struct FVector2D                                   targetPos;                                                // 0x0330(0x0008) (Edit, IsPlainOldData)
	float                                              Radius;                                                   // 0x0338(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveTime;                                                 // 0x033C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Pain;                                                     // 0x0340(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0344(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZPVECircle");
		return pStaticClass;
	}

};


// Class ZLevel.ZPVERelifePoint
// 0x0010 (0x0340 - 0x0330)
class UZPVERelifePoint : public UZSpotSceneComponent
{
public:
	bool                                               IsActivePoint;                                            // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0331(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZPVERelifePoint");
		return pStaticClass;
	}

};


}

