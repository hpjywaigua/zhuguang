#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:18 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// BlueprintGeneratedClass LoadedClassManager_BP.LoadedClassManager_BP_C
// 0x0058 (0x03A0 - 0x0348)
class ULoadedClassManager_BP_C : public UUAELoadedClassManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)
	TMap<struct FString, struct FString>               BPTableName2TableName;                                    // 0x0350(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass LoadedClassManager_BP.LoadedClassManager_BP_C");
		return pStaticClass;
	}


	void LoadBPTableData_Mod(const struct FString& BPTableName, const struct FString& tableName);
	void LoadBPTableData(const struct FString& BPTableName, const struct FString& tableName);
	void Load3DIconBPTable(const struct FString& BPTableName);
	void LoadInFillingBPTable(const struct FString& BPTableName);
	void LoadVehiclePropsBPTable(const struct FString& BPTableName);
	void LoadDecalBPTable(const struct FString& BPTableName);
	void LoadSkillPropsBPTable(const struct FString& BPTableName);
	void LoadVehilceRefitPartternBPTable(const struct FString& BPTableName);
	void LoadVehilceRefitColorBPTable(const struct FString& BPTableName);
	void LoadVehilceRefitParticleBPTable(const struct FString& BPTableName);
	void LoadPetAvatarBPTable(const struct FString& BPTableName);
	void LoadVehilceRefitBPTable(const struct FString& BPTableName);
	void LoadSeasonMissionBPTable(const struct FString& BPTableName);
	void LoadAvatarPatternBPTable(const struct FString& BPTableName);
	void LoadAvatarColorBPTable(const struct FString& BPTableName);
	void LoadVehicleBPTable(const struct FString& BPTableName);
	void LoadPlaneBPTable(const struct FString& BPTableName);
	void LoadEmoteBPTable(const struct FString& BPTableName);
	void LoadConsumableBPTable(const struct FString& BPTableName);
	void LoadGameModeBPTable(const struct FString& BPTableName);
	void LoadAvatarBPTable(const struct FString& BPTableName);
	void LoadWeaponBPTable(const struct FString& BPTableName);
	void InitBPTableMap();
	void InitBPTableMap_Mod();
	void ExecuteUbergraph_LoadedClassManager_BP(int EntryPoint);
};


}

