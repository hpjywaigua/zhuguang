#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class Development.CloudGMHandle
// 0x0008 (0x0030 - 0x0028)
class UCloudGMHandle : public UObject
{
public:
	bool                                               bEnableCloudGM;                                           // 0x0028(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.CloudGMHandle");
		return pStaticClass;
	}


	void InitCloudGM();
	void DestroyCloudGM();
};


// Class Development.DevConsole
// 0x0068 (0x0198 - 0x0130)
class UDevConsole : public UConsole
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0130(0x0058) MISSED OFFSET
	TArray<struct FString>                             LuaCommandList;                                           // 0x0188(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.DevConsole");
		return pStaticClass;
	}

};


// Class Development.GMCheatSystem
// 0x0058 (0x0080 - 0x0028)
class UGMCheatSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatSystem");
		return pStaticClass;
	}

};


// Class Development.GMCheatAI
// 0x0000 (0x0080 - 0x0080)
class UGMCheatAI : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatAI");
		return pStaticClass;
	}


	void TeleportAIToLoc(float X, float Y, float Z);
	void SpawnAITeam(int Num, int AITeamID, unsigned char Difficulty);
	void SpawnAIPosi(int ID, int AITeamID, float PosiX, float PosiY, float PosiZ);
	void SpawnAI(int Num, bool bSpawnAll);
	void MoveToAIWithClassName(const struct FString& AIClassName, float XOffset, float YOffset, float ZOffset);
	void MoveToAIByDropItem(int ItemId);
	void MoveToAI();
	void LogAIItemCount(int ItemId, float Distance);
	void FindAIDropItem(int ItemId);
	void ChangeAIBehaviorTree(int TreeIndex);
	void AddAIItem(int ID, int Count, float Distance);
};


// Class Development.GMCheatAnimation
// 0x0000 (0x0080 - 0x0080)
class UGMCheatAnimation : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatAnimation");
		return pStaticClass;
	}


	void TestAnimation(int Param1, bool Param2);
	void DumpCharacterAnimBPVars();
};


// Class Development.GMCheatAvatar
// 0x0000 (0x0080 - 0x0080)
class UGMCheatAvatar : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatAvatar");
		return pStaticClass;
	}


	void UseLocalWeaponDIYData(bool bFlag);
	void UseLocalVehicleAvatar();
	void SetWeaponPendantShow(bool bShow);
	void SetVehicleAvatar(int VehicleShapeType, int VehicleSkin);
	void SetPlayerTeamBodyInstMask(int Mask);
	void SetPlayerBodyInstMask(int Mask);
	void SetGrenadeAvatar(int SubType, int EquipmentSkin);
	void SetEquipmentAvatar(int EquipmentAvatarType, int EquipmentSkin);
	void SetEnableWingAvatar(bool Val);
	void SetDownloadInBattle(bool bEnable);
	void SetAvatarDownloadInBattle(bool bEnableDownload);
	void PrintMainCharAllAvatar();
	void DeleteVehicleAdvanceAvatar_Style(int VehicleSkin, int VehicleStyle);
	void DeleteVehicleAdvanceAvatar(int VehicleSkin, int ModelID);
	void DebugWorldPlayerAvatarInfo();
	void DebugChangeWearIndex(int Index);
	void ClearItemDownloadlist();
	void ChangeBattleAvatar(int HeadAvatarID, int HairAvatarID, int InGender, int PutOffAvatar);
	void AddWeaponPendantItem(int WeaponId, int pendantID);
	void AddWeaponDIYPlan(int AvatarID, int DIYPlanID);
	void AddWeaponAvatar(int WeaponSkin);
	void AddWeaponAttachmentAvatarSimple(int WeaponId, int WeaponAttachmentSkin);
	void AddWeaponAttachmentAvatar(int WeaponId, int WeaponAttachmentSkin);
	void AddVehicleAvatar(int VehicleSkin);
	void AddVehicleAdvanceAvatar_Style(int VehicleSkin, int VehicleStyle);
	void AddVehicleAdvanceAvatar(int VehicleSkin, int ModelID, int ColorID, int PatternID, int ParticleID);
	void AddItemToDownloadlist(int ItemId);
};


// Class Development.GMCheatBackpack
// 0x0000 (0x0080 - 0x0080)
class UGMCheatBackpack : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatBackpack");
		return pStaticClass;
	}


	void UseItem(int ID);
	void FlushItem(int onlyStatic);
	void DropItemsWithType(int TypeItem);
	void DropItem(int ID);
	void DropAllItem();
	void AddItem(int ID, int Count, int PickupType);
	void AddAvatarItem(int ID, int Color, int Pattern, int Num);
};


