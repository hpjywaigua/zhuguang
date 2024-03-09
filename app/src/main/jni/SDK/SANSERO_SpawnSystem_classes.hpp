#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class SpawnSystem.STSpawnerBase
// 0x0168 (0x0560 - 0x03F8)
class ASTSpawnerBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03F8(0x0060) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0458(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class USTStrategyTiming*                           SpawnTiming;                                              // 0x0468(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USTStrategyLocation*                         SpawnLocation;                                            // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USTStrategySpecies*                          SpawnSpecies;                                             // 0x0478(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USTStrategyCond*>                     SpawnConditions;                                          // 0x0480(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	unsigned char                                      bUseRegion : 1;                                           // 0x0490(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDebugDraw : 1;                                           // 0x0490(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUsable : 1;                                              // 0x0490(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	int                                                SpawnerCampID;                                            // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESTSpawnerVolume                                   VolumeType;                                               // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	float                                              SphereRadius;                                             // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxHalfExtent;                                            // 0x04A0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	class UClass*                                      SpawnSpotClass;                                           // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSpawnUnitSuccessDelegate;                               // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpawnedUnitDeadDelegate;                                // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	uint32_t                                           SpawnerID;                                                // 0x04D8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                MaxUnitsCount;                                            // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxAliveCount;                                            // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	struct FString                                     SpawnerDescString;                                        // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bUseAsTrigger : 1;                                        // 0x04F8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bForceSpawn : 1;                                          // 0x04F8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData05[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	struct FString                                     SpawnerSnapshot;                                          // 0x0500(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class ASTSpawnSpot*>                        SpawnSpots;                                               // 0x0510(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class AActor*>                              AlivePawns;                                               // 0x0520(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      bActive : 1;                                              // 0x0530(0x0001) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      bInitialized : 1;                                         // 0x0530(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bTimeIsRipe : 1;                                          // 0x0530(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	int                                                TotalSpawnedUnits;                                        // 0x0534(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USTSpawnSubsystem*                           SpawnSubsystem;                                           // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x10];                                      // 0x0540(0x0010) MISSED OFFSET
	int                                                WaitSpawn;                                                // 0x0550(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlayerEnterRegion : 1;                                   // 0x0554(0x0001)
	unsigned char                                      UnknownData08[0xB];                                       // 0x0555(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpawnerBase");
		return pStaticClass;
	}


	void Thinking(float DeltaTime);
	void Switch(bool IsSwitchOn);
	void SetSpawnerID(uint32_t ID);
	void OnUnitSpawned(class AActor* NewUnit, const struct FSTSpawnParam& SpawnParam, class ASTSpawnerBase* Spawner);
	void OnUnitDead(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnSpawnTimingRipe(bool IsRipe);
	void OnSpawnerDeactivate();
	void OnSpawnerActivate();
	void OnRep_SpawnerID();
	void Multicast_SpawnerSnapshot(const struct FString& Timing, const struct FString& Species, const struct FString& Location, const struct FString& Conditions, const struct FString& Extra, bool IsActive, bool IsUsable);
	void Multicast_AlivePawnsChange(class APawn* Unit, bool IsBorn, bool IsAllDead);
	void ModifyMaxAlive(int NewAlive);
	bool IsUsable();
	bool IsPlayerEnterRegion();
	bool IsInitialized();
	bool IsActive();
	void InitSpawner();
	int GetTotalSpawnedNum();
	class USTSpawnSubsystem* GetSpawnSystem();
	TArray<class ASTSpawnSpot*> GetSpawnSpots();
	float GetSpawnRadius();
	struct FVector GetSpawnLocation();
	struct FVector GetSpawnExtent();
	struct FString GetSpawnerSnapshot();
	uint32_t GetSpawnerID();
	struct FString GetSpawnerDesc();
	int GetReferencedCount();
	int GetMaxUnits();
	int GetMaxAlive();
	bool GetIsForceSpawn();
	TArray<class AActor*> GetAliveUnits();
	class ASTSpawnSpot* FindSpot(const struct FString& SpotID);
	void DeactivateSpawner();
	bool CheckTriggerGuest(class AActor* Guest);
	bool CheckOwnedUnit(class AActor* InUnit);
	void AnalyseConfigData();
	void ActivateSpawner();
};


