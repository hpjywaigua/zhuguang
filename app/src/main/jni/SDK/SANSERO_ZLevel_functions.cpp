// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:13 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function ZLevel.ZLevelData.ReBindLevelDataComponent
// (Final, Native, Public)

void AZLevelData::ReBindLevelDataComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ZLevel.ZLevelData.ReBindLevelDataComponent");

	AZLevelData_ReBindLevelDataComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ZLevel.ZLevelData.CheckMonsterSpotIsOnLand
// (Final, Native, Public)
// Parameters:
// class UZMonsterSpot*           MonsterSpot                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UZMonsterSpotGroup*      SpotGroup                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AZLevelData::CheckMonsterSpotIsOnLand(class UZMonsterSpot* MonsterSpot, class UZMonsterSpotGroup* SpotGroup)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ZLevel.ZLevelData.CheckMonsterSpotIsOnLand");

	AZLevelData_CheckMonsterSpotIsOnLand_Params params;
	params.MonsterSpot = MonsterSpot;
	params.SpotGroup = SpotGroup;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