// Class Development.GMCheatCharacter
// 0x0000 (0x0080 - 0x0080)
class UGMCheatCharacter : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatCharacter");
		return pStaticClass;
	}


	void ToggleUserCmdDeltaSendAck(bool Val);
	void ToggleUserCmdDeltaFlag(bool Val);
	void ToggleUserCmdDeltaCheckSum(bool Val);
	void ToggleUserCmdDelta(bool Val);
	void ToggleServerAcknowledgePossession(bool Val);
	void ToggleCheatLocation(bool Val);
	void TestLowProbCircle(bool UseLowProb, int LoopCount);
	void TestLaunchFly(float Speed);
	void TestAutoMoveToShootingMachine();
	void TestAutoMoveToLocation(float X, float Y, float Z);
	void TestAutoMoveToCharacter(const struct FString& TargetPlayerUID);
	void TeamNoAlwaysRelevant();
	void SwitchViewTarget();
	void StartAirDropSpecified(float X, float Y);
	void StartAirDropBackupEnter(float X, float Y, int MaxPlaneNum);
	void StartAirDrop(int Index);
	void StartAirAttackSpecified(float X, float Y, float Radius);
	void StartAirAttack(int Index);
	void ShowWeaponRecordInfo();
	void ShowVaultEnable();
	void ShowResultWeaponRecordInfo();
	void ShowAllRoles();
	void SetTimeSpeedFactor(float Val);
	void SetTimeSpeedCheck(bool Val);
	void SetSpeed(float Modifier);
	void SetMaxHealth(float HP);
	void SetLowProbCircle(float X, float Y, float R, float Prob);
	void SetCustomJumpPoint(float JmpX, float JmpY, float JmpRadius);
	void SetCircleCenter(const struct FString& PointString);
	void SetCirCenterFixed(bool Enable, float X, float Y);
	void SetAirDropEnable(bool Enable);
	void SetAirAttackEnable(bool Enable);
	void Set2x2ForceCircleLastR(float R);
	void Set2x2ForceCircle(float X, float Y, float R);
	void Set2x2CircleCenter(int Index, float X, float Y);
	void Set2x2Circle3Center(float X1, float Y1, float x2, float y2, float x3, float y3);
	void PrintMovementLog(int PrintLog);
	void PrintDownCollision();
	void MoveToXY(float X, float Y);
	void MoveToVehicle(int ItemId);
	void MoveToS(const struct FString& VectorString);
	void MoveToNearestVehicle(float IgnoreDistance);
	void MoveToItem(int ItemId);
	void MoveTo(float X, float Y, float Z);
	void ModifyStreamingDistance(int Distance);
	void KillSomeOne(const struct FString& InPlayerName);
	void KillAll();
	void Kill(int GivenNumber);
	void GMTestZengzuo();
	void GMSetCampId(int CamID);
	void GetGameScreenSize();
	void ExecFollowTeammate(const struct FString& Name);
	void DebugSprint();
};


// Class Development.GMCheatDump
// 0x0000 (0x0080 - 0x0080)
class UGMCheatDump : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatDump");
		return pStaticClass;
	}


	void DumpWeaponsToFile(const struct FString& Filename);
	void DumpVehicleToFile(const struct FString& Filename);
	void DumpVehicleAnimInstanceToFile(const struct FString& Filename);
	void DumpVehicleAnimInstance();
	void DumpVehicle();
	void DumpSimulatedCharacterAnimInstanceToFile(const struct FString& Filename);
	void DumpSimulatedCharacterAnimInstance();
	void DumpReticleTargetActorToFile(const struct FString& Filename, bool bPrintFunc);
	void DumpReticleTargetActor(bool bPrintFunc);
	void DumpPlayerSkillInfo();
	void DumpPlayerInfoToFile(const struct FString& Filename);
	void DumpPlayerControllerToFile(const struct FString& Filename);
	void DumpPlayerController();
	void DumpPlayerCameraManagerToFile(const struct FString& Filename);
	void DumpObservingCharacterToFile(const struct FString& Filename);
	void DumpObservingCharacter();
	void DumpObjectProperties(const struct FString& ObjectName);
	void DumpCharacterToFile(const struct FString& Filename);
	void DumpCharacterAnimInstanceToFile(const struct FString& Filename);
	void DumpCharacterAnimInstance();
	void DumpCharacter();
	void DumpAllVehiclesToFile(const struct FString& Filename);
	void DumpAllVehicles();
	void DumpAllSkillActorsInfoToFile(const struct FString& Filename);
	void DumpAllSkillActorsInfo();
	void DumpAllPlayerControllerToFile(const struct FString& Filename);
	void DumpAllPlayerController();
	void DumpAllCharactersToFile(const struct FString& Filename);
	void DumpAllCharacters();
};


// Class Development.GMCheatGameFlow
// 0x0000 (0x0080 - 0x0080)
class UGMCheatGameFlow : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatGameFlow");
		return pStaticClass;
	}


	void StartReadyCountDown();
	void SetStateLeftTime(int leftTime);
	void GotoFlying();
	void GameModeGotoNextState();
	void GameModeGotoFightingState();
	void DsLuaGM(const struct FString& CmdString);
	void DsLuaDoString(const struct FString& LuaString);
};