// Class SpawnSystem.STSpawnSubsystem
// 0x0190 (0x01C0 - 0x0030)
class USTSpawnSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSpawnSysUnitSpawnedSuc;                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference)
	TMap<uint32_t, class ASTSpawnerBase*>              SpawnersMap;                                              // 0x0048(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0098(0x0088) MISSED OFFSET
	float                                              TickFrequency;                                            // 0x0120(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ThinkTimesPerFrame;                                       // 0x0124(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReadySpawnFrequency;                                      // 0x0128(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxWaitSpawnQueSize;                                      // 0x012C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitSpawnInOrder;                                        // 0x0130(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x57];                                      // 0x0131(0x0057) MISSED OFFSET
	int                                                RecAliveUnits;                                            // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	int                                                WaitSpawnInOrderIndex;                                    // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2C];                                      // 0x0194(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpawnSubsystem");
		return pStaticClass;
	}


	void UnregisterSpawner(class ASTSpawnerBase* Spawner);
	class ASTSpawnerBase* UnitFindSpawner(int UnitUID);
	class AActor* SpawnUnit(const struct FSTSpawnParam& SpawnParam);
	void RegisterSpawner(class ASTSpawnerBase* Spawner);
	void RecordProgress();
	void ReadySpawn(float DeltaTime);
	bool PreCheck();
	void OrderSpawnerThinking(float DeltaTime);
	void ModifyConfiguration(float TickFreq, int ThinkTimes);
	void InitUnit(class APawn* AIPawn, TArray<struct FUnitInitConfig> Configs);
	int GetUnitConfigID(class AActor* Unit);
	TArray<class AActor*> GetAllUnits();
	class ASTSpawnerBase* FindSpawner(uint32_t SpawnerID);
	void EnQueue(class ASTSpawnerBase* Spawner, struct FSTSpawnParam* SpawnParam);
	void CleanQueue();
	bool CheckCategoryLimit(class ASTSpawnerBase* Spawner, int* AvailableBalance);
};


// Class SpawnSystem.STStrategyBase
// 0x00B8 (0x00E0 - 0x0028)
class USTStrategyBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      bShouldCD : 1;                                            // 0x0090(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              ConfigCDDuration;                                         // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASTSpawnerBase*                              OwnerSpawner;                                             // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSTActive : 1;                                            // 0x00A0(0x0001)
	unsigned char                                      bTickEnable : 1;                                          // 0x00A0(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              CDCounter;                                                // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     OwnerName;                                                // 0x00A8(0x0010) (ZeroConstructor)
	struct FString                                     StrategyName;                                             // 0x00B8(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     StrategySnapshot;                                         // 0x00C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyBase");
		return pStaticClass;
	}


	void UpdateSnapshot(const struct FString& New);
	void TickStrategy(float DeltaTime);
	void ResetCD();
	void OnStrategyDeactivate();
	void OnStrategyActivate();
	bool IsSTActive();
	bool IsOnCD();
	bool GetTickEnable();
	struct FString GetStrategyDesc();
	struct FString GetSnapshot();
	class ASTSpawnerBase* GetOwnerSpawner();
	void DeactivateStrategy();
	float CDRemaining();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class SpawnSystem.STStrategyLocation
// 0x0020 (0x0100 - 0x00E0)
class USTStrategyLocation : public USTStrategyBase
{
public:
	struct FScriptDelegate                             OnGenerateSpawnLocationDelegate;                          // 0x00E0(0x0010) (ZeroConstructor, InstancedReference)
	TArray<struct FSpawnSpotInfo>                      CacheSpotInfosArray;                                      // 0x00F0(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyLocation");
		return pStaticClass;
	}


	bool GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr);
};


// Class SpawnSystem.STStrategySpecies
// 0x0028 (0x0108 - 0x00E0)
class USTStrategySpecies : public USTStrategyBase
{
public:
	class USTSpeciesDataAsset*                         SpeciesData;                                              // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             SupplySpawnSpeciesDelegate;                               // 0x00E8(0x0010) (ZeroConstructor, InstancedReference)
	TArray<struct FUnitConfig>                         CacheSpeciesArray;                                        // 0x00F8(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategySpecies");
		return pStaticClass;
	}


	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	TArray<int> GeAllCacheConfigIDs();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class SpawnSystem.STStrategyTiming
// 0x0010 (0x00F0 - 0x00E0)
class USTStrategyTiming : public USTStrategyBase
{
public:
	struct FScriptMulticastDelegate                    OnSpawnTimingUp;                                          // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyTiming");
		return pStaticClass;
	}


	void TimeIsRipe();
};