// Class Development.GMCheatHiggs
// 0x0000 (0x0080 - 0x0080)
class UGMCheatHiggs : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatHiggs");
		return pStaticClass;
	}


	void TriggerActorChannelErrorDelegate();
	void TestSpawnStaticmesh(int Count);
	void TestGMCheatHiggs(int Param1, bool Param2);
	void TestGlueHia(int GlueType, int GlueValue);
	void StatCPU(int Enable);
	void SetOpenSecurityAlert(bool bOpen);
};


// Class Development.GMCheatHUD
// 0x0000 (0x0080 - 0x0080)
class UGMCheatHUD : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatHUD");
		return pStaticClass;
	}


	void ResetHUDDebugFunction();
	void RemoveHUDDebugFunction(const struct FString& FuncName);
	void EnableHUDDebug(bool bEnable, const struct FString& FuncName);
	void AddHUDDebugFunction(const struct FString& FuncName, bool bReset);
};


// Class Development.GMCheatLevel
// 0x0000 (0x0080 - 0x0080)
class UGMCheatLevel : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatLevel");
		return pStaticClass;
	}


	void SpawnActorWithPath(const struct FString& Path, float X, float Y, float Z);
	void ShutDownVehicleGenerate(bool IsOpen);
	void ShutDownPickUpGenerate(bool IsOpen);
	void ShutDownItemGenerate(bool IsOpen);
	void ShowNavOperator();
	void SetServerLevelLoadingMode(bool bNewLoadAll);
	void SetPlaneEnabled(bool InEnable);
	void SetCustomFlightRoute(float StartX, float StartY, float EndX, float EndY);
	void RemoveAllDoors();
	void PrintAllPickupWarpper();
	void LocalProfileFootprint();
	void LoadAllLand(bool bLoadAll);
	void GotoDoubleCircleEdge(float Z);
	void GMSetBoolPoisonCircle();
	void GMSetBoolAirDrop();
	void GMSetBoolAirAttack();
	void GMSetBoolAI();
	void GMEnableRandom();
	void GMEnableAllComponent();
	void GMDisableRandom();
	void GMDisableAllComponent();
	void GMBeginCircle(int CurIndex, float PosX, float PosY);
	struct FVector GetCurrentLevelOffset();
	void EnableMyLandscapeDraw();
	void DisableMyLandscapeDraw();
	void DebugAirDropPickInfo(float DrawTime, float BoxDrawSize, float BoxDrawLineLength, float ListWrapperDrawSize, float ListWrapperDrawLineLength);
};


// Class Development.GMCheatManager
// 0x00B0 (0x0128 - 0x0078)
class UGMCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0078(0x0058) MISSED OFFSET
	TArray<class UGMCheatSystem*>                      GMCheatSystems;                                           // 0x00D0(0x0010) (ZeroConstructor)
	class AActor*                                      PVETestMonster;                                           // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x00E8(0x0030) MISSED OFFSET
	TArray<class ASkeletalMeshActor*>                  SkeletalMeshActorPool;                                    // 0x0118(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatManager");
		return pStaticClass;
	}


	void WatchReport();
	void VehicleTowardTo(float X, float Y, float Z);
	void VehicleSpotLog();
	void VehicleMoveTo(float X, float Y, float Z);
	void VehicleMoveAndTowardTo(float X, float Y, float Z, float X1, float Y1, float Z1);
	void UpdateTrainingRank(int TrainingType, int Level, int Top1wScore, int Score);
	void ToggleSpringMode();
	void ToggleSpringDebug();
	void TogglePawnInfo();
	void TestPlayerBattleResult();
	void TestNetworkLost();
	void TestLineTrace(float X, float Y, float Z);
	void TestKillInfoPanel(int WeaponId, int Relationship, int WeaponAvatarID, int ClothID);
	void TestGameplayDataRecord(int UID, int RecordType);
	void TestEnableRegionsLongDistanceSleep(bool bEnable);
	void TestDeactivate();
	void TestCrash();
	void TeleportToVehicleAI(int InIndex);
	void TeleportToPVEMonster(int ChapterID, int LevelID, int WaveID);
	void TeleportTo(float X, float Y, float Z);
	void SwitchSocialIsland(int LandId, float Delay);
	void SwitchShowUI();
	void SuperGMKillDS();
	void StopAnimalDeliver(bool bStop);
	void StopAnimal(bool bStop);
	void StopAllMonsterDSAnim(bool bStop);
	void StatVehicle();
	void StarTPerforPlatTag(const struct FString& TagName);
	void SpawnVehicleWithPathAtPoint(const struct FString& Path, bool AroundMe, float X, float Y, float Z, int Num);
	void SpawnTrainingAIAroundMe(int Num, int Range);
	void SpawnMonsterAround(int MonsterID, float Radius, int Num, bool bStopAI);
	void SpawnItemBySpotDefaultTag(const struct FString& DefaultTag);
	void SpawnGameFeatureActor(const struct FString& Path);
	void SpawnFakePlayer(int Num, bool bWithPet, bool bStopAI);
	void SpawnDecal();
	void SpawnBotForTest(int Num);
	void SpawnAIAroundMe(int Num, float Range, bool HasWeapon, bool HasAvator, bool HasBackpack);
	void ShowScrollMsg(uint32_t MsgID, const struct FString& Param1, const struct FString& Param2);
	void ShowPet(bool Enable);
	void ShowOBMultiKillTips(const struct FString& PlayerName, int TeamID, int PlayerKillNum, int TeamKillNum);
	void ShowHideGuide(int GuideID, bool bShow);
	void ShowAllPlayersMarkIncludeAI(float VisDistance);
	void ShowAKComponentPosition(bool _IsShow);
	void SetWeatherPlaySpeed(float FSpeed);
	void SetViewFPP(bool IsFPP);
	void SetTouchMoveLog(bool Enable);
	void SetTouchMoveDelay(int DelayFrame);
	void SetTemperature(float InTemperature);
	void SetSpringArm(unsigned char armFlag);
	void SetSkillDup(int Count);
	void SetRateScore(float RankScore);
	void SetNetSpeed(int NewSpeed);
	void SetNeckUp(float UpAngle);
	void SetNeckSpeed(float Speed);
	void SetNeckRight(float RightAngle);
	void SetNeckMax(float MaxAngle);
	void SetNeckLeft(float LeftAngle);
	void SetMonsterNumMultiple(int ChapterID, int LevelID, int DiffcultPerc);
	void SetMonsterNB(bool MonsterNB);
	void SetMonsterHatred(float Hatred);
	void SetMaxFpsFromDevice();
	void SetIsRender(bool IsRender);
	void SetInactiveClearEnable(bool bNewActive);
	void SetHignPerformance(bool SetOpen);
	void SetGVMemberID(int memberID);
	void SetFestivalAirDrop(bool bFestival, const struct FString& BoxMesh);
	void SetFestivaGrenade(bool bFestival);
	void SetDynamicWeather(int WeatherType, int EventType);
	void SetDsSwitch(int InKey, const struct FString& InValue);
	void SetDeliver();
	void SetClearIslandEnable(bool bNewActive);
	void SetCameraLagEnable(bool Enable);
	void SetCacheInputNum(int CacheNum);
	void SetAnimEnable(bool Enable);
	void SetAnimDebugInfo(bool debugAnimInfo);
	void SetAnimDebugGroup(bool debugAnimGroup);
	void SetAllMonsterHp(int HP);
	void ServerCMD(const struct FString& Cmd);
	void ResumeAllLevelSequenceActors();
	void RenderTargetCompressTest(class UTexture* pTexture, const struct FVector& Posoffset);
	void RefreshReconnectUI();
	void PVESpawnMonsterByPos(int MonsterID, int Num, float Radius, float PosX, float PosY, float PosZ);
	void PVESpawnMonsterByDistance(int MonsterID, int Num, float Radius, float FrontDist);
	void PVESpawnMonster(int MonsterID, bool StopAI);
	void PVESetTestMonster(class AActor* InMonster);
	void PVEResetMonsterTable();
	void PVEPrintMonsterCount();
	void PVEPrintAllAnim(bool bPrintAll);
	void PVEPlayerTriggerSkill(int SkillID, int EventType);
	void PVEPlayerStopSkill(int SkillID, int StopReason);
	void PVEMonsterTriggerSkill(int SkillID, int EventType);
	void PVEMonsterStopSkill(int SkillID, int StopReason);
	void PVEMonsterRemoveBuffByID(int BuffID, int LayerCount, int CauserSkillID, bool CauseByPlayer);
	void PVEMonsterAddBuffByID(int BuffID, int LayerCount, int CauserSkillID, bool CauseByPlayer);
	void PVECloseMonsterLimit(bool bCloseMonsterLimit);
	void PrintScreenDebug(int Key, float TimeToDisplay, const struct FString& DebugMessage);
	void PrintRegionObjectList();
	void PrintPool();
	void PrintHP();
	void PrintAllAnim();
	void PrintAllActorLocationByClassName(const struct FString& InClassName);
	void PlayBornIslandSequence(bool bPlay);
	void PauseAnim(bool bPause);
	void PauseAllLevelSequenceActors();
	void PacketSimulationLag(int InSimulationLag);
	void OpenHitTest();
	void OpenFixationFreeFallVelocity(float X, float Y, float Z);
	void NotifyGameModeParamsChanged(int NewDuration);
	void NativeSimulateAction(int SimActionType);
	void MoveSnake(bool bEnable, float moveInternal, float ForwardRate, float RightRate);
	void ModifyVehicleSyncServerData(float MinCorrectionInterval, float AllowMaxDiatanceSqAtServer);
	void ModifyVehicleSyncClientData();
	void ModifyVehicleBuoyancy(float MeshDensity, int Index);
	void MarkAPMLevelFinish();
	void LogNetWorkParams();
	void LogicAreaTest(int AreaType, const struct FString& str);
	void LogAllBuffInfo();
	void LogAllActors();
	void LocalConnectToLobbySrv(const struct FString& URL);
	void KillAllPVEBot();
	void KillAllPlayers();
	void ItemSpotLog();
	void InGameAndroidBack();
	void GotoSpectatingDirectly();
	void GotoSpectating();
	void GotoSpecificWeather(int WeatherIdx);
	void GMWayPointEvent(int EventID);
	void GMUseGunCollision(bool bIsUse);
	void GMSuicideCurVehicle();
	void GMSuicide();
	void GMStopAI(bool bStop, uint32_t InPlayerKey);
	void GMSpeedUp();
	void GMSpawnSociallandSubVehicle01();
	void GMSpawnSocialLandPlayerAIAroundPointWithAvatarList(uint32_t DataOffset, uint32_t AINum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui, bool bWithWeapon, struct FString* AvatarList);
	void GMSpawnSocialLandPlayerAIAroundPoint(uint32_t DataOffset, uint32_t AINum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui);
	void GMSpawnSocialLandPlayerAIAroundMeWithAvatar(uint32_t AINum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui, bool bWithWeapon, struct FString* AvatarList);
	void GMSpawnSocialLandPlayerAIAroundMe(uint32_t AINum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui);
	void GMSpawnSmartBearerTestPlane();
	void GMSpawnSingleSocialLandPlayerAI(uint32_t DataOffset, float X, float Y, float Z, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui);
	void GMSpawnPlayerAIAroundPointDownloadable(uint32_t iNum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet);
	void GMSpawnPlayerAIAroundPoint(uint32_t iNum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet);
	void GMSpawnPlayerAIAroundMeDownloadable(uint32_t iNum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet);
	void GMSpawnPlayerAIAroundMe(uint32_t iNum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet);
	void GMSpawnAutoTestAI(int NameExtraID);
	class AActor* GMSpawnAIWithIDAndLoc(int AIID, float SpawnLocX, float SpawnLocY, float SpawnLocZ, float Radius, int TeamID, int ItemID1, int ItemNum1, int ItemID2, int ItemNum2, int ItemID3, int ItemNum3);
	void GMSpawnAIOnAIPoint3();
	void GMSpawnAIOnAIPoint2();
	void GMSpawnAIOnAIPoint1();
	void GMSocialSetRotation(float X, float Y, float Z);
	void GMSociallandPlayerMoveToTestPoint();
	void GMSociallandPlayerMoveToAISpawnPoint1();
	void GMSociallandChangeItemFromStr(const struct FString& ItemString, const struct FString& EquimentItemString);
	void GMShowHitFeedback(bool bCombatHitFeedbackEnable);
	void GMSetSpeed(float WalkSpeed);
	void GMSetServerLevelLoadingMode(bool bNewLoadAll);
	void GMSetPawnNull(bool bIsNull);
	void GMSetMLAIModifyDamage(int InIsModify);
	void GMSetMaxAINum(int Num);
	void GMSetJoystickEightDirection(bool IsNeedEightDirection);
	void GMSetJoystickActivatedRange(bool IsNeedActivatedRange, float ActivatedRange);
	void GMSetHealth(float Val);
	void GMSetDeliveryToMLAI(int InIsDeliveryToMLAI);
	void GMSetCullDistance(bool bCullDistance);
	void GMSetCircleTime(float cdTime, float LastTime);
	void GMSelectorWayPoint(const struct FName& NameOfAIWayPointSelector, int GMPathIndex);
	void GMRevivePlayer();
	void GMRainCount(float Count);
	void GMIOSFrameRateLock(int FrameRateLock);
	void GMInvincible(bool bInvincible);
	void GMIncreaseHealth();
	void GMGatherAllPlayerAIAroundMe(float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet);
	void GMForceSuicide();
	void GMForceNullNetwork(int bForce);
	void GMFollow(const struct FString& TargetName);
	void GMDrawLine(float X1, float Y1, float Z1, float x2, float y2, float Z2, float LifeTime);
	void GMDrawDirLine(float StartX, float StartY, float StartZ, float DirX, float DirY, float DirZ, float Length, float LifeTime);
	void GMDrawDebugSphere2(float X, float Y, float Z, float Radius, int Segments, float LifeTime);
	void GMDrawDebugSphere(float Radius, int Segments, float LifeTime);
	void GMDrawCone(float Degrees, float LifeTime, int LineNum);
	void GMDecreaseHealth();
	void GMChangeAIAype(int Type, uint32_t InPlayerKey);
	void GMAutoTestChangeItem(uint32_t PlayerKey, const struct FString& ItemString, const struct FString& EquimentItemString);
	void GMAIFire();
	void GMAddItemForAI(int ItemId, int Count, uint32_t InPlayerKey);
	void GMActiveRenderDynamicStyle(bool bSet, int Type);
	void GMActiveAI();
	void GetGVMemberID(int memberID);
	void GetGold();
	void GenerateMonsterWave(int ChapterID, int LevelID, int WaveID);
	void ForceStopDynamicWeatherChange();
	void ForceStartNextDynamicWeatherChange();
	void ForceKickoutAllPlayers(int LandId);
	void ForceGC();
	void ForceEndInputForAppWillDeactivate();
	void FireSpawnAirplane();
	void FireReviveTeammate(int RespawnStartID, bool bJump);
	void FallKill(int FallType);
	void EquipHelmetAndBodyArmor(int Lev);
	void EnterPVELevel(int ChapterID, int LevelID);
	void EnterPawnState(EPawnState InState, bool IsEnter);
	void EndAPMTag();
	void EnablePool(bool bEnable);
	void EnableHitBox(bool bEnable);
	void EnableFuzzyInformation();
	void EnableDSAnim(const struct FString& MonsterName, bool bEnable);
	void DumpSmartBearerManager();
	void DumpObjectNetProperties(class UObject* InObj);
	void DumpMoveLog(bool bDump);
	void DumpLevels();
	void DumpDSNetConsiderList();
	void DumpAnimLayer();
	void DumpAIOcclusion();
	void DSReconnectEvent();
	void DSConnectLostEvent();
	void DismissIsland();
	void DeleverAnimalCountPerWave(EAnimalType AnimalType, int Num);
	void DebugStopEMote(int Index);
	void DebugStopCapture();
	void DebugStartEMote(int Index);
	void DebugSpringArm(bool bDebug);
	void DebugSpeed();
	void DebugSetChangeWearCoolDownTime(float Time);
	void DebugRoomCustomParams(int FirstCircleDelayTime, int FirstCircleAppearTime, int FirstWhiteCircleRadiusMultiplicator, int BlueCircleDamageMultiplicator);
	void DebugPoseState(bool bEnable);
	void DebugOBNearPlayerList();
	void DebugMove();
	void DebugLocation();
	void DebugLevelsInfo();
	void DebugFPPAnim();
	void DebugFixedParams();
	void DebugFindFloorResult();
	void DebugCamera();
	void DebugAttach();
	void ClientSetSpeed(float Times, bool bGMSetSpeed);
	void ClearTestMesh();
	void ClearScreenDebug();
	void ClearNoDriverVehicle();
	void ClearBuffPrivateData();
	void ClearAnimLayer(int AnimLayer);
	void ClearAllTlog();
	void CheatBeginPlay();
	void ChatTest(struct FString* Content);
	void ChangeViewTarget();
	void ChangeToInfec(unsigned char SubPawnType);
	void ChangeMonsterWalkMode(int Mode);
	void ChangeAllTimeDuration(int NewEndStateTime, int NewStartShowLifeTime, int NewMinimumAliveTime, int NewMinimumPlayerNum, int NewSpecialLifeTime);
	void ChangeAIDamageRate(float InRate);
	void ChangeAIAttackPlayerDamageRate(float InRate);
	void CastUIMsg(const struct FString& Msg, const struct FString& module);
	void CallOnReconnect();
	void CallLuaTableFunction(const struct FString& tableName, const struct FString& FunctionName);
	void CallGMLua(const struct FString& FunctionName);
	void CallGameModeLuaOverrideFunction(struct FString* FunctionName);
	void CallGameModeLuaFunction(struct FString* FunctionName);
	void BuildingCollide(bool InCollide);
	void AutoShoveling(bool bEnable, float AutoShvelingSeconds);
	void AutoSetPlayerLocation(bool bEnable);
	void AnimDebugUseSkipMapForDistanceFactor(bool bFlag);
	void AnimDebugUseLodMap(bool bUseLodMap);
	void AnimDebugUpdateFlag(int Type);
	void AnimDebugNonRenderedRate(int UpdateRate);
	void AnimDebugNonRenderedMinDist(float minDist);
	void AnimDebugNonRenderedMaxDist(float MaxDist);
	void AnimDebugLodSkipMap(TMap<int, int> SkipMap);
	void AnimDebugEnable(bool bEnable);
	void AnimDebugBaseDistFactor(TArray<float> BaseDistFactor);
	void AirDropByClassPath(float X, float Y, float Z, const struct FString& ClassPath);
	void AILog();
	void AddWonderfulPeriod(int Type, float StartTime, float EndTime, int AdditionalData, int Index);
	void AddTestTouchInput(int FingerIndex, float X, float Y, float force, bool bIsStart);
	void AddScore(int Score);
	void AddAllTestRes();
	void ActiveCurCamera(bool bActive);
};