// Class SpawnSystem.SpawnSystemSettings
// 0x0028 (0x0060 - 0x0038)
class USpawnSystemSettings : public UDeveloperSettings
{
public:
	float                                              TickFrequency;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              SpawnUnitInterval;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                TickingSpawnerThreshold;                                  // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShouldSpawnSystemLogout;                                 // 0x0044(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	int                                                MaxWaitSpawnQueSize;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VisualDebugRange;                                         // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector2D                                   VisualDebugSpotCapsule;                                   // 0x0050(0x0008) (Edit, Config, IsPlainOldData)
	float                                              SpotDrawThickness;                                        // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              SpotDrawFlag;                                             // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.SpawnSystemSettings");
		return pStaticClass;
	}


	static class USpawnSystemSettings* Get();
};


// Class SpawnSystem.STSpawnSpot
// 0x0068 (0x0460 - 0x03F8)
class ASTSpawnSpot : public AActor
{
public:
	TArray<struct FUnitInitConfig>                     SpotInitConfig;                                           // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                AliveThresholdCfg;                                        // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumberThresholdCfg;                                       // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     SpotID;                                                   // 0x0410(0x0010) (ZeroConstructor)
	int                                                SpotWeigh;                                                // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESpawnSpotType                                     SpotType;                                                 // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	int                                                SquadIndex;                                               // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UnitIndex;                                                // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CapsuleSize;                                              // 0x0430(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MultiPosRangeMin;                                         // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	class ASTSpawnerBase*                              OwnerSpawner;                                             // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0448(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpawnSpot");
		return pStaticClass;
	}


	void OnUnitSpawnedSuc(uint32_t InSpawnerID, class APawn* AIPawn, const struct FSTSpawnParam& SpawnParam);
	void OnUnitDead(uint32_t InSpawnerID, class APawn* AIPawn);
	bool IsSpotValid();
	bool HasModifySpecies();
	int GetSpotWeigh();
	int GetSpotUnitIndex();
	ESpawnSpotType GetSpotType();
	int GetSpotSquadIndex();
	struct FString GetSpotID();
	int GetNumberThresholdCfg();
	TArray<struct FVector> GetMultiPositions(int ReqCount, int MaxCount, int TryTimes);
	int GetCacheSpawnedCount();
	int GetCacheAliveCount();
	int GetAliveThresholdCfg();
};


// Class SpawnSystem.STSpawnSystemGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class USTSpawnSystemGameplayStatics : public UGameplayStatics
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpawnSystemGameplayStatics");
		return pStaticClass;
	}


	static class ASTSpawnerBase* UnitFindSpawner(class UObject* WorldContextObject, int UnitUID);
	static struct FVector ProjectPointToFloorWithComplexCollisionCheck(class UObject* WorldContextObject, const struct FVector& Origin, bool bCheckComplex, float OffsetHeight, bool* bOutHit, struct FHitResult* HitResult);
	static bool IsEditor();
	static TArray<struct FVector> FindNearbyGroundLoc(class UObject* WorldContextObject, int OutCount, const struct FVector& InCenterLoc, float RangeMin, float RangeMax, float TraceHeight, int TryTimes);
};


// Class SpawnSystem.STSpawnVisualDebug
// 0x00B8 (0x00E0 - 0x0028)
class USTSpawnVisualDebug : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpawnVisualDebug");
		return pStaticClass;
	}


	static class USTSpawnVisualDebug* Get();
};


// Class SpawnSystem.STSpeciesDataAsset
// 0x0040 (0x0070 - 0x0030)
class USTSpeciesDataAsset : public UDataAsset
{
public:
	TArray<struct FUnitConfig>                         UnitConfig;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FSquadConfig>                        SquadConfig;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGroupConfig>                        GroupConfig;                                              // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FSpeciesRatioStruct>                 RatioConfig;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpeciesDataAsset");
		return pStaticClass;
	}

};


// Class SpawnSystem.STStrategyCond
// 0x0000 (0x00E0 - 0x00E0)
class USTStrategyCond : public USTStrategyBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyCond");
		return pStaticClass;
	}


	bool LuaCheckCondition();
	bool CheckCondition();
};


// Class SpawnSystem.STStrategyCond_Hide
// 0x0028 (0x0108 - 0x00E0)
class USTStrategyCond_Hide : public USTStrategyCond
{
public:
	float                                              Height;                                                   // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CharacterFOV;                                             // 0x00E4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      bUseLineTrace : 1;                                        // 0x00F0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	class UClass*                                      ClassFilter;                                              // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseSpawnerLoc : 1;                                       // 0x0100(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0101(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyCond_Hide");
		return pStaticClass;
	}


	bool CheckCondition();
};


// Class SpawnSystem.STStrategyCond_Quantity
// 0x0008 (0x00E8 - 0x00E0)
class USTStrategyCond_Quantity : public USTStrategyCond
{
public:
	int                                                ThresholdQuantity;                                        // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AliveNumberLimit;                                         // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyCond_Quantity");
		return pStaticClass;
	}


	bool CheckCondition();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class SpawnSystem.STStrategyLocation_Root