// Class Development.GMCheatMod
// 0x0000 (0x0080 - 0x0080)
class UGMCheatMod : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatMod");
		return pStaticClass;
	}


	void TriggerHunterRevival();
	void SetUAETriggerEnable(bool IsEnbale);
	void SetInfectResetPlayerInterTime(float InterTime);
	void SetAllInfectedAreaLevel(int LevelID);
	void OnBuyRevivalTeammate(int TeammateIndex);
	void OnBuyRevivalSign();
	void InfectionEndRound();
	void GetGameResult();
	void DebugEnableFerrisWheelTick(bool bEnable);
	void ClearBossBornPoint();
	void ChangePVELevel(int Lv);
	void CallZombieFlowAirDrop(int ZombieID);
	void CallZombieAirDrop(int ZombieID);
	void AddBossBornPoint(float BornX, float BornY);
};


// Class Development.GMCheatOther
// 0x0000 (0x0080 - 0x0080)
class UGMCheatOther : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatOther");
		return pStaticClass;
	}


	void UnLoadAllCollision(bool Unload);
	void ShutDownBroadcastFatalDamage(bool IsOpen);
	void ShowHideLandscapeComponent(bool bShow);
	void SetSingleThreadUpdateAnim(bool InIsSingleThread);
	void SetIsShowBlood(bool InIsShowBlood);
	void RetrievePlayerBattleResultData();
	void RecoverStatusAfterReconnecting();
	void ObserveWhoKilledMe();
	void GMTestSpectateRPC();
	void GMTestSpectateException(int Type);
	void GMTestExternalData(const struct FString& InStr);
	void GMTeleport(const struct FName& Teleporter);
	void GMSetScalarParam(const struct FString& Name, const struct FString& ShaderName, float Value);
	void GMSendDailyTaskReport();
	void GMBroastSyncTaskInfo();
	void EmptyLandscapeActor();
	void DumpGUIDCache(int DriverIndex);
	void DumpActiveObject();
	void DebugEnableDrawSearchLine(int bEnabled);
	void CanSeeAllUI(bool bUIVisibility);
	void AutoSelectTeammateToView();
};


// Class Development.GMCheatSkill
// 0x0000 (0x0080 - 0x0080)
class UGMCheatSkill : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatSkill");
		return pStaticClass;
	}


	void UpgradeSkillLevel(int SkillID, int SkillLevel);
	void TryDeleteOneSkill(int SkillID, bool bImmediately);
	void TryAddOneSkill(int SkillID, bool bActive, int ButtonSlot);
	void TriggerSkillWithID(int SkillID, bool bEnable);
	void StartSkill(int SkillID);
	void StartMainSkill();
	void RemoveVehicleBuffBySkill(int SkillID);
	void RemoveVehicleBuff(int BuffID);
	void RemoveBuffBySkill(int SkillID, int IsPlayer);
	void RemoveBuff(int BuffID, int IsPlayer, int BuffLayer);
	void ReloadPVETable();
	void EnableSkillCD(bool bEnable);
	void DynamicRemoveSkill(int SkillID);
	void DynamicAddSkill(int SkillID);
	void DumpSkills();
	void AddVehicleBuffBySkill(int SkillID);
	void AddVehicleBuff(int BuffID);
	void AddSkillToken(int SkillID, bool bAdd);
	void AddBuffBySkill(int SkillID, int IsPlayer);
	void AddBuff(int BuffID, int IsPlayer);
};