// 0x0000 (0x0100 - 0x0100)
class USTStrategyLocation_Root : public USTStrategyLocation
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyLocation_Root");
		return pStaticClass;
	}


	bool GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr);
};


// Class SpawnSystem.STStrategyLocation_Spots
// 0x0000 (0x0100 - 0x0100)
class USTStrategyLocation_Spots : public USTStrategyLocation
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyLocation_Spots");
		return pStaticClass;
	}


	bool GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr);
};


// Class SpawnSystem.STStrategySpecies_SquadRatio
// 0x0058 (0x0160 - 0x0108)
class USTStrategySpecies_SquadRatio : public USTStrategySpecies
{
public:
	int                                                RatioIndex;                                               // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x010C(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategySpecies_SquadRatio");
		return pStaticClass;
	}


	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	void ReadSquadRatios(int ReferencedCount, TArray<struct FUnitRatio> RatioConfig);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class SpawnSystem.STStrategySpecies_Static
// 0x0020 (0x0128 - 0x0108)
class USTStrategySpecies_Static : public USTStrategySpecies
{
public:
	EReadSpeciesData                                   HowDataRead;                                              // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	int                                                GroupIndex;                                               // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SquadIndex;                                               // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                UnitIndex;                                                // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategySpecies_Static");
		return pStaticClass;
	}


	void WeightedReadUnit(int ReferencedCount, TArray<struct FUnitConfig> Units);
	void WeightedReadSquad(int ReferencedCount, const struct FSquadConfig& SquadConfig, TArray<struct FUnitConfig> Units);
	void WeightedReadGroup(int ReferencedCount, const struct FGroupConfig& GroupConfig, TArray<struct FSquadConfig> Squads, TArray<struct FUnitConfig> Units);
	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	void ReadSpotSpecies(TArray<struct FSpawnSpotInfo> SpotSpecies, TArray<struct FSquadConfig> Squads, TArray<struct FUnitConfig> Units, int* ReferencedCount);
	void OrderedReadUnit(int ReferencedCount, TArray<struct FUnitConfig> Units);
	void OrderedReadSquad(int ReferencedCount, const struct FSquadConfig& SquadConfig, TArray<struct FUnitConfig> Units);
	void OrderedReadGroup(int ReferencedCount, const struct FGroupConfig& GroupConfig, TArray<struct FSquadConfig> Squads, TArray<struct FUnitConfig> Units);
	void ManuallyReadUnit(int ReferencedCount, int Index, TArray<struct FUnitConfig> Units);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class SpawnSystem.STStrategyTiming_Period
// 0x0020 (0x0110 - 0x00F0)
class USTStrategyTiming_Period : public USTStrategyTiming
{
public:
	unsigned char                                      bFirstDelay : 1;                                          // 0x00F0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	float                                              FirstDelayDuration;                                       // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLoop : 1;                                                // 0x00F8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	float                                              PeriodDuration;                                           // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyTiming_Period");
		return pStaticClass;
	}


	void TickStrategy(float DeltaTime);
	void OnReachTimer();
	void OnFirstDelay();
	void DeactivateStrategy();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class SpawnSystem.STStrategyTiming_Trigger
// 0x0020 (0x0110 - 0x00F0)
class USTStrategyTiming_Trigger : public USTStrategyTiming
{
public:
	ESTSpawnerVolume                                   VolumeType;                                               // 0x00F0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	struct FVector                                     CenterLocation;                                           // 0x00F4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              SphereRadius;                                             // 0x0100(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // 0x0104(0x000C) (BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyTiming_Trigger");
		return pStaticClass;
	}


	void TickStrategy(float DeltaTime);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class SpawnSystem.STStrategyTiming_Wave
// 0x0040 (0x0130 - 0x00F0)
class USTStrategyTiming_Wave : public USTStrategyTiming
{
public:
	TArray<int>                                        ConfigWaveAlive;                                          // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                WaveInterval;                                             // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bTriggerToStart : 1;                                      // 0x0104(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDelayToStart : 1;                                        // 0x0104(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	int                                                DelayDurationToStart;                                     // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class USTStrategyTiming_Trigger*                   TriggerHelper;                                            // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CurrentWave;                                              // 0x0118(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x011C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyTiming_Wave");
		return pStaticClass;
	}


	void TickStrategy(float DeltaTime);
	void ResetCD();
	void OnTriggerToStartWave(bool IsRipe);
	void OnDelayToStartWave();
	int GetCurrentWave();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


}