// Class Development.GMCheatVehicle
// 0x0000 (0x0080 - 0x0080)
class UGMCheatVehicle : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatVehicle");
		return pStaticClass;
	}


	void VW_Seat(int change);
	void VehicleResetTo(float X, float Y, float Z);
	void VehicleMoveTo(float X, float Y, float Z);
	void ToggleVehicleSync(bool Val);
	void SpawnVehicleWithPathAndLoc(const struct FString& Path, float X, float Y, float Z, int Num);
	void SpawnVehicleWithPath(const struct FString& Path, int Num);
	void SpawnVehicle();
	void SpawnAllVehicle(const struct FString& Path);
	void ShowOpenSequence(float Time);
	void SetSnowBoradRotationInAir(float Pitch, float Yaw, float Roll);
	void SetFuelByPercent(float percent);
	void ResetVehicleEngine();
	void ReqLeaveVehicle();
	void ReqExchangeVehicleCharacter(int Param);
	void ReqEnterVehicle(float dis);
	void ReqEnterSnowBoard();
	void ReplaceVehicleWithPath(const struct FString& Path);
	void ReplaceVehicle();
	void MakeVehicleFly(int IsFly, bool bIsUp);
	void KillAllEnermyVehicle();
};


// Class Development.GMCheatWeapon
// 0x0000 (0x0080 - 0x0080)
class UGMCheatWeapon : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatWeapon");
		return pStaticClass;
	}


	void ToggleShootVertify();
	void ShowWeaponDirection(int Time);
	void ShowBulletInfo();
	void SetWeaponAttrValue(const struct FString& AttrName, float Val);
	void SetWeaponAttrReloadTable(const struct FString& tableName);
	void SetShootPveVertify(bool IsVertify);
	void SetShootPveDebug(bool DebugShootPve);
	void SetAIGenerateArmsRaceWeapon(float Distance, int Level);
	void ScopeOut();
	void ScopeIn();
	void PrintWeaponAllState();
	void GMSwitchWeaponSpeedScale(float SwitchScale);
	void GMSetReportWeaponNum(int Num);
	void EnableCurrentWeaponInfiniteBullets(bool bEnable);
	void DebugEnableBulletImpact(int bEnabled);
	void CollectAllPlayerWeaponPosInfo();
	void ChangeWeaponFunction(int NewWeaponFunction);
	void ChangeShootWeaponStrValue(const struct FString& StrName, const struct FString& KeyName, float Value);
	void ChangeArmsRaceWeaponGroup(int WeaponGroupID);
};


// Class Development.QPSBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UQPSBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.QPSBPLibrary");
		return pStaticClass;
	}


	static void SwitchUIWidgetShowFromUserWidget(const struct FName& ContainName, const struct FString& UserWidgetName, const struct FString& WidgetName);
	static void SwitchUIWidgetShow(const struct FName& ContainName, const struct FString& WidgetName);
	static void SwitchUIContainsShow(const struct FName& Name);
	static bool IsPublishVersion();
	static int GetHZBValue();
	static float GetDistanceCullingFactor();
};


// Class Development.VisualDebugComponent
// 0x0090 (0x01A8 - 0x0118)
class UVisualDebugComponent : public UActorComponent
{
public:
	class AActor*                                      OwnerActor;                                               // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              MaxDrawTimePerTask;                                       // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x84];                                      // 0x0124(0x0084) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.VisualDebugComponent");
		return pStaticClass;
	}


	void StopContinuous(int TaskId);
	void RPC_DrawDebug_Text(const struct FDrawShape_Text& Text);
	void RPC_DrawDebug_StopMultiShapes(int TaskId);
	void RPC_DrawDebug_Sphere(const struct FDrawShape_Sphere& Sphere);
	void RPC_DrawDebug_MultiShapes(TArray<struct FDrawShape_Sphere> Spheres, TArray<struct FDrawShape_Line> Lines);
	void RPC_DrawDebug_Line(const struct FDrawShape_Line& Line);
	void RPC_DrawDebug_Cylinder(const struct FDrawShape_Cylinder& Cylinder);
	void RPC_DrawDebug_Box(const struct FDrawShape_Box& Box);
	void NetMulticast_DrawDebug_Sphere(const struct FDrawShape_Sphere& Sphere);
	void NetMulticast_DrawDebug_Line(const struct FDrawShape_Line& Line);
	void NetMulticast_DrawDebug_Cylinder(const struct FDrawShape_Cylinder& Cylinder);
	void NetMulticast_DrawDebug_Box(const struct FDrawShape_Box& Box);
	void MarkContinuousEnd();
	int MarkContinuousBegin();
	void DrawString(const struct FVector& TextLocation, const struct FString& Text, class AActor* TestBaseActor, const struct FColor& TextColor, float Duration);
	void DrawSphere(const struct FVector& Center, float Radius, const struct FColor& Color, float LifeTime, float Thickness);
	void DrawLine(const struct FVector& Start, const struct FVector& End, const struct FColor& Color, float LifeTime, float Thickness);
	void DrawCylinder(const struct FVector& Start, const struct FVector& End, float Radius, int Segments, const struct FColor& Color, float LifeTime, float Thickness);
	void DrawBox(const struct FVector& Center, const struct FVector& Extent, const struct FColor& Color, const struct FRotator& Rotation, float LifeTime, float Thickness);
};


// Class Development.VisualDebugLibrary
// 0x0000 (0x0028 - 0x0028)
class UVisualDebugLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.VisualDebugLibrary");
		return pStaticClass;
	}


	static void StopDrawContinuous(class APawn* Requester, int TaskId);
	static void MarkContinuousEnd(class APawn* Requester);
	static int MarkContinuousBegin(class APawn* Requester);
	static void DrawText(class APawn* Requester, const struct FVector& TextLocation, const struct FString& Text, class AActor* TestBaseActor, const struct FColor& Color, float Duration);
	static void DrawSphere(class APawn* Requester, const struct FVector& Center, float Radius, int Segments, const struct FColor& Color, float Duration, float Thickness);
	static void DrawLine(class APawn* Requester, const struct FVector& LineStart, const struct FVector& LineEnd, const struct FColor& Color, float Duration, float Thickness);
	static void DrawCylinder(class APawn* Requester, const struct FVector& Start, const struct FVector& End, float Radius, int Segments, const struct FColor& Color, float Duration, float Thickness);
	static void DrawBox(class APawn* Requester, const struct FVector& Center, const struct FVector& Extent, const struct FColor& Color, const struct FRotator& Rotation, float Duration, float Thickness);
};


}

