// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function Development.CloudGMHandle.InitCloudGM
// (Final, Native, Public, BlueprintCallable)

void UCloudGMHandle::InitCloudGM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.CloudGMHandle.InitCloudGM");

	UCloudGMHandle_InitCloudGM_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.CloudGMHandle.DestroyCloudGM
// (Final, Native, Public)

void UCloudGMHandle::DestroyCloudGM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.CloudGMHandle.DestroyCloudGM");

	UCloudGMHandle_DestroyCloudGM_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAI.TeleportAIToLoc
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAI::TeleportAIToLoc(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.TeleportAIToLoc");

	UGMCheatAI_TeleportAIToLoc_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAI.SpawnAITeam
// (Final, Exec, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            AITeamID                       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Difficulty                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAI::SpawnAITeam(int Num, int AITeamID, unsigned char Difficulty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.SpawnAITeam");

	UGMCheatAI_SpawnAITeam_Params params;
	params.Num = Num;
	params.AITeamID = AITeamID;
	params.Difficulty = Difficulty;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAI.SpawnAIPosi
// (Final, Exec, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            AITeamID                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          PosiX                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          PosiY                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          PosiZ                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAI::SpawnAIPosi(int ID, int AITeamID, float PosiX, float PosiY, float PosiZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.SpawnAIPosi");

	UGMCheatAI_SpawnAIPosi_Params params;
	params.ID = ID;
	params.AITeamID = AITeamID;
	params.PosiX = PosiX;
	params.PosiY = PosiY;
	params.PosiZ = PosiZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAI.SpawnAI
// (Final, Exec, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSpawnAll                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAI::SpawnAI(int Num, bool bSpawnAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.SpawnAI");

	UGMCheatAI_SpawnAI_Params params;
	params.Num = Num;
	params.bSpawnAll = bSpawnAll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAI.MoveToAIWithClassName
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 AIClassName                    (Parm, ZeroConstructor)
// float                          XOffset                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          YOffset                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ZOffset                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAI::MoveToAIWithClassName(const struct FString& AIClassName, float XOffset, float YOffset, float ZOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.MoveToAIWithClassName");

	UGMCheatAI_MoveToAIWithClassName_Params params;
	params.AIClassName = AIClassName;
	params.XOffset = XOffset;
	params.YOffset = YOffset;
	params.ZOffset = ZOffset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAI.MoveToAIByDropItem
// (Final, Exec, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAI::MoveToAIByDropItem(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.MoveToAIByDropItem");

	UGMCheatAI_MoveToAIByDropItem_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAI.MoveToAI
// (Final, Exec, Native, Public)

void UGMCheatAI::MoveToAI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.MoveToAI");

	UGMCheatAI_MoveToAI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAI.LogAIItemCount
// (Final, Exec, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAI::LogAIItemCount(int ItemId, float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.LogAIItemCount");

	UGMCheatAI_LogAIItemCount_Params params;
	params.ItemId = ItemId;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAI.FindAIDropItem
// (Final, Exec, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAI::FindAIDropItem(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.FindAIDropItem");

	UGMCheatAI_FindAIDropItem_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAI.ChangeAIBehaviorTree
// (Final, Exec, Native, Public)
// Parameters:
// int                            TreeIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAI::ChangeAIBehaviorTree(int TreeIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.ChangeAIBehaviorTree");

	UGMCheatAI_ChangeAIBehaviorTree_Params params;
	params.TreeIndex = TreeIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAI.AddAIItem
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAI::AddAIItem(int ID, int Count, float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.AddAIItem");

	UGMCheatAI_AddAIItem_Params params;
	params.ID = ID;
	params.Count = Count;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAnimation.TestAnimation
// (Final, Exec, Native, Private)
// Parameters:
// int                            Param1                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Param2                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAnimation::TestAnimation(int Param1, bool Param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAnimation.TestAnimation");

	UGMCheatAnimation_TestAnimation_Params params;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAnimation.DumpCharacterAnimBPVars
// (Final, Exec, Native, Private, BlueprintCallable)

void UGMCheatAnimation::DumpCharacterAnimBPVars()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAnimation.DumpCharacterAnimBPVars");

	UGMCheatAnimation_DumpCharacterAnimBPVars_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.UseLocalWeaponDIYData
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bFlag                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::UseLocalWeaponDIYData(bool bFlag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.UseLocalWeaponDIYData");

	UGMCheatAvatar_UseLocalWeaponDIYData_Params params;
	params.bFlag = bFlag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.UseLocalVehicleAvatar
// (Final, Exec, Native, Public)

void UGMCheatAvatar::UseLocalVehicleAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.UseLocalVehicleAvatar");

	UGMCheatAvatar_UseLocalVehicleAvatar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.SetWeaponPendantShow
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::SetWeaponPendantShow(bool bShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetWeaponPendantShow");

	UGMCheatAvatar_SetWeaponPendantShow_Params params;
	params.bShow = bShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.SetVehicleAvatar
// (Final, Exec, Native, Public)
// Parameters:
// int                            VehicleShapeType               (Parm, ZeroConstructor, IsPlainOldData)
// int                            VehicleSkin                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::SetVehicleAvatar(int VehicleShapeType, int VehicleSkin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetVehicleAvatar");

	UGMCheatAvatar_SetVehicleAvatar_Params params;
	params.VehicleShapeType = VehicleShapeType;
	params.VehicleSkin = VehicleSkin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.SetPlayerTeamBodyInstMask
// (Final, Exec, Native, Public)
// Parameters:
// int                            Mask                           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::SetPlayerTeamBodyInstMask(int Mask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetPlayerTeamBodyInstMask");

	UGMCheatAvatar_SetPlayerTeamBodyInstMask_Params params;
	params.Mask = Mask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.SetPlayerBodyInstMask
// (Final, Exec, Native, Public)
// Parameters:
// int                            Mask                           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::SetPlayerBodyInstMask(int Mask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetPlayerBodyInstMask");

	UGMCheatAvatar_SetPlayerBodyInstMask_Params params;
	params.Mask = Mask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.SetGrenadeAvatar
// (Final, Exec, Native, Public)
// Parameters:
// int                            SubType                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            EquipmentSkin                  (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::SetGrenadeAvatar(int SubType, int EquipmentSkin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetGrenadeAvatar");

	UGMCheatAvatar_SetGrenadeAvatar_Params params;
	params.SubType = SubType;
	params.EquipmentSkin = EquipmentSkin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.SetEquipmentAvatar
// (Final, Exec, Native, Public)
// Parameters:
// int                            EquipmentAvatarType            (Parm, ZeroConstructor, IsPlainOldData)
// int                            EquipmentSkin                  (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::SetEquipmentAvatar(int EquipmentAvatarType, int EquipmentSkin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetEquipmentAvatar");

	UGMCheatAvatar_SetEquipmentAvatar_Params params;
	params.EquipmentAvatarType = EquipmentAvatarType;
	params.EquipmentSkin = EquipmentSkin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.SetEnableWingAvatar
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::SetEnableWingAvatar(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetEnableWingAvatar");

	UGMCheatAvatar_SetEnableWingAvatar_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.SetDownloadInBattle
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::SetDownloadInBattle(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetDownloadInBattle");

	UGMCheatAvatar_SetDownloadInBattle_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.SetAvatarDownloadInBattle
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bEnableDownload                (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::SetAvatarDownloadInBattle(bool bEnableDownload)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetAvatarDownloadInBattle");

	UGMCheatAvatar_SetAvatarDownloadInBattle_Params params;
	params.bEnableDownload = bEnableDownload;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.PrintMainCharAllAvatar
// (Final, Exec, Native, Public)

void UGMCheatAvatar::PrintMainCharAllAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.PrintMainCharAllAvatar");

	UGMCheatAvatar_PrintMainCharAllAvatar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.DeleteVehicleAdvanceAvatar_Style
// (Final, Exec, Native, Public)
// Parameters:
// int                            VehicleSkin                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            VehicleStyle                   (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::DeleteVehicleAdvanceAvatar_Style(int VehicleSkin, int VehicleStyle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.DeleteVehicleAdvanceAvatar_Style");

	UGMCheatAvatar_DeleteVehicleAdvanceAvatar_Style_Params params;
	params.VehicleSkin = VehicleSkin;
	params.VehicleStyle = VehicleStyle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.DeleteVehicleAdvanceAvatar
// (Final, Exec, Native, Public)
// Parameters:
// int                            VehicleSkin                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModelID                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::DeleteVehicleAdvanceAvatar(int VehicleSkin, int ModelID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.DeleteVehicleAdvanceAvatar");

	UGMCheatAvatar_DeleteVehicleAdvanceAvatar_Params params;
	params.VehicleSkin = VehicleSkin;
	params.ModelID = ModelID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.DebugWorldPlayerAvatarInfo
// (Final, Exec, Native, Public)

void UGMCheatAvatar::DebugWorldPlayerAvatarInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.DebugWorldPlayerAvatarInfo");

	UGMCheatAvatar_DebugWorldPlayerAvatarInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.DebugChangeWearIndex
// (Final, Exec, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::DebugChangeWearIndex(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.DebugChangeWearIndex");

	UGMCheatAvatar_DebugChangeWearIndex_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.ClearItemDownloadlist
// (Final, Exec, Native, Public)

void UGMCheatAvatar::ClearItemDownloadlist()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.ClearItemDownloadlist");

	UGMCheatAvatar_ClearItemDownloadlist_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.ChangeBattleAvatar
// (Final, Exec, Native, Public)
// Parameters:
// int                            HeadAvatarID                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            HairAvatarID                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            InGender                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            PutOffAvatar                   (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::ChangeBattleAvatar(int HeadAvatarID, int HairAvatarID, int InGender, int PutOffAvatar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.ChangeBattleAvatar");

	UGMCheatAvatar_ChangeBattleAvatar_Params params;
	params.HeadAvatarID = HeadAvatarID;
	params.HairAvatarID = HairAvatarID;
	params.InGender = InGender;
	params.PutOffAvatar = PutOffAvatar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.AddWeaponPendantItem
// (Final, Exec, Native, Public)
// Parameters:
// int                            WeaponId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            pendantID                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::AddWeaponPendantItem(int WeaponId, int pendantID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddWeaponPendantItem");

	UGMCheatAvatar_AddWeaponPendantItem_Params params;
	params.WeaponId = WeaponId;
	params.pendantID = pendantID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.AddWeaponDIYPlan
// (Final, Exec, Native, Public)
// Parameters:
// int                            AvatarID                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            DIYPlanID                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::AddWeaponDIYPlan(int AvatarID, int DIYPlanID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddWeaponDIYPlan");

	UGMCheatAvatar_AddWeaponDIYPlan_Params params;
	params.AvatarID = AvatarID;
	params.DIYPlanID = DIYPlanID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.AddWeaponAvatar
// (Final, Exec, Native, Public)
// Parameters:
// int                            WeaponSkin                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::AddWeaponAvatar(int WeaponSkin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddWeaponAvatar");

	UGMCheatAvatar_AddWeaponAvatar_Params params;
	params.WeaponSkin = WeaponSkin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.AddWeaponAttachmentAvatarSimple
// (Final, Exec, Native, Public)
// Parameters:
// int                            WeaponId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponAttachmentSkin           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::AddWeaponAttachmentAvatarSimple(int WeaponId, int WeaponAttachmentSkin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddWeaponAttachmentAvatarSimple");

	UGMCheatAvatar_AddWeaponAttachmentAvatarSimple_Params params;
	params.WeaponId = WeaponId;
	params.WeaponAttachmentSkin = WeaponAttachmentSkin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.AddWeaponAttachmentAvatar
// (Final, Exec, Native, Public)
// Parameters:
// int                            WeaponId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponAttachmentSkin           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::AddWeaponAttachmentAvatar(int WeaponId, int WeaponAttachmentSkin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddWeaponAttachmentAvatar");

	UGMCheatAvatar_AddWeaponAttachmentAvatar_Params params;
	params.WeaponId = WeaponId;
	params.WeaponAttachmentSkin = WeaponAttachmentSkin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.AddVehicleAvatar
// (Final, Exec, Native, Public)
// Parameters:
// int                            VehicleSkin                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::AddVehicleAvatar(int VehicleSkin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddVehicleAvatar");

	UGMCheatAvatar_AddVehicleAvatar_Params params;
	params.VehicleSkin = VehicleSkin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.AddVehicleAdvanceAvatar_Style
// (Final, Exec, Native, Public)
// Parameters:
// int                            VehicleSkin                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            VehicleStyle                   (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::AddVehicleAdvanceAvatar_Style(int VehicleSkin, int VehicleStyle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddVehicleAdvanceAvatar_Style");

	UGMCheatAvatar_AddVehicleAdvanceAvatar_Style_Params params;
	params.VehicleSkin = VehicleSkin;
	params.VehicleStyle = VehicleStyle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.AddVehicleAdvanceAvatar
// (Final, Exec, Native, Public)
// Parameters:
// int                            VehicleSkin                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModelID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ColorID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            PatternID                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ParticleID                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::AddVehicleAdvanceAvatar(int VehicleSkin, int ModelID, int ColorID, int PatternID, int ParticleID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddVehicleAdvanceAvatar");

	UGMCheatAvatar_AddVehicleAdvanceAvatar_Params params;
	params.VehicleSkin = VehicleSkin;
	params.ModelID = ModelID;
	params.ColorID = ColorID;
	params.PatternID = PatternID;
	params.ParticleID = ParticleID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatAvatar.AddItemToDownloadlist
// (Final, Exec, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatAvatar::AddItemToDownloadlist(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddItemToDownloadlist");

	UGMCheatAvatar_AddItemToDownloadlist_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatBackpack.UseItem
// (Final, Exec, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatBackpack::UseItem(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.UseItem");

	UGMCheatBackpack_UseItem_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatBackpack.FlushItem
// (Final, Exec, Native, Public)
// Parameters:
// int                            onlyStatic                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatBackpack::FlushItem(int onlyStatic)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.FlushItem");

	UGMCheatBackpack_FlushItem_Params params;
	params.onlyStatic = onlyStatic;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatBackpack.DropItemsWithType
// (Final, Exec, Native, Public)
// Parameters:
// int                            TypeItem                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatBackpack::DropItemsWithType(int TypeItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.DropItemsWithType");

	UGMCheatBackpack_DropItemsWithType_Params params;
	params.TypeItem = TypeItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatBackpack.DropItem
// (Final, Exec, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatBackpack::DropItem(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.DropItem");

	UGMCheatBackpack_DropItem_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatBackpack.DropAllItem
// (Final, Exec, Native, Public)

void UGMCheatBackpack::DropAllItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.DropAllItem");

	UGMCheatBackpack_DropAllItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatBackpack.AddItem
// (Final, Exec, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            PickupType                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatBackpack::AddItem(int ID, int Count, int PickupType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.AddItem");

	UGMCheatBackpack_AddItem_Params params;
	params.ID = ID;
	params.Count = Count;
	params.PickupType = PickupType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatBackpack.AddAvatarItem
// (Final, Exec, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Pattern                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatBackpack::AddAvatarItem(int ID, int Color, int Pattern, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.AddAvatarItem");

	UGMCheatBackpack_AddAvatarItem_Params params;
	params.ID = ID;
	params.Color = Color;
	params.Pattern = Pattern;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.ToggleUserCmdDeltaSendAck
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::ToggleUserCmdDeltaSendAck(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ToggleUserCmdDeltaSendAck");

	UGMCheatCharacter_ToggleUserCmdDeltaSendAck_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.ToggleUserCmdDeltaFlag
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::ToggleUserCmdDeltaFlag(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ToggleUserCmdDeltaFlag");

	UGMCheatCharacter_ToggleUserCmdDeltaFlag_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.ToggleUserCmdDeltaCheckSum
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::ToggleUserCmdDeltaCheckSum(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ToggleUserCmdDeltaCheckSum");

	UGMCheatCharacter_ToggleUserCmdDeltaCheckSum_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.ToggleUserCmdDelta
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::ToggleUserCmdDelta(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ToggleUserCmdDelta");

	UGMCheatCharacter_ToggleUserCmdDelta_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.ToggleServerAcknowledgePossession
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::ToggleServerAcknowledgePossession(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ToggleServerAcknowledgePossession");

	UGMCheatCharacter_ToggleServerAcknowledgePossession_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.ToggleCheatLocation
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::ToggleCheatLocation(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ToggleCheatLocation");

	UGMCheatCharacter_ToggleCheatLocation_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.TestLowProbCircle
// (Final, Exec, Native, Public, Const)
// Parameters:
// bool                           UseLowProb                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LoopCount                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::TestLowProbCircle(bool UseLowProb, int LoopCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.TestLowProbCircle");

	UGMCheatCharacter_TestLowProbCircle_Params params;
	params.UseLowProb = UseLowProb;
	params.LoopCount = LoopCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.TestLaunchFly
// (Final, Exec, Native, Public)
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::TestLaunchFly(float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.TestLaunchFly");

	UGMCheatCharacter_TestLaunchFly_Params params;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.TestAutoMoveToShootingMachine
// (Final, Exec, Native, Public)

void UGMCheatCharacter::TestAutoMoveToShootingMachine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.TestAutoMoveToShootingMachine");

	UGMCheatCharacter_TestAutoMoveToShootingMachine_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.TestAutoMoveToLocation
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::TestAutoMoveToLocation(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.TestAutoMoveToLocation");

	UGMCheatCharacter_TestAutoMoveToLocation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.TestAutoMoveToCharacter
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 TargetPlayerUID                (Parm, ZeroConstructor)

void UGMCheatCharacter::TestAutoMoveToCharacter(const struct FString& TargetPlayerUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.TestAutoMoveToCharacter");

	UGMCheatCharacter_TestAutoMoveToCharacter_Params params;
	params.TargetPlayerUID = TargetPlayerUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.TeamNoAlwaysRelevant
// (Final, Exec, Native, Public)

void UGMCheatCharacter::TeamNoAlwaysRelevant()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.TeamNoAlwaysRelevant");

	UGMCheatCharacter_TeamNoAlwaysRelevant_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.SwitchViewTarget
// (Final, Exec, Native, Public)

void UGMCheatCharacter::SwitchViewTarget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SwitchViewTarget");

	UGMCheatCharacter_SwitchViewTarget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.StartAirDropSpecified
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::StartAirDropSpecified(float X, float Y)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.StartAirDropSpecified");

	UGMCheatCharacter_StartAirDropSpecified_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.StartAirDropBackupEnter
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxPlaneNum                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::StartAirDropBackupEnter(float X, float Y, int MaxPlaneNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.StartAirDropBackupEnter");

	UGMCheatCharacter_StartAirDropBackupEnter_Params params;
	params.X = X;
	params.Y = Y;
	params.MaxPlaneNum = MaxPlaneNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.StartAirDrop
// (Final, Exec, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::StartAirDrop(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.StartAirDrop");

	UGMCheatCharacter_StartAirDrop_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.StartAirAttackSpecified
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::StartAirAttackSpecified(float X, float Y, float Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.StartAirAttackSpecified");

	UGMCheatCharacter_StartAirAttackSpecified_Params params;
	params.X = X;
	params.Y = Y;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.StartAirAttack
// (Final, Exec, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::StartAirAttack(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.StartAirAttack");

	UGMCheatCharacter_StartAirAttack_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.ShowWeaponRecordInfo
// (Final, Exec, Native, Public)

void UGMCheatCharacter::ShowWeaponRecordInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ShowWeaponRecordInfo");

	UGMCheatCharacter_ShowWeaponRecordInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.ShowVaultEnable
// (Final, Exec, Native, Public)

void UGMCheatCharacter::ShowVaultEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ShowVaultEnable");

	UGMCheatCharacter_ShowVaultEnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.ShowResultWeaponRecordInfo
// (Final, Exec, Native, Public)

void UGMCheatCharacter::ShowResultWeaponRecordInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ShowResultWeaponRecordInfo");

	UGMCheatCharacter_ShowResultWeaponRecordInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.ShowAllRoles
// (Final, Exec, Native, Public)

void UGMCheatCharacter::ShowAllRoles()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ShowAllRoles");

	UGMCheatCharacter_ShowAllRoles_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.SetTimeSpeedFactor
// (Final, Exec, Native, Public)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::SetTimeSpeedFactor(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetTimeSpeedFactor");

	UGMCheatCharacter_SetTimeSpeedFactor_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.SetTimeSpeedCheck
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::SetTimeSpeedCheck(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetTimeSpeedCheck");

	UGMCheatCharacter_SetTimeSpeedCheck_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.SetSpeed
// (Final, Exec, Native, Public)
// Parameters:
// float                          Modifier                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::SetSpeed(float Modifier)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetSpeed");

	UGMCheatCharacter_SetSpeed_Params params;
	params.Modifier = Modifier;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.SetMaxHealth
// (Final, Exec, Native, Public)
// Parameters:
// float                          HP                             (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::SetMaxHealth(float HP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetMaxHealth");

	UGMCheatCharacter_SetMaxHealth_Params params;
	params.HP = HP;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.SetLowProbCircle
// (Final, Exec, Native, Public, Const)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          R                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Prob                           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::SetLowProbCircle(float X, float Y, float R, float Prob)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetLowProbCircle");

	UGMCheatCharacter_SetLowProbCircle_Params params;
	params.X = X;
	params.Y = Y;
	params.R = R;
	params.Prob = Prob;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.SetCustomJumpPoint
// (Final, Exec, Native, Public)
// Parameters:
// float                          JmpX                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          JmpY                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          JmpRadius                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::SetCustomJumpPoint(float JmpX, float JmpY, float JmpRadius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetCustomJumpPoint");

	UGMCheatCharacter_SetCustomJumpPoint_Params params;
	params.JmpX = JmpX;
	params.JmpY = JmpY;
	params.JmpRadius = JmpRadius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.SetCircleCenter
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 PointString                    (Parm, ZeroConstructor)

void UGMCheatCharacter::SetCircleCenter(const struct FString& PointString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetCircleCenter");

	UGMCheatCharacter_SetCircleCenter_Params params;
	params.PointString = PointString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.SetCirCenterFixed
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::SetCirCenterFixed(bool Enable, float X, float Y)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetCirCenterFixed");

	UGMCheatCharacter_SetCirCenterFixed_Params params;
	params.Enable = Enable;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.SetAirDropEnable
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::SetAirDropEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetAirDropEnable");

	UGMCheatCharacter_SetAirDropEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.SetAirAttackEnable
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::SetAirAttackEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetAirAttackEnable");

	UGMCheatCharacter_SetAirAttackEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.Set2x2ForceCircleLastR
// (Final, Exec, Native, Public, Const)
// Parameters:
// float                          R                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::Set2x2ForceCircleLastR(float R)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.Set2x2ForceCircleLastR");

	UGMCheatCharacter_Set2x2ForceCircleLastR_Params params;
	params.R = R;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.Set2x2ForceCircle
// (Final, Exec, Native, Public, Const)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          R                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::Set2x2ForceCircle(float X, float Y, float R)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.Set2x2ForceCircle");

	UGMCheatCharacter_Set2x2ForceCircle_Params params;
	params.X = X;
	params.Y = Y;
	params.R = R;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.Set2x2CircleCenter
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::Set2x2CircleCenter(int Index, float X, float Y)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.Set2x2CircleCenter");

	UGMCheatCharacter_Set2x2CircleCenter_Params params;
	params.Index = Index;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.Set2x2Circle3Center
// (Final, Exec, Native, Public, Const)
// Parameters:
// float                          X1                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y1                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          x2                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          y2                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          x3                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          y3                             (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::Set2x2Circle3Center(float X1, float Y1, float x2, float y2, float x3, float y3)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.Set2x2Circle3Center");

	UGMCheatCharacter_Set2x2Circle3Center_Params params;
	params.X1 = X1;
	params.Y1 = Y1;
	params.x2 = x2;
	params.y2 = y2;
	params.x3 = x3;
	params.y3 = y3;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.PrintMovementLog
// (Final, Exec, Native, Public)
// Parameters:
// int                            PrintLog                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::PrintMovementLog(int PrintLog)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.PrintMovementLog");

	UGMCheatCharacter_PrintMovementLog_Params params;
	params.PrintLog = PrintLog;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.PrintDownCollision
// (Final, Exec, Native, Public)

void UGMCheatCharacter::PrintDownCollision()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.PrintDownCollision");

	UGMCheatCharacter_PrintDownCollision_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.MoveToXY
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::MoveToXY(float X, float Y)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.MoveToXY");

	UGMCheatCharacter_MoveToXY_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.MoveToVehicle
// (Final, Exec, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::MoveToVehicle(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.MoveToVehicle");

	UGMCheatCharacter_MoveToVehicle_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.MoveToS
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 VectorString                   (Parm, ZeroConstructor)

void UGMCheatCharacter::MoveToS(const struct FString& VectorString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.MoveToS");

	UGMCheatCharacter_MoveToS_Params params;
	params.VectorString = VectorString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.MoveToNearestVehicle
// (Final, Exec, Native, Public)
// Parameters:
// float                          IgnoreDistance                 (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::MoveToNearestVehicle(float IgnoreDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.MoveToNearestVehicle");

	UGMCheatCharacter_MoveToNearestVehicle_Params params;
	params.IgnoreDistance = IgnoreDistance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.MoveToItem
// (Final, Exec, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::MoveToItem(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.MoveToItem");

	UGMCheatCharacter_MoveToItem_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.MoveTo
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::MoveTo(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.MoveTo");

	UGMCheatCharacter_MoveTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.ModifyStreamingDistance
// (Final, Exec, Native, Public)
// Parameters:
// int                            Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::ModifyStreamingDistance(int Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ModifyStreamingDistance");

	UGMCheatCharacter_ModifyStreamingDistance_Params params;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.KillSomeOne
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 InPlayerName                   (Parm, ZeroConstructor)

void UGMCheatCharacter::KillSomeOne(const struct FString& InPlayerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.KillSomeOne");

	UGMCheatCharacter_KillSomeOne_Params params;
	params.InPlayerName = InPlayerName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.KillAll
// (Final, Exec, Native, Public)

void UGMCheatCharacter::KillAll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.KillAll");

	UGMCheatCharacter_KillAll_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.Kill
// (Final, Exec, Native, Public)
// Parameters:
// int                            GivenNumber                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::Kill(int GivenNumber)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.Kill");

	UGMCheatCharacter_Kill_Params params;
	params.GivenNumber = GivenNumber;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.GMTestZengzuo
// (Final, Exec, Native, Public)

void UGMCheatCharacter::GMTestZengzuo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.GMTestZengzuo");

	UGMCheatCharacter_GMTestZengzuo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.GMSetCampId
// (Final, Exec, Native, Public)
// Parameters:
// int                            CamID                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatCharacter::GMSetCampId(int CamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.GMSetCampId");

	UGMCheatCharacter_GMSetCampId_Params params;
	params.CamID = CamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.GetGameScreenSize
// (Final, Exec, Native, Public)

void UGMCheatCharacter::GetGameScreenSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.GetGameScreenSize");

	UGMCheatCharacter_GetGameScreenSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.ExecFollowTeammate
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)

void UGMCheatCharacter::ExecFollowTeammate(const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ExecFollowTeammate");

	UGMCheatCharacter_ExecFollowTeammate_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatCharacter.DebugSprint
// (Final, Exec, Native, Public)

void UGMCheatCharacter::DebugSprint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.DebugSprint");

	UGMCheatCharacter_DebugSprint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpWeaponsToFile
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UGMCheatDump::DumpWeaponsToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpWeaponsToFile");

	UGMCheatDump_DumpWeaponsToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpVehicleToFile
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UGMCheatDump::DumpVehicleToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpVehicleToFile");

	UGMCheatDump_DumpVehicleToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpVehicleAnimInstanceToFile
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UGMCheatDump::DumpVehicleAnimInstanceToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpVehicleAnimInstanceToFile");

	UGMCheatDump_DumpVehicleAnimInstanceToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpVehicleAnimInstance
// (Final, Exec, Native, Public, Const)

void UGMCheatDump::DumpVehicleAnimInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpVehicleAnimInstance");

	UGMCheatDump_DumpVehicleAnimInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpVehicle
// (Final, Exec, Native, Public, Const)

void UGMCheatDump::DumpVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpVehicle");

	UGMCheatDump_DumpVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpSimulatedCharacterAnimInstanceToFile
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UGMCheatDump::DumpSimulatedCharacterAnimInstanceToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpSimulatedCharacterAnimInstanceToFile");

	UGMCheatDump_DumpSimulatedCharacterAnimInstanceToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpSimulatedCharacterAnimInstance
// (Final, Exec, Native, Public, Const)

void UGMCheatDump::DumpSimulatedCharacterAnimInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpSimulatedCharacterAnimInstance");

	UGMCheatDump_DumpSimulatedCharacterAnimInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpReticleTargetActorToFile
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           bPrintFunc                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatDump::DumpReticleTargetActorToFile(const struct FString& Filename, bool bPrintFunc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpReticleTargetActorToFile");

	UGMCheatDump_DumpReticleTargetActorToFile_Params params;
	params.Filename = Filename;
	params.bPrintFunc = bPrintFunc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpReticleTargetActor
// (Final, Exec, Native, Public, Const)
// Parameters:
// bool                           bPrintFunc                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatDump::DumpReticleTargetActor(bool bPrintFunc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpReticleTargetActor");

	UGMCheatDump_DumpReticleTargetActor_Params params;
	params.bPrintFunc = bPrintFunc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpPlayerSkillInfo
// (Final, Exec, Native, Public, Const)

void UGMCheatDump::DumpPlayerSkillInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpPlayerSkillInfo");

	UGMCheatDump_DumpPlayerSkillInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpPlayerInfoToFile
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UGMCheatDump::DumpPlayerInfoToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpPlayerInfoToFile");

	UGMCheatDump_DumpPlayerInfoToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpPlayerControllerToFile
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UGMCheatDump::DumpPlayerControllerToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpPlayerControllerToFile");

	UGMCheatDump_DumpPlayerControllerToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpPlayerController
// (Final, Exec, Native, Public, Const)

void UGMCheatDump::DumpPlayerController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpPlayerController");

	UGMCheatDump_DumpPlayerController_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpPlayerCameraManagerToFile
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UGMCheatDump::DumpPlayerCameraManagerToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpPlayerCameraManagerToFile");

	UGMCheatDump_DumpPlayerCameraManagerToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpObservingCharacterToFile
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UGMCheatDump::DumpObservingCharacterToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpObservingCharacterToFile");

	UGMCheatDump_DumpObservingCharacterToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpObservingCharacter
// (Final, Exec, Native, Public, Const)

void UGMCheatDump::DumpObservingCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpObservingCharacter");

	UGMCheatDump_DumpObservingCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpObjectProperties
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 ObjectName                     (Parm, ZeroConstructor)

void UGMCheatDump::DumpObjectProperties(const struct FString& ObjectName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpObjectProperties");

	UGMCheatDump_DumpObjectProperties_Params params;
	params.ObjectName = ObjectName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpCharacterToFile
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UGMCheatDump::DumpCharacterToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpCharacterToFile");

	UGMCheatDump_DumpCharacterToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpCharacterAnimInstanceToFile
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UGMCheatDump::DumpCharacterAnimInstanceToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpCharacterAnimInstanceToFile");

	UGMCheatDump_DumpCharacterAnimInstanceToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpCharacterAnimInstance
// (Final, Exec, Native, Public, Const)

void UGMCheatDump::DumpCharacterAnimInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpCharacterAnimInstance");

	UGMCheatDump_DumpCharacterAnimInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpCharacter
// (Final, Exec, Native, Public, Const)

void UGMCheatDump::DumpCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpCharacter");

	UGMCheatDump_DumpCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpAllVehiclesToFile
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UGMCheatDump::DumpAllVehiclesToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllVehiclesToFile");

	UGMCheatDump_DumpAllVehiclesToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpAllVehicles
// (Final, Exec, Native, Public, Const)

void UGMCheatDump::DumpAllVehicles()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllVehicles");

	UGMCheatDump_DumpAllVehicles_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpAllSkillActorsInfoToFile
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UGMCheatDump::DumpAllSkillActorsInfoToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllSkillActorsInfoToFile");

	UGMCheatDump_DumpAllSkillActorsInfoToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpAllSkillActorsInfo
// (Final, Exec, Native, Public, Const)

void UGMCheatDump::DumpAllSkillActorsInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllSkillActorsInfo");

	UGMCheatDump_DumpAllSkillActorsInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpAllPlayerControllerToFile
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UGMCheatDump::DumpAllPlayerControllerToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllPlayerControllerToFile");

	UGMCheatDump_DumpAllPlayerControllerToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpAllPlayerController
// (Final, Exec, Native, Public, Const)

void UGMCheatDump::DumpAllPlayerController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllPlayerController");

	UGMCheatDump_DumpAllPlayerController_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpAllCharactersToFile
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UGMCheatDump::DumpAllCharactersToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllCharactersToFile");

	UGMCheatDump_DumpAllCharactersToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatDump.DumpAllCharacters
// (Final, Exec, Native, Public, Const)

void UGMCheatDump::DumpAllCharacters()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllCharacters");

	UGMCheatDump_DumpAllCharacters_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatGameFlow.StartReadyCountDown
// (Final, Exec, Native, Public)

void UGMCheatGameFlow::StartReadyCountDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatGameFlow.StartReadyCountDown");

	UGMCheatGameFlow_StartReadyCountDown_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatGameFlow.SetStateLeftTime
// (Final, Exec, Native, Public)
// Parameters:
// int                            leftTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatGameFlow::SetStateLeftTime(int leftTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatGameFlow.SetStateLeftTime");

	UGMCheatGameFlow_SetStateLeftTime_Params params;
	params.leftTime = leftTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatGameFlow.GotoFlying
// (Final, Exec, Native, Public)

void UGMCheatGameFlow::GotoFlying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatGameFlow.GotoFlying");

	UGMCheatGameFlow_GotoFlying_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatGameFlow.GameModeGotoNextState
// (Final, Exec, Native, Public)

void UGMCheatGameFlow::GameModeGotoNextState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatGameFlow.GameModeGotoNextState");

	UGMCheatGameFlow_GameModeGotoNextState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatGameFlow.GameModeGotoFightingState
// (Final, Exec, Native, Public)

void UGMCheatGameFlow::GameModeGotoFightingState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatGameFlow.GameModeGotoFightingState");

	UGMCheatGameFlow_GameModeGotoFightingState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatGameFlow.DsLuaGM
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 CmdString                      (ConstParm, Parm, ZeroConstructor)

void UGMCheatGameFlow::DsLuaGM(const struct FString& CmdString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatGameFlow.DsLuaGM");

	UGMCheatGameFlow_DsLuaGM_Params params;
	params.CmdString = CmdString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatGameFlow.DsLuaDoString
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 LuaString                      (Parm, ZeroConstructor)

void UGMCheatGameFlow::DsLuaDoString(const struct FString& LuaString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatGameFlow.DsLuaDoString");

	UGMCheatGameFlow_DsLuaDoString_Params params;
	params.LuaString = LuaString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatHiggs.TriggerActorChannelErrorDelegate
// (Final, Exec, Native, Public)

void UGMCheatHiggs::TriggerActorChannelErrorDelegate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.TriggerActorChannelErrorDelegate");

	UGMCheatHiggs_TriggerActorChannelErrorDelegate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatHiggs.TestSpawnStaticmesh
// (Final, Exec, Native, Public)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatHiggs::TestSpawnStaticmesh(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.TestSpawnStaticmesh");

	UGMCheatHiggs_TestSpawnStaticmesh_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatHiggs.TestGMCheatHiggs
// (Final, Exec, Native, Private)
// Parameters:
// int                            Param1                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Param2                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatHiggs::TestGMCheatHiggs(int Param1, bool Param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.TestGMCheatHiggs");

	UGMCheatHiggs_TestGMCheatHiggs_Params params;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatHiggs.TestGlueHia
// (Final, Exec, Native, Public)
// Parameters:
// int                            GlueType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            GlueValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatHiggs::TestGlueHia(int GlueType, int GlueValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.TestGlueHia");

	UGMCheatHiggs_TestGlueHia_Params params;
	params.GlueType = GlueType;
	params.GlueValue = GlueValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatHiggs.StatCPU
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatHiggs::StatCPU(int Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.StatCPU");

	UGMCheatHiggs_StatCPU_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatHiggs.SetOpenSecurityAlert
// (Exec, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bOpen                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatHiggs::SetOpenSecurityAlert(bool bOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.SetOpenSecurityAlert");

	UGMCheatHiggs_SetOpenSecurityAlert_Params params;
	params.bOpen = bOpen;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatHUD.ResetHUDDebugFunction
// (Final, Exec, Native, Public)

void UGMCheatHUD::ResetHUDDebugFunction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHUD.ResetHUDDebugFunction");

	UGMCheatHUD_ResetHUDDebugFunction_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatHUD.RemoveHUDDebugFunction
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 FuncName                       (Parm, ZeroConstructor)

void UGMCheatHUD::RemoveHUDDebugFunction(const struct FString& FuncName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHUD.RemoveHUDDebugFunction");

	UGMCheatHUD_RemoveHUDDebugFunction_Params params;
	params.FuncName = FuncName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatHUD.EnableHUDDebug
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FuncName                       (Parm, ZeroConstructor)

void UGMCheatHUD::EnableHUDDebug(bool bEnable, const struct FString& FuncName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHUD.EnableHUDDebug");

	UGMCheatHUD_EnableHUDDebug_Params params;
	params.bEnable = bEnable;
	params.FuncName = FuncName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatHUD.AddHUDDebugFunction
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 FuncName                       (Parm, ZeroConstructor)
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatHUD::AddHUDDebugFunction(const struct FString& FuncName, bool bReset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHUD.AddHUDDebugFunction");

	UGMCheatHUD_AddHUDDebugFunction_Params params;
	params.FuncName = FuncName;
	params.bReset = bReset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.SpawnActorWithPath
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatLevel::SpawnActorWithPath(const struct FString& Path, float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.SpawnActorWithPath");

	UGMCheatLevel_SpawnActorWithPath_Params params;
	params.Path = Path;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.ShutDownVehicleGenerate
// (Final, Exec, Native, Public)
// Parameters:
// bool                           IsOpen                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatLevel::ShutDownVehicleGenerate(bool IsOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.ShutDownVehicleGenerate");

	UGMCheatLevel_ShutDownVehicleGenerate_Params params;
	params.IsOpen = IsOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.ShutDownPickUpGenerate
// (Final, Exec, Native, Public)
// Parameters:
// bool                           IsOpen                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatLevel::ShutDownPickUpGenerate(bool IsOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.ShutDownPickUpGenerate");

	UGMCheatLevel_ShutDownPickUpGenerate_Params params;
	params.IsOpen = IsOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.ShutDownItemGenerate
// (Final, Exec, Native, Public)
// Parameters:
// bool                           IsOpen                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatLevel::ShutDownItemGenerate(bool IsOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.ShutDownItemGenerate");

	UGMCheatLevel_ShutDownItemGenerate_Params params;
	params.IsOpen = IsOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.ShowNavOperator
// (Final, Exec, Native, Public)

void UGMCheatLevel::ShowNavOperator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.ShowNavOperator");

	UGMCheatLevel_ShowNavOperator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.SetServerLevelLoadingMode
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bNewLoadAll                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatLevel::SetServerLevelLoadingMode(bool bNewLoadAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.SetServerLevelLoadingMode");

	UGMCheatLevel_SetServerLevelLoadingMode_Params params;
	params.bNewLoadAll = bNewLoadAll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.SetPlaneEnabled
// (Final, Exec, Native, Public)
// Parameters:
// bool                           InEnable                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatLevel::SetPlaneEnabled(bool InEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.SetPlaneEnabled");

	UGMCheatLevel_SetPlaneEnabled_Params params;
	params.InEnable = InEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.SetCustomFlightRoute
// (Final, Exec, Native, Public)
// Parameters:
// float                          StartX                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartY                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndX                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndY                           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatLevel::SetCustomFlightRoute(float StartX, float StartY, float EndX, float EndY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.SetCustomFlightRoute");

	UGMCheatLevel_SetCustomFlightRoute_Params params;
	params.StartX = StartX;
	params.StartY = StartY;
	params.EndX = EndX;
	params.EndY = EndY;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.RemoveAllDoors
// (Final, Exec, Native, Public)

void UGMCheatLevel::RemoveAllDoors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.RemoveAllDoors");

	UGMCheatLevel_RemoveAllDoors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.PrintAllPickupWarpper
// (Final, Exec, Native, Public)

void UGMCheatLevel::PrintAllPickupWarpper()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.PrintAllPickupWarpper");

	UGMCheatLevel_PrintAllPickupWarpper_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.LocalProfileFootprint
// (Final, Exec, Native, Public)

void UGMCheatLevel::LocalProfileFootprint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.LocalProfileFootprint");

	UGMCheatLevel_LocalProfileFootprint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.LoadAllLand
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bLoadAll                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatLevel::LoadAllLand(bool bLoadAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.LoadAllLand");

	UGMCheatLevel_LoadAllLand_Params params;
	params.bLoadAll = bLoadAll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.GotoDoubleCircleEdge
// (Final, Exec, Native, Public)
// Parameters:
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatLevel::GotoDoubleCircleEdge(float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GotoDoubleCircleEdge");

	UGMCheatLevel_GotoDoubleCircleEdge_Params params;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.GMSetBoolPoisonCircle
// (Final, Exec, Native, Public)

void UGMCheatLevel::GMSetBoolPoisonCircle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMSetBoolPoisonCircle");

	UGMCheatLevel_GMSetBoolPoisonCircle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.GMSetBoolAirDrop
// (Final, Exec, Native, Public)

void UGMCheatLevel::GMSetBoolAirDrop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMSetBoolAirDrop");

	UGMCheatLevel_GMSetBoolAirDrop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.GMSetBoolAirAttack
// (Final, Exec, Native, Public)

void UGMCheatLevel::GMSetBoolAirAttack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMSetBoolAirAttack");

	UGMCheatLevel_GMSetBoolAirAttack_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.GMSetBoolAI
// (Final, Exec, Native, Public)

void UGMCheatLevel::GMSetBoolAI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMSetBoolAI");

	UGMCheatLevel_GMSetBoolAI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.GMEnableRandom
// (Final, Exec, Native, Public)

void UGMCheatLevel::GMEnableRandom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMEnableRandom");

	UGMCheatLevel_GMEnableRandom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.GMEnableAllComponent
// (Final, Exec, Native, Public)

void UGMCheatLevel::GMEnableAllComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMEnableAllComponent");

	UGMCheatLevel_GMEnableAllComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.GMDisableRandom
// (Final, Exec, Native, Public)

void UGMCheatLevel::GMDisableRandom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMDisableRandom");

	UGMCheatLevel_GMDisableRandom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.GMDisableAllComponent
// (Final, Exec, Native, Public)

void UGMCheatLevel::GMDisableAllComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMDisableAllComponent");

	UGMCheatLevel_GMDisableAllComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.GMBeginCircle
// (Final, Exec, Native, Public)
// Parameters:
// int                            CurIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          PosX                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          PosY                           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatLevel::GMBeginCircle(int CurIndex, float PosX, float PosY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMBeginCircle");

	UGMCheatLevel_GMBeginCircle_Params params;
	params.CurIndex = CurIndex;
	params.PosX = PosX;
	params.PosY = PosY;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.GetCurrentLevelOffset
// (Final, Exec, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGMCheatLevel::GetCurrentLevelOffset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GetCurrentLevelOffset");

	UGMCheatLevel_GetCurrentLevelOffset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Development.GMCheatLevel.EnableMyLandscapeDraw
// (Final, Exec, Native, Public)

void UGMCheatLevel::EnableMyLandscapeDraw()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.EnableMyLandscapeDraw");

	UGMCheatLevel_EnableMyLandscapeDraw_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.DisableMyLandscapeDraw
// (Final, Exec, Native, Public)

void UGMCheatLevel::DisableMyLandscapeDraw()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.DisableMyLandscapeDraw");

	UGMCheatLevel_DisableMyLandscapeDraw_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatLevel.DebugAirDropPickInfo
// (Final, Exec, Native, Public)
// Parameters:
// float                          DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          BoxDrawSize                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BoxDrawLineLength              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ListWrapperDrawSize            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ListWrapperDrawLineLength      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatLevel::DebugAirDropPickInfo(float DrawTime, float BoxDrawSize, float BoxDrawLineLength, float ListWrapperDrawSize, float ListWrapperDrawLineLength)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.DebugAirDropPickInfo");

	UGMCheatLevel_DebugAirDropPickInfo_Params params;
	params.DrawTime = DrawTime;
	params.BoxDrawSize = BoxDrawSize;
	params.BoxDrawLineLength = BoxDrawLineLength;
	params.ListWrapperDrawSize = ListWrapperDrawSize;
	params.ListWrapperDrawLineLength = ListWrapperDrawLineLength;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.WatchReport
// (Final, Exec, Native, Public)

void UGMCheatManager::WatchReport()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.WatchReport");

	UGMCheatManager_WatchReport_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.VehicleTowardTo
// (Final, Exec, Native, Public, Const)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::VehicleTowardTo(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.VehicleTowardTo");

	UGMCheatManager_VehicleTowardTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.VehicleSpotLog
// (Final, Exec, Native, Public)

void UGMCheatManager::VehicleSpotLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.VehicleSpotLog");

	UGMCheatManager_VehicleSpotLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.VehicleMoveTo
// (Final, Exec, Native, Public, Const)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::VehicleMoveTo(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.VehicleMoveTo");

	UGMCheatManager_VehicleMoveTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.VehicleMoveAndTowardTo
// (Final, Exec, Native, Public, Const)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          X1                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y1                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z1                             (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::VehicleMoveAndTowardTo(float X, float Y, float Z, float X1, float Y1, float Z1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.VehicleMoveAndTowardTo");

	UGMCheatManager_VehicleMoveAndTowardTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.X1 = X1;
	params.Y1 = Y1;
	params.Z1 = Z1;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.UpdateTrainingRank
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            TrainingType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Top1wScore                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::UpdateTrainingRank(int TrainingType, int Level, int Top1wScore, int Score)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.UpdateTrainingRank");

	UGMCheatManager_UpdateTrainingRank_Params params;
	params.TrainingType = TrainingType;
	params.Level = Level;
	params.Top1wScore = Top1wScore;
	params.Score = Score;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ToggleSpringMode
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::ToggleSpringMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ToggleSpringMode");

	UGMCheatManager_ToggleSpringMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ToggleSpringDebug
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::ToggleSpringDebug()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ToggleSpringDebug");

	UGMCheatManager_ToggleSpringDebug_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.TogglePawnInfo
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::TogglePawnInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TogglePawnInfo");

	UGMCheatManager_TogglePawnInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.TestPlayerBattleResult
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::TestPlayerBattleResult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestPlayerBattleResult");

	UGMCheatManager_TestPlayerBattleResult_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.TestNetworkLost
// (Final, Exec, Native, Public)

void UGMCheatManager::TestNetworkLost()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestNetworkLost");

	UGMCheatManager_TestNetworkLost_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.TestLineTrace
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::TestLineTrace(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestLineTrace");

	UGMCheatManager_TestLineTrace_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.TestKillInfoPanel
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            WeaponId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponAvatarID                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ClothID                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::TestKillInfoPanel(int WeaponId, int Relationship, int WeaponAvatarID, int ClothID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestKillInfoPanel");

	UGMCheatManager_TestKillInfoPanel_Params params;
	params.WeaponId = WeaponId;
	params.Relationship = Relationship;
	params.WeaponAvatarID = WeaponAvatarID;
	params.ClothID = ClothID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.TestGameplayDataRecord
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            UID                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            RecordType                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::TestGameplayDataRecord(int UID, int RecordType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestGameplayDataRecord");

	UGMCheatManager_TestGameplayDataRecord_Params params;
	params.UID = UID;
	params.RecordType = RecordType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.TestEnableRegionsLongDistanceSleep
// (Final, Exec, Native, Public, Const)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::TestEnableRegionsLongDistanceSleep(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestEnableRegionsLongDistanceSleep");

	UGMCheatManager_TestEnableRegionsLongDistanceSleep_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.TestDeactivate
// (Final, Exec, Native, Public)

void UGMCheatManager::TestDeactivate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestDeactivate");

	UGMCheatManager_TestDeactivate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.TestCrash
// (Final, Exec, Native, Public)

void UGMCheatManager::TestCrash()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestCrash");

	UGMCheatManager_TestCrash_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.TeleportToVehicleAI
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            InIndex                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::TeleportToVehicleAI(int InIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TeleportToVehicleAI");

	UGMCheatManager_TeleportToVehicleAI_Params params;
	params.InIndex = InIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.TeleportToPVEMonster
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            ChapterID                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            LevelID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            WaveID                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::TeleportToPVEMonster(int ChapterID, int LevelID, int WaveID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TeleportToPVEMonster");

	UGMCheatManager_TeleportToPVEMonster_Params params;
	params.ChapterID = ChapterID;
	params.LevelID = LevelID;
	params.WaveID = WaveID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.TeleportTo
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::TeleportTo(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TeleportTo");

	UGMCheatManager_TeleportTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SwitchSocialIsland
// (Final, Exec, Native, Public)
// Parameters:
// int                            LandId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SwitchSocialIsland(int LandId, float Delay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SwitchSocialIsland");

	UGMCheatManager_SwitchSocialIsland_Params params;
	params.LandId = LandId;
	params.Delay = Delay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SwitchShowUI
// (Final, Exec, Native, Public)

void UGMCheatManager::SwitchShowUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SwitchShowUI");

	UGMCheatManager_SwitchShowUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SuperGMKillDS
// (Final, Exec, Native, Public)

void UGMCheatManager::SuperGMKillDS()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SuperGMKillDS");

	UGMCheatManager_SuperGMKillDS_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.StopAnimalDeliver
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bStop                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::StopAnimalDeliver(bool bStop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.StopAnimalDeliver");

	UGMCheatManager_StopAnimalDeliver_Params params;
	params.bStop = bStop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.StopAnimal
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bStop                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::StopAnimal(bool bStop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.StopAnimal");

	UGMCheatManager_StopAnimal_Params params;
	params.bStop = bStop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.StopAllMonsterDSAnim
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bStop                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::StopAllMonsterDSAnim(bool bStop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.StopAllMonsterDSAnim");

	UGMCheatManager_StopAllMonsterDSAnim_Params params;
	params.bStop = bStop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.StatVehicle
// (Final, Exec, Native, Public)

void UGMCheatManager::StatVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.StatVehicle");

	UGMCheatManager_StatVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.StarTPerforPlatTag
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 TagName                        (Parm, ZeroConstructor)

void UGMCheatManager::StarTPerforPlatTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.StarTPerforPlatTag");

	UGMCheatManager_StarTPerforPlatTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SpawnVehicleWithPathAtPoint
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// bool                           AroundMe                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SpawnVehicleWithPathAtPoint(const struct FString& Path, bool AroundMe, float X, float Y, float Z, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnVehicleWithPathAtPoint");

	UGMCheatManager_SpawnVehicleWithPathAtPoint_Params params;
	params.Path = Path;
	params.AroundMe = AroundMe;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SpawnTrainingAIAroundMe
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Range                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SpawnTrainingAIAroundMe(int Num, int Range)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnTrainingAIAroundMe");

	UGMCheatManager_SpawnTrainingAIAroundMe_Params params;
	params.Num = Num;
	params.Range = Range;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SpawnMonsterAround
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            MonsterID                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopAI                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SpawnMonsterAround(int MonsterID, float Radius, int Num, bool bStopAI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnMonsterAround");

	UGMCheatManager_SpawnMonsterAround_Params params;
	params.MonsterID = MonsterID;
	params.Radius = Radius;
	params.Num = Num;
	params.bStopAI = bStopAI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SpawnItemBySpotDefaultTag
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 DefaultTag                     (Parm, ZeroConstructor)

void UGMCheatManager::SpawnItemBySpotDefaultTag(const struct FString& DefaultTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnItemBySpotDefaultTag");

	UGMCheatManager_SpawnItemBySpotDefaultTag_Params params;
	params.DefaultTag = DefaultTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SpawnGameFeatureActor
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)

void UGMCheatManager::SpawnGameFeatureActor(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnGameFeatureActor");

	UGMCheatManager_SpawnGameFeatureActor_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SpawnFakePlayer
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithPet                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopAI                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SpawnFakePlayer(int Num, bool bWithPet, bool bStopAI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnFakePlayer");

	UGMCheatManager_SpawnFakePlayer_Params params;
	params.Num = Num;
	params.bWithPet = bWithPet;
	params.bStopAI = bStopAI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SpawnDecal
// (Final, Exec, Native, Public)

void UGMCheatManager::SpawnDecal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnDecal");

	UGMCheatManager_SpawnDecal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SpawnBotForTest
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SpawnBotForTest(int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnBotForTest");

	UGMCheatManager_SpawnBotForTest_Params params;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SpawnAIAroundMe
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasWeapon                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasAvator                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasBackpack                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SpawnAIAroundMe(int Num, float Range, bool HasWeapon, bool HasAvator, bool HasBackpack)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnAIAroundMe");

	UGMCheatManager_SpawnAIAroundMe_Params params;
	params.Num = Num;
	params.Range = Range;
	params.HasWeapon = HasWeapon;
	params.HasAvator = HasAvator;
	params.HasBackpack = HasBackpack;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ShowScrollMsg
// (Final, Exec, Native, Public, Const)
// Parameters:
// uint32_t                       MsgID                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Param1                         (Parm, ZeroConstructor)
// struct FString                 Param2                         (Parm, ZeroConstructor)

void UGMCheatManager::ShowScrollMsg(uint32_t MsgID, const struct FString& Param1, const struct FString& Param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ShowScrollMsg");

	UGMCheatManager_ShowScrollMsg_Params params;
	params.MsgID = MsgID;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ShowPet
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::ShowPet(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ShowPet");

	UGMCheatManager_ShowPet_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ShowOBMultiKillTips
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 PlayerName                     (Parm, ZeroConstructor)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerKillNum                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamKillNum                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::ShowOBMultiKillTips(const struct FString& PlayerName, int TeamID, int PlayerKillNum, int TeamKillNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ShowOBMultiKillTips");

	UGMCheatManager_ShowOBMultiKillTips_Params params;
	params.PlayerName = PlayerName;
	params.TeamID = TeamID;
	params.PlayerKillNum = PlayerKillNum;
	params.TeamKillNum = TeamKillNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ShowHideGuide
// (Final, Exec, Native, Public)
// Parameters:
// int                            GuideID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::ShowHideGuide(int GuideID, bool bShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ShowHideGuide");

	UGMCheatManager_ShowHideGuide_Params params;
	params.GuideID = GuideID;
	params.bShow = bShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ShowAllPlayersMarkIncludeAI
// (Final, Exec, Native, Public, Const)
// Parameters:
// float                          VisDistance                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::ShowAllPlayersMarkIncludeAI(float VisDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ShowAllPlayersMarkIncludeAI");

	UGMCheatManager_ShowAllPlayersMarkIncludeAI_Params params;
	params.VisDistance = VisDistance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ShowAKComponentPosition
// (Final, Exec, Native, Public)
// Parameters:
// bool                           _IsShow                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::ShowAKComponentPosition(bool _IsShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ShowAKComponentPosition");

	UGMCheatManager_ShowAKComponentPosition_Params params;
	params._IsShow = _IsShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetWeatherPlaySpeed
// (Final, Exec, Native, Public)
// Parameters:
// float                          FSpeed                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetWeatherPlaySpeed(float FSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetWeatherPlaySpeed");

	UGMCheatManager_SetWeatherPlaySpeed_Params params;
	params.FSpeed = FSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetViewFPP
// (Final, Exec, Native, Public, Const)
// Parameters:
// bool                           IsFPP                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetViewFPP(bool IsFPP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetViewFPP");

	UGMCheatManager_SetViewFPP_Params params;
	params.IsFPP = IsFPP;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetTouchMoveLog
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetTouchMoveLog(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetTouchMoveLog");

	UGMCheatManager_SetTouchMoveLog_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetTouchMoveDelay
// (Final, Exec, Native, Public)
// Parameters:
// int                            DelayFrame                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetTouchMoveDelay(int DelayFrame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetTouchMoveDelay");

	UGMCheatManager_SetTouchMoveDelay_Params params;
	params.DelayFrame = DelayFrame;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetTemperature
// (Final, Exec, Native, Public, Const)
// Parameters:
// float                          InTemperature                  (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetTemperature(float InTemperature)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetTemperature");

	UGMCheatManager_SetTemperature_Params params;
	params.InTemperature = InTemperature;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetSpringArm
// (Final, Exec, Native, Public)
// Parameters:
// unsigned char                  armFlag                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetSpringArm(unsigned char armFlag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetSpringArm");

	UGMCheatManager_SetSpringArm_Params params;
	params.armFlag = armFlag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetSkillDup
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetSkillDup(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetSkillDup");

	UGMCheatManager_SetSkillDup_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetRateScore
// (Final, Exec, Native, Public)
// Parameters:
// float                          RankScore                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetRateScore(float RankScore)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetRateScore");

	UGMCheatManager_SetRateScore_Params params;
	params.RankScore = RankScore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetNetSpeed
// (Final, Exec, Native, Public)
// Parameters:
// int                            NewSpeed                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetNetSpeed(int NewSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetNetSpeed");

	UGMCheatManager_SetNetSpeed_Params params;
	params.NewSpeed = NewSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetNeckUp
// (Final, Exec, Native, Public)
// Parameters:
// float                          UpAngle                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetNeckUp(float UpAngle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetNeckUp");

	UGMCheatManager_SetNeckUp_Params params;
	params.UpAngle = UpAngle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetNeckSpeed
// (Final, Exec, Native, Public)
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetNeckSpeed(float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetNeckSpeed");

	UGMCheatManager_SetNeckSpeed_Params params;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetNeckRight
// (Final, Exec, Native, Public)
// Parameters:
// float                          RightAngle                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetNeckRight(float RightAngle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetNeckRight");

	UGMCheatManager_SetNeckRight_Params params;
	params.RightAngle = RightAngle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetNeckMax
// (Final, Exec, Native, Public)
// Parameters:
// float                          MaxAngle                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetNeckMax(float MaxAngle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetNeckMax");

	UGMCheatManager_SetNeckMax_Params params;
	params.MaxAngle = MaxAngle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetNeckLeft
// (Final, Exec, Native, Public)
// Parameters:
// float                          LeftAngle                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetNeckLeft(float LeftAngle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetNeckLeft");

	UGMCheatManager_SetNeckLeft_Params params;
	params.LeftAngle = LeftAngle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetMonsterNumMultiple
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            ChapterID                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            LevelID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            DiffcultPerc                   (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetMonsterNumMultiple(int ChapterID, int LevelID, int DiffcultPerc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetMonsterNumMultiple");

	UGMCheatManager_SetMonsterNumMultiple_Params params;
	params.ChapterID = ChapterID;
	params.LevelID = LevelID;
	params.DiffcultPerc = DiffcultPerc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetMonsterNB
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           MonsterNB                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetMonsterNB(bool MonsterNB)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetMonsterNB");

	UGMCheatManager_SetMonsterNB_Params params;
	params.MonsterNB = MonsterNB;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetMonsterHatred
// (Final, Exec, Native, Public)
// Parameters:
// float                          Hatred                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetMonsterHatred(float Hatred)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetMonsterHatred");

	UGMCheatManager_SetMonsterHatred_Params params;
	params.Hatred = Hatred;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetMaxFpsFromDevice
// (Final, Exec, Native, Public)

void UGMCheatManager::SetMaxFpsFromDevice()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetMaxFpsFromDevice");

	UGMCheatManager_SetMaxFpsFromDevice_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetIsRender
// (Final, Exec, Native, Public)
// Parameters:
// bool                           IsRender                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetIsRender(bool IsRender)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetIsRender");

	UGMCheatManager_SetIsRender_Params params;
	params.IsRender = IsRender;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetInactiveClearEnable
// (Final, Exec, Native, Public, Const)
// Parameters:
// bool                           bNewActive                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetInactiveClearEnable(bool bNewActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetInactiveClearEnable");

	UGMCheatManager_SetInactiveClearEnable_Params params;
	params.bNewActive = bNewActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetHignPerformance
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           SetOpen                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetHignPerformance(bool SetOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetHignPerformance");

	UGMCheatManager_SetHignPerformance_Params params;
	params.SetOpen = SetOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetGVMemberID
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            memberID                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetGVMemberID(int memberID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetGVMemberID");

	UGMCheatManager_SetGVMemberID_Params params;
	params.memberID = memberID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetFestivalAirDrop
// (Final, Exec, Native, Public, Const)
// Parameters:
// bool                           bFestival                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BoxMesh                        (Parm, ZeroConstructor)

void UGMCheatManager::SetFestivalAirDrop(bool bFestival, const struct FString& BoxMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetFestivalAirDrop");

	UGMCheatManager_SetFestivalAirDrop_Params params;
	params.bFestival = bFestival;
	params.BoxMesh = BoxMesh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetFestivaGrenade
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bFestival                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetFestivaGrenade(bool bFestival)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetFestivaGrenade");

	UGMCheatManager_SetFestivaGrenade_Params params;
	params.bFestival = bFestival;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetDynamicWeather
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            WeatherType                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetDynamicWeather(int WeatherType, int EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetDynamicWeather");

	UGMCheatManager_SetDynamicWeather_Params params;
	params.WeatherType = WeatherType;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetDsSwitch
// (Final, Exec, Native, Public)
// Parameters:
// int                            InKey                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InValue                        (Parm, ZeroConstructor)

void UGMCheatManager::SetDsSwitch(int InKey, const struct FString& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetDsSwitch");

	UGMCheatManager_SetDsSwitch_Params params;
	params.InKey = InKey;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetDeliver
// (Final, Exec, Native, Public)

void UGMCheatManager::SetDeliver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetDeliver");

	UGMCheatManager_SetDeliver_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetClearIslandEnable
// (Final, Exec, Native, Public, Const)
// Parameters:
// bool                           bNewActive                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetClearIslandEnable(bool bNewActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetClearIslandEnable");

	UGMCheatManager_SetClearIslandEnable_Params params;
	params.bNewActive = bNewActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetCameraLagEnable
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetCameraLagEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetCameraLagEnable");

	UGMCheatManager_SetCameraLagEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetCacheInputNum
// (Final, Exec, Native, Public)
// Parameters:
// int                            CacheNum                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetCacheInputNum(int CacheNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetCacheInputNum");

	UGMCheatManager_SetCacheInputNum_Params params;
	params.CacheNum = CacheNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetAnimEnable
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetAnimEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetAnimEnable");

	UGMCheatManager_SetAnimEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetAnimDebugInfo
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           debugAnimInfo                  (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetAnimDebugInfo(bool debugAnimInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetAnimDebugInfo");

	UGMCheatManager_SetAnimDebugInfo_Params params;
	params.debugAnimInfo = debugAnimInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetAnimDebugGroup
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           debugAnimGroup                 (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetAnimDebugGroup(bool debugAnimGroup)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetAnimDebugGroup");

	UGMCheatManager_SetAnimDebugGroup_Params params;
	params.debugAnimGroup = debugAnimGroup;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.SetAllMonsterHp
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            HP                             (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::SetAllMonsterHp(int HP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetAllMonsterHp");

	UGMCheatManager_SetAllMonsterHp_Params params;
	params.HP = HP;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ServerCMD
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Cmd                            (Parm, ZeroConstructor)

void UGMCheatManager::ServerCMD(const struct FString& Cmd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ServerCMD");

	UGMCheatManager_ServerCMD_Params params;
	params.Cmd = Cmd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ResumeAllLevelSequenceActors
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::ResumeAllLevelSequenceActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ResumeAllLevelSequenceActors");

	UGMCheatManager_ResumeAllLevelSequenceActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.RenderTargetCompressTest
// (Final, Exec, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture*                pTexture                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Posoffset                      (Parm, IsPlainOldData)

void UGMCheatManager::RenderTargetCompressTest(class UTexture* pTexture, const struct FVector& Posoffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.RenderTargetCompressTest");

	UGMCheatManager_RenderTargetCompressTest_Params params;
	params.pTexture = pTexture;
	params.Posoffset = Posoffset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.RefreshReconnectUI
// (Final, Exec, Native, Public)

void UGMCheatManager::RefreshReconnectUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.RefreshReconnectUI");

	UGMCheatManager_RefreshReconnectUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PVESpawnMonsterByPos
// (Final, Exec, Native, Public)
// Parameters:
// int                            MonsterID                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          PosX                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          PosY                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          PosZ                           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::PVESpawnMonsterByPos(int MonsterID, int Num, float Radius, float PosX, float PosY, float PosZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVESpawnMonsterByPos");

	UGMCheatManager_PVESpawnMonsterByPos_Params params;
	params.MonsterID = MonsterID;
	params.Num = Num;
	params.Radius = Radius;
	params.PosX = PosX;
	params.PosY = PosY;
	params.PosZ = PosZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PVESpawnMonsterByDistance
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            MonsterID                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          FrontDist                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::PVESpawnMonsterByDistance(int MonsterID, int Num, float Radius, float FrontDist)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVESpawnMonsterByDistance");

	UGMCheatManager_PVESpawnMonsterByDistance_Params params;
	params.MonsterID = MonsterID;
	params.Num = Num;
	params.Radius = Radius;
	params.FrontDist = FrontDist;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PVESpawnMonster
// (Final, Exec, Native, Public)
// Parameters:
// int                            MonsterID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StopAI                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::PVESpawnMonster(int MonsterID, bool StopAI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVESpawnMonster");

	UGMCheatManager_PVESpawnMonster_Params params;
	params.MonsterID = MonsterID;
	params.StopAI = StopAI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PVESetTestMonster
// (Final, Exec, Native, Public)
// Parameters:
// class AActor*                  InMonster                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::PVESetTestMonster(class AActor* InMonster)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVESetTestMonster");

	UGMCheatManager_PVESetTestMonster_Params params;
	params.InMonster = InMonster;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PVEResetMonsterTable
// (Final, Exec, Native, Public)

void UGMCheatManager::PVEResetMonsterTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEResetMonsterTable");

	UGMCheatManager_PVEResetMonsterTable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PVEPrintMonsterCount
// (Final, Exec, Native, Public)

void UGMCheatManager::PVEPrintMonsterCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEPrintMonsterCount");

	UGMCheatManager_PVEPrintMonsterCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PVEPrintAllAnim
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPrintAll                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::PVEPrintAllAnim(bool bPrintAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEPrintAllAnim");

	UGMCheatManager_PVEPrintAllAnim_Params params;
	params.bPrintAll = bPrintAll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PVEPlayerTriggerSkill
// (Final, Exec, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::PVEPlayerTriggerSkill(int SkillID, int EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEPlayerTriggerSkill");

	UGMCheatManager_PVEPlayerTriggerSkill_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PVEPlayerStopSkill
// (Final, Exec, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::PVEPlayerStopSkill(int SkillID, int StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEPlayerStopSkill");

	UGMCheatManager_PVEPlayerStopSkill_Params params;
	params.SkillID = SkillID;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PVEMonsterTriggerSkill
// (Final, Exec, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::PVEMonsterTriggerSkill(int SkillID, int EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEMonsterTriggerSkill");

	UGMCheatManager_PVEMonsterTriggerSkill_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PVEMonsterStopSkill
// (Final, Exec, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::PVEMonsterStopSkill(int SkillID, int StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEMonsterStopSkill");

	UGMCheatManager_PVEMonsterStopSkill_Params params;
	params.SkillID = SkillID;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PVEMonsterRemoveBuffByID
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauserSkillID                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CauseByPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::PVEMonsterRemoveBuffByID(int BuffID, int LayerCount, int CauserSkillID, bool CauseByPlayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEMonsterRemoveBuffByID");

	UGMCheatManager_PVEMonsterRemoveBuffByID_Params params;
	params.BuffID = BuffID;
	params.LayerCount = LayerCount;
	params.CauserSkillID = CauserSkillID;
	params.CauseByPlayer = CauseByPlayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PVEMonsterAddBuffByID
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauserSkillID                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CauseByPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::PVEMonsterAddBuffByID(int BuffID, int LayerCount, int CauserSkillID, bool CauseByPlayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEMonsterAddBuffByID");

	UGMCheatManager_PVEMonsterAddBuffByID_Params params;
	params.BuffID = BuffID;
	params.LayerCount = LayerCount;
	params.CauserSkillID = CauserSkillID;
	params.CauseByPlayer = CauseByPlayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PVECloseMonsterLimit
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bCloseMonsterLimit             (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::PVECloseMonsterLimit(bool bCloseMonsterLimit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVECloseMonsterLimit");

	UGMCheatManager_PVECloseMonsterLimit_Params params;
	params.bCloseMonsterLimit = bCloseMonsterLimit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PrintScreenDebug
// (Final, Exec, Native, Public)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToDisplay                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DebugMessage                   (Parm, ZeroConstructor)

void UGMCheatManager::PrintScreenDebug(int Key, float TimeToDisplay, const struct FString& DebugMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PrintScreenDebug");

	UGMCheatManager_PrintScreenDebug_Params params;
	params.Key = Key;
	params.TimeToDisplay = TimeToDisplay;
	params.DebugMessage = DebugMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PrintRegionObjectList
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::PrintRegionObjectList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PrintRegionObjectList");

	UGMCheatManager_PrintRegionObjectList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PrintPool
// (Final, Exec, Native, Public)

void UGMCheatManager::PrintPool()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PrintPool");

	UGMCheatManager_PrintPool_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PrintHP
// (Final, Exec, Native, Public)

void UGMCheatManager::PrintHP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PrintHP");

	UGMCheatManager_PrintHP_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PrintAllAnim
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::PrintAllAnim()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PrintAllAnim");

	UGMCheatManager_PrintAllAnim_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PrintAllActorLocationByClassName
// (Final, Exec, Native, Public, Const)
// Parameters:
// struct FString                 InClassName                    (Parm, ZeroConstructor)

void UGMCheatManager::PrintAllActorLocationByClassName(const struct FString& InClassName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PrintAllActorLocationByClassName");

	UGMCheatManager_PrintAllActorLocationByClassName_Params params;
	params.InClassName = InClassName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PlayBornIslandSequence
// (Final, Exec, Native, Public, Const)
// Parameters:
// bool                           bPlay                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::PlayBornIslandSequence(bool bPlay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PlayBornIslandSequence");

	UGMCheatManager_PlayBornIslandSequence_Params params;
	params.bPlay = bPlay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PauseAnim
// (Final, Exec, Native, Public, Const)
// Parameters:
// bool                           bPause                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::PauseAnim(bool bPause)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PauseAnim");

	UGMCheatManager_PauseAnim_Params params;
	params.bPause = bPause;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PauseAllLevelSequenceActors
// (Final, Exec, Native, Public)

void UGMCheatManager::PauseAllLevelSequenceActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PauseAllLevelSequenceActors");

	UGMCheatManager_PauseAllLevelSequenceActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.PacketSimulationLag
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            InSimulationLag                (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::PacketSimulationLag(int InSimulationLag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PacketSimulationLag");

	UGMCheatManager_PacketSimulationLag_Params params;
	params.InSimulationLag = InSimulationLag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.OpenHitTest
// (Final, Exec, Native, Public)

void UGMCheatManager::OpenHitTest()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.OpenHitTest");

	UGMCheatManager_OpenHitTest_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.OpenFixationFreeFallVelocity
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::OpenFixationFreeFallVelocity(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.OpenFixationFreeFallVelocity");

	UGMCheatManager_OpenFixationFreeFallVelocity_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.NotifyGameModeParamsChanged
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            NewDuration                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::NotifyGameModeParamsChanged(int NewDuration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.NotifyGameModeParamsChanged");

	UGMCheatManager_NotifyGameModeParamsChanged_Params params;
	params.NewDuration = NewDuration;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.NativeSimulateAction
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            SimActionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::NativeSimulateAction(int SimActionType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.NativeSimulateAction");

	UGMCheatManager_NativeSimulateAction_Params params;
	params.SimActionType = SimActionType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.MoveSnake
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          moveInternal                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ForwardRate                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          RightRate                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::MoveSnake(bool bEnable, float moveInternal, float ForwardRate, float RightRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.MoveSnake");

	UGMCheatManager_MoveSnake_Params params;
	params.bEnable = bEnable;
	params.moveInternal = moveInternal;
	params.ForwardRate = ForwardRate;
	params.RightRate = RightRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ModifyVehicleSyncServerData
// (Final, Exec, Native, Public, Const)
// Parameters:
// float                          MinCorrectionInterval          (Parm, ZeroConstructor, IsPlainOldData)
// float                          AllowMaxDiatanceSqAtServer     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::ModifyVehicleSyncServerData(float MinCorrectionInterval, float AllowMaxDiatanceSqAtServer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ModifyVehicleSyncServerData");

	UGMCheatManager_ModifyVehicleSyncServerData_Params params;
	params.MinCorrectionInterval = MinCorrectionInterval;
	params.AllowMaxDiatanceSqAtServer = AllowMaxDiatanceSqAtServer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ModifyVehicleSyncClientData
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::ModifyVehicleSyncClientData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ModifyVehicleSyncClientData");

	UGMCheatManager_ModifyVehicleSyncClientData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ModifyVehicleBuoyancy
// (Final, Exec, Native, Public)
// Parameters:
// float                          MeshDensity                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::ModifyVehicleBuoyancy(float MeshDensity, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ModifyVehicleBuoyancy");

	UGMCheatManager_ModifyVehicleBuoyancy_Params params;
	params.MeshDensity = MeshDensity;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.MarkAPMLevelFinish
// (Final, Exec, Native, Public)

void UGMCheatManager::MarkAPMLevelFinish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.MarkAPMLevelFinish");

	UGMCheatManager_MarkAPMLevelFinish_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.LogNetWorkParams
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::LogNetWorkParams()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.LogNetWorkParams");

	UGMCheatManager_LogNetWorkParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.LogicAreaTest
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            AreaType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 str                            (Parm, ZeroConstructor)

void UGMCheatManager::LogicAreaTest(int AreaType, const struct FString& str)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.LogicAreaTest");

	UGMCheatManager_LogicAreaTest_Params params;
	params.AreaType = AreaType;
	params.str = str;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.LogAllBuffInfo
// (Final, Exec, Native, Public)

void UGMCheatManager::LogAllBuffInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.LogAllBuffInfo");

	UGMCheatManager_LogAllBuffInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.LogAllActors
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::LogAllActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.LogAllActors");

	UGMCheatManager_LogAllActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.LocalConnectToLobbySrv
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)

void UGMCheatManager::LocalConnectToLobbySrv(const struct FString& URL)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.LocalConnectToLobbySrv");

	UGMCheatManager_LocalConnectToLobbySrv_Params params;
	params.URL = URL;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.KillAllPVEBot
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::KillAllPVEBot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.KillAllPVEBot");

	UGMCheatManager_KillAllPVEBot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.KillAllPlayers
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::KillAllPlayers()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.KillAllPlayers");

	UGMCheatManager_KillAllPlayers_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ItemSpotLog
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::ItemSpotLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ItemSpotLog");

	UGMCheatManager_ItemSpotLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.InGameAndroidBack
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::InGameAndroidBack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.InGameAndroidBack");

	UGMCheatManager_InGameAndroidBack_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GotoSpectatingDirectly
// (Final, Exec, Native, Public)

void UGMCheatManager::GotoSpectatingDirectly()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GotoSpectatingDirectly");

	UGMCheatManager_GotoSpectatingDirectly_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GotoSpectating
// (Final, Exec, Native, Public)

void UGMCheatManager::GotoSpectating()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GotoSpectating");

	UGMCheatManager_GotoSpectating_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GotoSpecificWeather
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            WeatherIdx                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GotoSpecificWeather(int WeatherIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GotoSpecificWeather");

	UGMCheatManager_GotoSpecificWeather_Params params;
	params.WeatherIdx = WeatherIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMWayPointEvent
// (Final, Exec, Native, Public)
// Parameters:
// int                            EventID                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMWayPointEvent(int EventID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMWayPointEvent");

	UGMCheatManager_GMWayPointEvent_Params params;
	params.EventID = EventID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMUseGunCollision
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bIsUse                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMUseGunCollision(bool bIsUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMUseGunCollision");

	UGMCheatManager_GMUseGunCollision_Params params;
	params.bIsUse = bIsUse;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSuicideCurVehicle
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::GMSuicideCurVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSuicideCurVehicle");

	UGMCheatManager_GMSuicideCurVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSuicide
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::GMSuicide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSuicide");

	UGMCheatManager_GMSuicide_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMStopAI
// (Final, Exec, Native, Public, Const)
// Parameters:
// bool                           bStop                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMStopAI(bool bStop, uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMStopAI");

	UGMCheatManager_GMStopAI_Params params;
	params.bStop = bStop;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSpeedUp
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::GMSpeedUp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpeedUp");

	UGMCheatManager_GMSpeedUp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSpawnSociallandSubVehicle01
// (Final, Exec, Native, Public)

void UGMCheatManager::GMSpawnSociallandSubVehicle01()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnSociallandSubVehicle01");

	UGMCheatManager_GMSpawnSociallandSubVehicle01_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundPointWithAvatarList
// (Final, Exec, Native, Public, HasOutParms, Const)
// Parameters:
// uint32_t                       DataOffset                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       AINum                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          fRadius                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActiveAI                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAIInvincible                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithPet                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithEqui                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AvatarList                     (Parm, OutParm, ZeroConstructor)
// bool                           bWithWeapon                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSpawnSocialLandPlayerAIAroundPointWithAvatarList(uint32_t DataOffset, uint32_t AINum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui, bool bWithWeapon, struct FString* AvatarList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundPointWithAvatarList");

	UGMCheatManager_GMSpawnSocialLandPlayerAIAroundPointWithAvatarList_Params params;
	params.DataOffset = DataOffset;
	params.AINum = AINum;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;
	params.bWithEqui = bWithEqui;
	params.bWithWeapon = bWithWeapon;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AvatarList != nullptr)
		*AvatarList = params.AvatarList;
}


// Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundPoint
// (Final, Exec, Native, Public, Const)
// Parameters:
// uint32_t                       DataOffset                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       AINum                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          fRadius                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActiveAI                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAIInvincible                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithPet                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithEqui                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSpawnSocialLandPlayerAIAroundPoint(uint32_t DataOffset, uint32_t AINum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundPoint");

	UGMCheatManager_GMSpawnSocialLandPlayerAIAroundPoint_Params params;
	params.DataOffset = DataOffset;
	params.AINum = AINum;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;
	params.bWithEqui = bWithEqui;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundMeWithAvatar
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// uint32_t                       AINum                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          fRadius                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActiveAI                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAIInvincible                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithPet                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithEqui                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AvatarList                     (Parm, OutParm, ZeroConstructor)
// bool                           bWithWeapon                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSpawnSocialLandPlayerAIAroundMeWithAvatar(uint32_t AINum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui, bool bWithWeapon, struct FString* AvatarList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundMeWithAvatar");

	UGMCheatManager_GMSpawnSocialLandPlayerAIAroundMeWithAvatar_Params params;
	params.AINum = AINum;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;
	params.bWithEqui = bWithEqui;
	params.bWithWeapon = bWithWeapon;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AvatarList != nullptr)
		*AvatarList = params.AvatarList;
}


// Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundMe
// (Final, Exec, Native, Public)
// Parameters:
// uint32_t                       AINum                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          fRadius                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActiveAI                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAIInvincible                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithPet                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithEqui                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSpawnSocialLandPlayerAIAroundMe(uint32_t AINum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundMe");

	UGMCheatManager_GMSpawnSocialLandPlayerAIAroundMe_Params params;
	params.AINum = AINum;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;
	params.bWithEqui = bWithEqui;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSpawnSmartBearerTestPlane
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::GMSpawnSmartBearerTestPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnSmartBearerTestPlane");

	UGMCheatManager_GMSpawnSmartBearerTestPlane_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSpawnSingleSocialLandPlayerAI
// (Final, Exec, Native, Public, Const)
// Parameters:
// uint32_t                       DataOffset                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActiveAI                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAIInvincible                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithPet                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithEqui                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSpawnSingleSocialLandPlayerAI(uint32_t DataOffset, float X, float Y, float Z, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnSingleSocialLandPlayerAI");

	UGMCheatManager_GMSpawnSingleSocialLandPlayerAI_Params params;
	params.DataOffset = DataOffset;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;
	params.bWithEqui = bWithEqui;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSpawnPlayerAIAroundPointDownloadable
// (Final, Exec, Native, Public, Const)
// Parameters:
// uint32_t                       iNum                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          fRadius                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActiveAI                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAIInvincible                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithPet                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSpawnPlayerAIAroundPointDownloadable(uint32_t iNum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnPlayerAIAroundPointDownloadable");

	UGMCheatManager_GMSpawnPlayerAIAroundPointDownloadable_Params params;
	params.iNum = iNum;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSpawnPlayerAIAroundPoint
// (Final, Exec, Native, Public)
// Parameters:
// uint32_t                       iNum                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          fRadius                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActiveAI                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAIInvincible                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithPet                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSpawnPlayerAIAroundPoint(uint32_t iNum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnPlayerAIAroundPoint");

	UGMCheatManager_GMSpawnPlayerAIAroundPoint_Params params;
	params.iNum = iNum;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSpawnPlayerAIAroundMeDownloadable
// (Final, Exec, Native, Public)
// Parameters:
// uint32_t                       iNum                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          fRadius                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActiveAI                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAIInvincible                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithPet                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSpawnPlayerAIAroundMeDownloadable(uint32_t iNum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnPlayerAIAroundMeDownloadable");

	UGMCheatManager_GMSpawnPlayerAIAroundMeDownloadable_Params params;
	params.iNum = iNum;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSpawnPlayerAIAroundMe
// (Final, Exec, Native, Public)
// Parameters:
// uint32_t                       iNum                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          fRadius                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActiveAI                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAIInvincible                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithPet                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSpawnPlayerAIAroundMe(uint32_t iNum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnPlayerAIAroundMe");

	UGMCheatManager_GMSpawnPlayerAIAroundMe_Params params;
	params.iNum = iNum;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSpawnAutoTestAI
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            NameExtraID                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSpawnAutoTestAI(int NameExtraID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnAutoTestAI");

	UGMCheatManager_GMSpawnAutoTestAI_Params params;
	params.NameExtraID = NameExtraID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSpawnAIWithIDAndLoc
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            AIID                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocX                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocY                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocZ                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID1                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemNum1                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID2                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemNum2                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID3                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemNum3                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGMCheatManager::GMSpawnAIWithIDAndLoc(int AIID, float SpawnLocX, float SpawnLocY, float SpawnLocZ, float Radius, int TeamID, int ItemID1, int ItemNum1, int ItemID2, int ItemNum2, int ItemID3, int ItemNum3)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnAIWithIDAndLoc");

	UGMCheatManager_GMSpawnAIWithIDAndLoc_Params params;
	params.AIID = AIID;
	params.SpawnLocX = SpawnLocX;
	params.SpawnLocY = SpawnLocY;
	params.SpawnLocZ = SpawnLocZ;
	params.Radius = Radius;
	params.TeamID = TeamID;
	params.ItemID1 = ItemID1;
	params.ItemNum1 = ItemNum1;
	params.ItemID2 = ItemID2;
	params.ItemNum2 = ItemNum2;
	params.ItemID3 = ItemID3;
	params.ItemNum3 = ItemNum3;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Development.GMCheatManager.GMSpawnAIOnAIPoint3
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::GMSpawnAIOnAIPoint3()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnAIOnAIPoint3");

	UGMCheatManager_GMSpawnAIOnAIPoint3_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSpawnAIOnAIPoint2
// (Final, Exec, Native, Public)

void UGMCheatManager::GMSpawnAIOnAIPoint2()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnAIOnAIPoint2");

	UGMCheatManager_GMSpawnAIOnAIPoint2_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSpawnAIOnAIPoint1
// (Final, Exec, Native, Public)

void UGMCheatManager::GMSpawnAIOnAIPoint1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnAIOnAIPoint1");

	UGMCheatManager_GMSpawnAIOnAIPoint1_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSocialSetRotation
// (Final, Exec, Native, Public, Const)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSocialSetRotation(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSocialSetRotation");

	UGMCheatManager_GMSocialSetRotation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSociallandPlayerMoveToTestPoint
// (Final, Exec, Native, Public)

void UGMCheatManager::GMSociallandPlayerMoveToTestPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSociallandPlayerMoveToTestPoint");

	UGMCheatManager_GMSociallandPlayerMoveToTestPoint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSociallandPlayerMoveToAISpawnPoint1
// (Final, Exec, Native, Public)

void UGMCheatManager::GMSociallandPlayerMoveToAISpawnPoint1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSociallandPlayerMoveToAISpawnPoint1");

	UGMCheatManager_GMSociallandPlayerMoveToAISpawnPoint1_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSociallandChangeItemFromStr
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ItemString                     (Parm, ZeroConstructor)
// struct FString                 EquimentItemString             (Parm, ZeroConstructor)

void UGMCheatManager::GMSociallandChangeItemFromStr(const struct FString& ItemString, const struct FString& EquimentItemString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSociallandChangeItemFromStr");

	UGMCheatManager_GMSociallandChangeItemFromStr_Params params;
	params.ItemString = ItemString;
	params.EquimentItemString = EquimentItemString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMShowHitFeedback
// (Final, Exec, Native, Public, Const)
// Parameters:
// bool                           bCombatHitFeedbackEnable       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMShowHitFeedback(bool bCombatHitFeedbackEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMShowHitFeedback");

	UGMCheatManager_GMShowHitFeedback_Params params;
	params.bCombatHitFeedbackEnable = bCombatHitFeedbackEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSetSpeed
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          WalkSpeed                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSetSpeed(float WalkSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetSpeed");

	UGMCheatManager_GMSetSpeed_Params params;
	params.WalkSpeed = WalkSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSetServerLevelLoadingMode
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewLoadAll                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSetServerLevelLoadingMode(bool bNewLoadAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetServerLevelLoadingMode");

	UGMCheatManager_GMSetServerLevelLoadingMode_Params params;
	params.bNewLoadAll = bNewLoadAll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSetPawnNull
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bIsNull                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSetPawnNull(bool bIsNull)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetPawnNull");

	UGMCheatManager_GMSetPawnNull_Params params;
	params.bIsNull = bIsNull;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSetMLAIModifyDamage
// (Final, Exec, Native, Public)
// Parameters:
// int                            InIsModify                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSetMLAIModifyDamage(int InIsModify)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetMLAIModifyDamage");

	UGMCheatManager_GMSetMLAIModifyDamage_Params params;
	params.InIsModify = InIsModify;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSetMaxAINum
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSetMaxAINum(int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetMaxAINum");

	UGMCheatManager_GMSetMaxAINum_Params params;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSetJoystickEightDirection
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsNeedEightDirection           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSetJoystickEightDirection(bool IsNeedEightDirection)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetJoystickEightDirection");

	UGMCheatManager_GMSetJoystickEightDirection_Params params;
	params.IsNeedEightDirection = IsNeedEightDirection;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSetJoystickActivatedRange
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsNeedActivatedRange           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ActivatedRange                 (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSetJoystickActivatedRange(bool IsNeedActivatedRange, float ActivatedRange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetJoystickActivatedRange");

	UGMCheatManager_GMSetJoystickActivatedRange_Params params;
	params.IsNeedActivatedRange = IsNeedActivatedRange;
	params.ActivatedRange = ActivatedRange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSetHealth
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSetHealth(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetHealth");

	UGMCheatManager_GMSetHealth_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSetDeliveryToMLAI
// (Final, Exec, Native, Public)
// Parameters:
// int                            InIsDeliveryToMLAI             (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSetDeliveryToMLAI(int InIsDeliveryToMLAI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetDeliveryToMLAI");

	UGMCheatManager_GMSetDeliveryToMLAI_Params params;
	params.InIsDeliveryToMLAI = InIsDeliveryToMLAI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSetCullDistance
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bCullDistance                  (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSetCullDistance(bool bCullDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetCullDistance");

	UGMCheatManager_GMSetCullDistance_Params params;
	params.bCullDistance = bCullDistance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSetCircleTime
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          cdTime                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          LastTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSetCircleTime(float cdTime, float LastTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetCircleTime");

	UGMCheatManager_GMSetCircleTime_Params params;
	params.cdTime = cdTime;
	params.LastTime = LastTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMSelectorWayPoint
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FName                   NameOfAIWayPointSelector       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            GMPathIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMSelectorWayPoint(const struct FName& NameOfAIWayPointSelector, int GMPathIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSelectorWayPoint");

	UGMCheatManager_GMSelectorWayPoint_Params params;
	params.NameOfAIWayPointSelector = NameOfAIWayPointSelector;
	params.GMPathIndex = GMPathIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMRevivePlayer
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::GMRevivePlayer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMRevivePlayer");

	UGMCheatManager_GMRevivePlayer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMRainCount
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMRainCount(float Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMRainCount");

	UGMCheatManager_GMRainCount_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMIOSFrameRateLock
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            FrameRateLock                  (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMIOSFrameRateLock(int FrameRateLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMIOSFrameRateLock");

	UGMCheatManager_GMIOSFrameRateLock_Params params;
	params.FrameRateLock = FrameRateLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMInvincible
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInvincible                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMInvincible(bool bInvincible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMInvincible");

	UGMCheatManager_GMInvincible_Params params;
	params.bInvincible = bInvincible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMIncreaseHealth
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::GMIncreaseHealth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMIncreaseHealth");

	UGMCheatManager_GMIncreaseHealth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMGatherAllPlayerAIAroundMe
// (Final, Exec, Native, Public)
// Parameters:
// float                          fRadius                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActiveAI                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAIInvincible                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithPet                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMGatherAllPlayerAIAroundMe(float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMGatherAllPlayerAIAroundMe");

	UGMCheatManager_GMGatherAllPlayerAIAroundMe_Params params;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMForceSuicide
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::GMForceSuicide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMForceSuicide");

	UGMCheatManager_GMForceSuicide_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMForceNullNetwork
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMForceNullNetwork(int bForce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMForceNullNetwork");

	UGMCheatManager_GMForceNullNetwork_Params params;
	params.bForce = bForce;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMFollow
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TargetName                     (Parm, ZeroConstructor)

void UGMCheatManager::GMFollow(const struct FString& TargetName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMFollow");

	UGMCheatManager_GMFollow_Params params;
	params.TargetName = TargetName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMDrawLine
// (Final, Exec, Native, Public)
// Parameters:
// float                          X1                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y1                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z1                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          x2                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          y2                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z2                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMDrawLine(float X1, float Y1, float Z1, float x2, float y2, float Z2, float LifeTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMDrawLine");

	UGMCheatManager_GMDrawLine_Params params;
	params.X1 = X1;
	params.Y1 = Y1;
	params.Z1 = Z1;
	params.x2 = x2;
	params.y2 = y2;
	params.Z2 = Z2;
	params.LifeTime = LifeTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMDrawDirLine
// (Final, Exec, Native, Public)
// Parameters:
// float                          StartX                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartY                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartZ                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DirX                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          DirY                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          DirZ                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMDrawDirLine(float StartX, float StartY, float StartZ, float DirX, float DirY, float DirZ, float Length, float LifeTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMDrawDirLine");

	UGMCheatManager_GMDrawDirLine_Params params;
	params.StartX = StartX;
	params.StartY = StartY;
	params.StartZ = StartZ;
	params.DirX = DirX;
	params.DirY = DirY;
	params.DirZ = DirZ;
	params.Length = Length;
	params.LifeTime = LifeTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMDrawDebugSphere2
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Segments                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMDrawDebugSphere2(float X, float Y, float Z, float Radius, int Segments, float LifeTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMDrawDebugSphere2");

	UGMCheatManager_GMDrawDebugSphere2_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.Radius = Radius;
	params.Segments = Segments;
	params.LifeTime = LifeTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMDrawDebugSphere
// (Final, Exec, Native, Public)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Segments                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMDrawDebugSphere(float Radius, int Segments, float LifeTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMDrawDebugSphere");

	UGMCheatManager_GMDrawDebugSphere_Params params;
	params.Radius = Radius;
	params.Segments = Segments;
	params.LifeTime = LifeTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMDrawCone
// (Final, Exec, Native, Public)
// Parameters:
// float                          Degrees                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            LineNum                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMDrawCone(float Degrees, float LifeTime, int LineNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMDrawCone");

	UGMCheatManager_GMDrawCone_Params params;
	params.Degrees = Degrees;
	params.LifeTime = LifeTime;
	params.LineNum = LineNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMDecreaseHealth
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::GMDecreaseHealth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMDecreaseHealth");

	UGMCheatManager_GMDecreaseHealth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMChangeAIAype
// (Final, Exec, Native, Public)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMChangeAIAype(int Type, uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMChangeAIAype");

	UGMCheatManager_GMChangeAIAype_Params params;
	params.Type = Type;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMAutoTestChangeItem
// (Final, Exec, Native, Public, Const)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ItemString                     (Parm, ZeroConstructor)
// struct FString                 EquimentItemString             (Parm, ZeroConstructor)

void UGMCheatManager::GMAutoTestChangeItem(uint32_t PlayerKey, const struct FString& ItemString, const struct FString& EquimentItemString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMAutoTestChangeItem");

	UGMCheatManager_GMAutoTestChangeItem_Params params;
	params.PlayerKey = PlayerKey;
	params.ItemString = ItemString;
	params.EquimentItemString = EquimentItemString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMAIFire
// (Final, Exec, Native, Public)

void UGMCheatManager::GMAIFire()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMAIFire");

	UGMCheatManager_GMAIFire_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMAddItemForAI
// (Final, Exec, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMAddItemForAI(int ItemId, int Count, uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMAddItemForAI");

	UGMCheatManager_GMAddItemForAI_Params params;
	params.ItemId = ItemId;
	params.Count = Count;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMActiveRenderDynamicStyle
// (Final, Exec, Native, Public, Const)
// Parameters:
// bool                           bSet                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GMActiveRenderDynamicStyle(bool bSet, int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMActiveRenderDynamicStyle");

	UGMCheatManager_GMActiveRenderDynamicStyle_Params params;
	params.bSet = bSet;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GMActiveAI
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::GMActiveAI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMActiveAI");

	UGMCheatManager_GMActiveAI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GetGVMemberID
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            memberID                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GetGVMemberID(int memberID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GetGVMemberID");

	UGMCheatManager_GetGVMemberID_Params params;
	params.memberID = memberID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GetGold
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::GetGold()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GetGold");

	UGMCheatManager_GetGold_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.GenerateMonsterWave
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            ChapterID                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            LevelID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            WaveID                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::GenerateMonsterWave(int ChapterID, int LevelID, int WaveID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GenerateMonsterWave");

	UGMCheatManager_GenerateMonsterWave_Params params;
	params.ChapterID = ChapterID;
	params.LevelID = LevelID;
	params.WaveID = WaveID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ForceStopDynamicWeatherChange
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::ForceStopDynamicWeatherChange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ForceStopDynamicWeatherChange");

	UGMCheatManager_ForceStopDynamicWeatherChange_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ForceStartNextDynamicWeatherChange
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::ForceStartNextDynamicWeatherChange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ForceStartNextDynamicWeatherChange");

	UGMCheatManager_ForceStartNextDynamicWeatherChange_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ForceKickoutAllPlayers
// (Final, Exec, Native, Public)
// Parameters:
// int                            LandId                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::ForceKickoutAllPlayers(int LandId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ForceKickoutAllPlayers");

	UGMCheatManager_ForceKickoutAllPlayers_Params params;
	params.LandId = LandId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ForceGC
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::ForceGC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ForceGC");

	UGMCheatManager_ForceGC_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ForceEndInputForAppWillDeactivate
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::ForceEndInputForAppWillDeactivate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ForceEndInputForAppWillDeactivate");

	UGMCheatManager_ForceEndInputForAppWillDeactivate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.FireSpawnAirplane
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::FireSpawnAirplane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.FireSpawnAirplane");

	UGMCheatManager_FireSpawnAirplane_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.FireReviveTeammate
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            RespawnStartID                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bJump                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::FireReviveTeammate(int RespawnStartID, bool bJump)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.FireReviveTeammate");

	UGMCheatManager_FireReviveTeammate_Params params;
	params.RespawnStartID = RespawnStartID;
	params.bJump = bJump;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.FallKill
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            FallType                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::FallKill(int FallType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.FallKill");

	UGMCheatManager_FallKill_Params params;
	params.FallType = FallType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.EquipHelmetAndBodyArmor
// (Final, Exec, Native, Public)
// Parameters:
// int                            Lev                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::EquipHelmetAndBodyArmor(int Lev)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.EquipHelmetAndBodyArmor");

	UGMCheatManager_EquipHelmetAndBodyArmor_Params params;
	params.Lev = Lev;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.EnterPVELevel
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            ChapterID                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            LevelID                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::EnterPVELevel(int ChapterID, int LevelID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.EnterPVELevel");

	UGMCheatManager_EnterPVELevel_Params params;
	params.ChapterID = ChapterID;
	params.LevelID = LevelID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.EnterPawnState
// (Final, Exec, Native, Public)
// Parameters:
// EPawnState                     InState                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnter                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::EnterPawnState(EPawnState InState, bool IsEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.EnterPawnState");

	UGMCheatManager_EnterPawnState_Params params;
	params.InState = InState;
	params.IsEnter = IsEnter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.EndAPMTag
// (Final, Exec, Native, Public)

void UGMCheatManager::EndAPMTag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.EndAPMTag");

	UGMCheatManager_EndAPMTag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.EnablePool
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::EnablePool(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.EnablePool");

	UGMCheatManager_EnablePool_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.EnableHitBox
// (Final, Exec, Native, Public, Const)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::EnableHitBox(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.EnableHitBox");

	UGMCheatManager_EnableHitBox_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.EnableFuzzyInformation
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::EnableFuzzyInformation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.EnableFuzzyInformation");

	UGMCheatManager_EnableFuzzyInformation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.EnableDSAnim
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 MonsterName                    (Parm, ZeroConstructor)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::EnableDSAnim(const struct FString& MonsterName, bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.EnableDSAnim");

	UGMCheatManager_EnableDSAnim_Params params;
	params.MonsterName = MonsterName;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DumpSmartBearerManager
// (Final, Exec, Native, Public)

void UGMCheatManager::DumpSmartBearerManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpSmartBearerManager");

	UGMCheatManager_DumpSmartBearerManager_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DumpObjectNetProperties
// (Final, Exec, Native, Public)
// Parameters:
// class UObject*                 InObj                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::DumpObjectNetProperties(class UObject* InObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpObjectNetProperties");

	UGMCheatManager_DumpObjectNetProperties_Params params;
	params.InObj = InObj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DumpMoveLog
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bDump                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::DumpMoveLog(bool bDump)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpMoveLog");

	UGMCheatManager_DumpMoveLog_Params params;
	params.bDump = bDump;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DumpLevels
// (Final, Exec, Native, Public)

void UGMCheatManager::DumpLevels()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpLevels");

	UGMCheatManager_DumpLevels_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DumpDSNetConsiderList
// (Final, Exec, Native, Public)

void UGMCheatManager::DumpDSNetConsiderList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpDSNetConsiderList");

	UGMCheatManager_DumpDSNetConsiderList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DumpAnimLayer
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::DumpAnimLayer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpAnimLayer");

	UGMCheatManager_DumpAnimLayer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DumpAIOcclusion
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::DumpAIOcclusion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpAIOcclusion");

	UGMCheatManager_DumpAIOcclusion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DSReconnectEvent
// (Final, Exec, Native, Public)

void UGMCheatManager::DSReconnectEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DSReconnectEvent");

	UGMCheatManager_DSReconnectEvent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DSConnectLostEvent
// (Final, Exec, Native, Public)

void UGMCheatManager::DSConnectLostEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DSConnectLostEvent");

	UGMCheatManager_DSConnectLostEvent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DismissIsland
// (Final, Exec, Native, Public)

void UGMCheatManager::DismissIsland()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DismissIsland");

	UGMCheatManager_DismissIsland_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DeleverAnimalCountPerWave
// (Final, Exec, Native, Public)
// Parameters:
// EAnimalType                    AnimalType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::DeleverAnimalCountPerWave(EAnimalType AnimalType, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DeleverAnimalCountPerWave");

	UGMCheatManager_DeleverAnimalCountPerWave_Params params;
	params.AnimalType = AnimalType;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugStopEMote
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::DebugStopEMote(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugStopEMote");

	UGMCheatManager_DebugStopEMote_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugStopCapture
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::DebugStopCapture()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugStopCapture");

	UGMCheatManager_DebugStopCapture_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugStartEMote
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::DebugStartEMote(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugStartEMote");

	UGMCheatManager_DebugStartEMote_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugSpringArm
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bDebug                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::DebugSpringArm(bool bDebug)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugSpringArm");

	UGMCheatManager_DebugSpringArm_Params params;
	params.bDebug = bDebug;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugSpeed
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::DebugSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugSpeed");

	UGMCheatManager_DebugSpeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugSetChangeWearCoolDownTime
// (Final, Exec, Native, Public)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::DebugSetChangeWearCoolDownTime(float Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugSetChangeWearCoolDownTime");

	UGMCheatManager_DebugSetChangeWearCoolDownTime_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugRoomCustomParams
// (Final, Exec, Native, Public)
// Parameters:
// int                            FirstCircleDelayTime           (Parm, ZeroConstructor, IsPlainOldData)
// int                            FirstCircleAppearTime          (Parm, ZeroConstructor, IsPlainOldData)
// int                            FirstWhiteCircleRadiusMultiplicator (Parm, ZeroConstructor, IsPlainOldData)
// int                            BlueCircleDamageMultiplicator  (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::DebugRoomCustomParams(int FirstCircleDelayTime, int FirstCircleAppearTime, int FirstWhiteCircleRadiusMultiplicator, int BlueCircleDamageMultiplicator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugRoomCustomParams");

	UGMCheatManager_DebugRoomCustomParams_Params params;
	params.FirstCircleDelayTime = FirstCircleDelayTime;
	params.FirstCircleAppearTime = FirstCircleAppearTime;
	params.FirstWhiteCircleRadiusMultiplicator = FirstWhiteCircleRadiusMultiplicator;
	params.BlueCircleDamageMultiplicator = BlueCircleDamageMultiplicator;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugPoseState
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::DebugPoseState(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugPoseState");

	UGMCheatManager_DebugPoseState_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugOBNearPlayerList
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::DebugOBNearPlayerList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugOBNearPlayerList");

	UGMCheatManager_DebugOBNearPlayerList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugMove
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::DebugMove()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugMove");

	UGMCheatManager_DebugMove_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugLocation
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::DebugLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugLocation");

	UGMCheatManager_DebugLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugLevelsInfo
// (Final, Exec, Native, Public)

void UGMCheatManager::DebugLevelsInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugLevelsInfo");

	UGMCheatManager_DebugLevelsInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugFPPAnim
// (Final, Exec, Native, Public)

void UGMCheatManager::DebugFPPAnim()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugFPPAnim");

	UGMCheatManager_DebugFPPAnim_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugFixedParams
// (Final, Exec, Native, Public)

void UGMCheatManager::DebugFixedParams()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugFixedParams");

	UGMCheatManager_DebugFixedParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugFindFloorResult
// (Final, Exec, Native, Public)

void UGMCheatManager::DebugFindFloorResult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugFindFloorResult");

	UGMCheatManager_DebugFindFloorResult_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugCamera
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::DebugCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugCamera");

	UGMCheatManager_DebugCamera_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.DebugAttach
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::DebugAttach()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugAttach");

	UGMCheatManager_DebugAttach_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ClientSetSpeed
// (Final, Exec, Native, Public, Const)
// Parameters:
// float                          Times                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bGMSetSpeed                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::ClientSetSpeed(float Times, bool bGMSetSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ClientSetSpeed");

	UGMCheatManager_ClientSetSpeed_Params params;
	params.Times = Times;
	params.bGMSetSpeed = bGMSetSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ClearTestMesh
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatManager::ClearTestMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ClearTestMesh");

	UGMCheatManager_ClearTestMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ClearScreenDebug
// (Final, Exec, Native, Public)

void UGMCheatManager::ClearScreenDebug()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ClearScreenDebug");

	UGMCheatManager_ClearScreenDebug_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ClearNoDriverVehicle
// (Final, Exec, Native, Public)

void UGMCheatManager::ClearNoDriverVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ClearNoDriverVehicle");

	UGMCheatManager_ClearNoDriverVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ClearBuffPrivateData
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::ClearBuffPrivateData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ClearBuffPrivateData");

	UGMCheatManager_ClearBuffPrivateData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ClearAnimLayer
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            AnimLayer                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::ClearAnimLayer(int AnimLayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ClearAnimLayer");

	UGMCheatManager_ClearAnimLayer_Params params;
	params.AnimLayer = AnimLayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ClearAllTlog
// (Final, Exec, Native, Public)

void UGMCheatManager::ClearAllTlog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ClearAllTlog");

	UGMCheatManager_ClearAllTlog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.CheatBeginPlay
// (Native, Event, Public, BlueprintEvent)

void UGMCheatManager::CheatBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.CheatBeginPlay");

	UGMCheatManager_CheatBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ChatTest
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor)

void UGMCheatManager::ChatTest(struct FString* Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ChatTest");

	UGMCheatManager_ChatTest_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;
}


// Function Development.GMCheatManager.ChangeViewTarget
// (Final, Exec, Native, Public, Const)

void UGMCheatManager::ChangeViewTarget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ChangeViewTarget");

	UGMCheatManager_ChangeViewTarget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ChangeToInfec
// (Final, Exec, Native, Public)
// Parameters:
// unsigned char                  SubPawnType                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::ChangeToInfec(unsigned char SubPawnType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ChangeToInfec");

	UGMCheatManager_ChangeToInfec_Params params;
	params.SubPawnType = SubPawnType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ChangeMonsterWalkMode
// (Final, Exec, Native, Public)
// Parameters:
// int                            Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::ChangeMonsterWalkMode(int Mode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ChangeMonsterWalkMode");

	UGMCheatManager_ChangeMonsterWalkMode_Params params;
	params.Mode = Mode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ChangeAllTimeDuration
// (Final, Exec, Native, Public)
// Parameters:
// int                            NewEndStateTime                (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewStartShowLifeTime           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewMinimumAliveTime            (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewMinimumPlayerNum            (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewSpecialLifeTime             (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::ChangeAllTimeDuration(int NewEndStateTime, int NewStartShowLifeTime, int NewMinimumAliveTime, int NewMinimumPlayerNum, int NewSpecialLifeTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ChangeAllTimeDuration");

	UGMCheatManager_ChangeAllTimeDuration_Params params;
	params.NewEndStateTime = NewEndStateTime;
	params.NewStartShowLifeTime = NewStartShowLifeTime;
	params.NewMinimumAliveTime = NewMinimumAliveTime;
	params.NewMinimumPlayerNum = NewMinimumPlayerNum;
	params.NewSpecialLifeTime = NewSpecialLifeTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ChangeAIDamageRate
// (Final, Exec, Native, Public)
// Parameters:
// float                          InRate                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::ChangeAIDamageRate(float InRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ChangeAIDamageRate");

	UGMCheatManager_ChangeAIDamageRate_Params params;
	params.InRate = InRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ChangeAIAttackPlayerDamageRate
// (Final, Exec, Native, Public)
// Parameters:
// float                          InRate                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::ChangeAIAttackPlayerDamageRate(float InRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ChangeAIAttackPlayerDamageRate");

	UGMCheatManager_ChangeAIAttackPlayerDamageRate_Params params;
	params.InRate = InRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.CastUIMsg
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)
// struct FString                 module                         (Parm, ZeroConstructor)

void UGMCheatManager::CastUIMsg(const struct FString& Msg, const struct FString& module)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.CastUIMsg");

	UGMCheatManager_CastUIMsg_Params params;
	params.Msg = Msg;
	params.module = module;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.CallOnReconnect
// (Final, Exec, Native, Public)

void UGMCheatManager::CallOnReconnect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.CallOnReconnect");

	UGMCheatManager_CallOnReconnect_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.CallLuaTableFunction
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)

void UGMCheatManager::CallLuaTableFunction(const struct FString& tableName, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.CallLuaTableFunction");

	UGMCheatManager_CallLuaTableFunction_Params params;
	params.tableName = tableName;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.CallGMLua
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)

void UGMCheatManager::CallGMLua(const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.CallGMLua");

	UGMCheatManager_CallGMLua_Params params;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.CallGameModeLuaOverrideFunction
// (Final, Exec, Native, Public, HasOutParms, Const)
// Parameters:
// struct FString                 FunctionName                   (Parm, OutParm, ZeroConstructor)

void UGMCheatManager::CallGameModeLuaOverrideFunction(struct FString* FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.CallGameModeLuaOverrideFunction");

	UGMCheatManager_CallGameModeLuaOverrideFunction_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FunctionName != nullptr)
		*FunctionName = params.FunctionName;
}


// Function Development.GMCheatManager.CallGameModeLuaFunction
// (Final, Exec, Native, Public, HasOutParms, Const)
// Parameters:
// struct FString                 FunctionName                   (Parm, OutParm, ZeroConstructor)

void UGMCheatManager::CallGameModeLuaFunction(struct FString* FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.CallGameModeLuaFunction");

	UGMCheatManager_CallGameModeLuaFunction_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FunctionName != nullptr)
		*FunctionName = params.FunctionName;
}


// Function Development.GMCheatManager.BuildingCollide
// (Final, Exec, Native, Public)
// Parameters:
// bool                           InCollide                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::BuildingCollide(bool InCollide)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.BuildingCollide");

	UGMCheatManager_BuildingCollide_Params params;
	params.InCollide = InCollide;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AutoShoveling
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          AutoShvelingSeconds            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::AutoShoveling(bool bEnable, float AutoShvelingSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AutoShoveling");

	UGMCheatManager_AutoShoveling_Params params;
	params.bEnable = bEnable;
	params.AutoShvelingSeconds = AutoShvelingSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AutoSetPlayerLocation
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::AutoSetPlayerLocation(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AutoSetPlayerLocation");

	UGMCheatManager_AutoSetPlayerLocation_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AnimDebugUseSkipMapForDistanceFactor
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFlag                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::AnimDebugUseSkipMapForDistanceFactor(bool bFlag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugUseSkipMapForDistanceFactor");

	UGMCheatManager_AnimDebugUseSkipMapForDistanceFactor_Params params;
	params.bFlag = bFlag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AnimDebugUseLodMap
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUseLodMap                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::AnimDebugUseLodMap(bool bUseLodMap)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugUseLodMap");

	UGMCheatManager_AnimDebugUseLodMap_Params params;
	params.bUseLodMap = bUseLodMap;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AnimDebugUpdateFlag
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::AnimDebugUpdateFlag(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugUpdateFlag");

	UGMCheatManager_AnimDebugUpdateFlag_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AnimDebugNonRenderedRate
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            UpdateRate                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::AnimDebugNonRenderedRate(int UpdateRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugNonRenderedRate");

	UGMCheatManager_AnimDebugNonRenderedRate_Params params;
	params.UpdateRate = UpdateRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AnimDebugNonRenderedMinDist
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          minDist                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::AnimDebugNonRenderedMinDist(float minDist)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugNonRenderedMinDist");

	UGMCheatManager_AnimDebugNonRenderedMinDist_Params params;
	params.minDist = minDist;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AnimDebugNonRenderedMaxDist
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          MaxDist                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::AnimDebugNonRenderedMaxDist(float MaxDist)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugNonRenderedMaxDist");

	UGMCheatManager_AnimDebugNonRenderedMaxDist_Params params;
	params.MaxDist = MaxDist;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AnimDebugLodSkipMap
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// TMap<int, int>                 SkipMap                        (Parm, ZeroConstructor)

void UGMCheatManager::AnimDebugLodSkipMap(TMap<int, int> SkipMap)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugLodSkipMap");

	UGMCheatManager_AnimDebugLodSkipMap_Params params;
	params.SkipMap = SkipMap;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AnimDebugEnable
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::AnimDebugEnable(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugEnable");

	UGMCheatManager_AnimDebugEnable_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AnimDebugBaseDistFactor
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// TArray<float>                  BaseDistFactor                 (Parm, ZeroConstructor)

void UGMCheatManager::AnimDebugBaseDistFactor(TArray<float> BaseDistFactor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugBaseDistFactor");

	UGMCheatManager_AnimDebugBaseDistFactor_Params params;
	params.BaseDistFactor = BaseDistFactor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AirDropByClassPath
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ClassPath                      (Parm, ZeroConstructor)

void UGMCheatManager::AirDropByClassPath(float X, float Y, float Z, const struct FString& ClassPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AirDropByClassPath");

	UGMCheatManager_AirDropByClassPath_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.ClassPath = ClassPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AILog
// (Final, Exec, Native, Public)

void UGMCheatManager::AILog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AILog");

	UGMCheatManager_AILog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AddWonderfulPeriod
// (Final, Exec, Native, Public)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndTime                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            AdditionalData                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::AddWonderfulPeriod(int Type, float StartTime, float EndTime, int AdditionalData, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AddWonderfulPeriod");

	UGMCheatManager_AddWonderfulPeriod_Params params;
	params.Type = Type;
	params.StartTime = StartTime;
	params.EndTime = EndTime;
	params.AdditionalData = AdditionalData;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AddTestTouchInput
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          force                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsStart                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::AddTestTouchInput(int FingerIndex, float X, float Y, float force, bool bIsStart)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AddTestTouchInput");

	UGMCheatManager_AddTestTouchInput_Params params;
	params.FingerIndex = FingerIndex;
	params.X = X;
	params.Y = Y;
	params.force = force;
	params.bIsStart = bIsStart;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AddScore
// (Final, Exec, Native, Public, Const)
// Parameters:
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::AddScore(int Score)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AddScore");

	UGMCheatManager_AddScore_Params params;
	params.Score = Score;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.AddAllTestRes
// (Final, Exec, Native, Public)

void UGMCheatManager::AddAllTestRes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AddAllTestRes");

	UGMCheatManager_AddAllTestRes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatManager.ActiveCurCamera
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatManager::ActiveCurCamera(bool bActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ActiveCurCamera");

	UGMCheatManager_ActiveCurCamera_Params params;
	params.bActive = bActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatMod.TriggerHunterRevival
// (Final, Exec, Native, Public)

void UGMCheatMod::TriggerHunterRevival()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.TriggerHunterRevival");

	UGMCheatMod_TriggerHunterRevival_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatMod.SetUAETriggerEnable
// (Final, Exec, Native, Public)
// Parameters:
// bool                           IsEnbale                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatMod::SetUAETriggerEnable(bool IsEnbale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.SetUAETriggerEnable");

	UGMCheatMod_SetUAETriggerEnable_Params params;
	params.IsEnbale = IsEnbale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatMod.SetInfectResetPlayerInterTime
// (Final, Exec, Native, Public)
// Parameters:
// float                          InterTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatMod::SetInfectResetPlayerInterTime(float InterTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.SetInfectResetPlayerInterTime");

	UGMCheatMod_SetInfectResetPlayerInterTime_Params params;
	params.InterTime = InterTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatMod.SetAllInfectedAreaLevel
// (Final, Exec, Native, Public)
// Parameters:
// int                            LevelID                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatMod::SetAllInfectedAreaLevel(int LevelID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.SetAllInfectedAreaLevel");

	UGMCheatMod_SetAllInfectedAreaLevel_Params params;
	params.LevelID = LevelID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatMod.OnBuyRevivalTeammate
// (Final, Exec, Native, Public)
// Parameters:
// int                            TeammateIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatMod::OnBuyRevivalTeammate(int TeammateIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.OnBuyRevivalTeammate");

	UGMCheatMod_OnBuyRevivalTeammate_Params params;
	params.TeammateIndex = TeammateIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatMod.OnBuyRevivalSign
// (Final, Exec, Native, Public)

void UGMCheatMod::OnBuyRevivalSign()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.OnBuyRevivalSign");

	UGMCheatMod_OnBuyRevivalSign_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatMod.InfectionEndRound
// (Final, Exec, Native, Public)

void UGMCheatMod::InfectionEndRound()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.InfectionEndRound");

	UGMCheatMod_InfectionEndRound_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatMod.GetGameResult
// (Final, Exec, Native, Public)

void UGMCheatMod::GetGameResult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.GetGameResult");

	UGMCheatMod_GetGameResult_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatMod.DebugEnableFerrisWheelTick
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatMod::DebugEnableFerrisWheelTick(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.DebugEnableFerrisWheelTick");

	UGMCheatMod_DebugEnableFerrisWheelTick_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatMod.ClearBossBornPoint
// (Final, Exec, Native, Public)

void UGMCheatMod::ClearBossBornPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.ClearBossBornPoint");

	UGMCheatMod_ClearBossBornPoint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatMod.ChangePVELevel
// (Final, Exec, Native, Public)
// Parameters:
// int                            Lv                             (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatMod::ChangePVELevel(int Lv)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.ChangePVELevel");

	UGMCheatMod_ChangePVELevel_Params params;
	params.Lv = Lv;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatMod.CallZombieFlowAirDrop
// (Final, Exec, Native, Public)
// Parameters:
// int                            ZombieID                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatMod::CallZombieFlowAirDrop(int ZombieID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.CallZombieFlowAirDrop");

	UGMCheatMod_CallZombieFlowAirDrop_Params params;
	params.ZombieID = ZombieID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatMod.CallZombieAirDrop
// (Final, Exec, Native, Public)
// Parameters:
// int                            ZombieID                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatMod::CallZombieAirDrop(int ZombieID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.CallZombieAirDrop");

	UGMCheatMod_CallZombieAirDrop_Params params;
	params.ZombieID = ZombieID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatMod.AddBossBornPoint
// (Final, Exec, Native, Public)
// Parameters:
// float                          BornX                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          BornY                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatMod::AddBossBornPoint(float BornX, float BornY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.AddBossBornPoint");

	UGMCheatMod_AddBossBornPoint_Params params;
	params.BornX = BornX;
	params.BornY = BornY;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.UnLoadAllCollision
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Unload                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatOther::UnLoadAllCollision(bool Unload)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.UnLoadAllCollision");

	UGMCheatOther_UnLoadAllCollision_Params params;
	params.Unload = Unload;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.ShutDownBroadcastFatalDamage
// (Final, Exec, Native, Public)
// Parameters:
// bool                           IsOpen                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatOther::ShutDownBroadcastFatalDamage(bool IsOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.ShutDownBroadcastFatalDamage");

	UGMCheatOther_ShutDownBroadcastFatalDamage_Params params;
	params.IsOpen = IsOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.ShowHideLandscapeComponent
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatOther::ShowHideLandscapeComponent(bool bShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.ShowHideLandscapeComponent");

	UGMCheatOther_ShowHideLandscapeComponent_Params params;
	params.bShow = bShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.SetSingleThreadUpdateAnim
// (Final, Exec, Native, Public)
// Parameters:
// bool                           InIsSingleThread               (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatOther::SetSingleThreadUpdateAnim(bool InIsSingleThread)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.SetSingleThreadUpdateAnim");

	UGMCheatOther_SetSingleThreadUpdateAnim_Params params;
	params.InIsSingleThread = InIsSingleThread;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.SetIsShowBlood
// (Final, Exec, Native, Public)
// Parameters:
// bool                           InIsShowBlood                  (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatOther::SetIsShowBlood(bool InIsShowBlood)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.SetIsShowBlood");

	UGMCheatOther_SetIsShowBlood_Params params;
	params.InIsShowBlood = InIsShowBlood;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.RetrievePlayerBattleResultData
// (Final, Exec, Native, Public)

void UGMCheatOther::RetrievePlayerBattleResultData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.RetrievePlayerBattleResultData");

	UGMCheatOther_RetrievePlayerBattleResultData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.RecoverStatusAfterReconnecting
// (Final, Exec, Native, Public)

void UGMCheatOther::RecoverStatusAfterReconnecting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.RecoverStatusAfterReconnecting");

	UGMCheatOther_RecoverStatusAfterReconnecting_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.ObserveWhoKilledMe
// (Final, Exec, Native, Public)

void UGMCheatOther::ObserveWhoKilledMe()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.ObserveWhoKilledMe");

	UGMCheatOther_ObserveWhoKilledMe_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.GMTestSpectateRPC
// (Final, Exec, Native, Public)

void UGMCheatOther::GMTestSpectateRPC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.GMTestSpectateRPC");

	UGMCheatOther_GMTestSpectateRPC_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.GMTestSpectateException
// (Final, Exec, Native, Public)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatOther::GMTestSpectateException(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.GMTestSpectateException");

	UGMCheatOther_GMTestSpectateException_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.GMTestExternalData
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 InStr                          (Parm, ZeroConstructor)

void UGMCheatOther::GMTestExternalData(const struct FString& InStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.GMTestExternalData");

	UGMCheatOther_GMTestExternalData_Params params;
	params.InStr = InStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.GMTeleport
// (Final, Exec, Native, Public)
// Parameters:
// struct FName                   Teleporter                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatOther::GMTeleport(const struct FName& Teleporter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.GMTeleport");

	UGMCheatOther_GMTeleport_Params params;
	params.Teleporter = Teleporter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.GMSetScalarParam
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 ShaderName                     (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatOther::GMSetScalarParam(const struct FString& Name, const struct FString& ShaderName, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.GMSetScalarParam");

	UGMCheatOther_GMSetScalarParam_Params params;
	params.Name = Name;
	params.ShaderName = ShaderName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.GMSendDailyTaskReport
// (Final, Exec, Native, Public)

void UGMCheatOther::GMSendDailyTaskReport()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.GMSendDailyTaskReport");

	UGMCheatOther_GMSendDailyTaskReport_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.GMBroastSyncTaskInfo
// (Final, Exec, Native, Public)

void UGMCheatOther::GMBroastSyncTaskInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.GMBroastSyncTaskInfo");

	UGMCheatOther_GMBroastSyncTaskInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.EmptyLandscapeActor
// (Final, Exec, Native, Public)

void UGMCheatOther::EmptyLandscapeActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.EmptyLandscapeActor");

	UGMCheatOther_EmptyLandscapeActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.DumpGUIDCache
// (Final, Exec, Native, Public)
// Parameters:
// int                            DriverIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatOther::DumpGUIDCache(int DriverIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.DumpGUIDCache");

	UGMCheatOther_DumpGUIDCache_Params params;
	params.DriverIndex = DriverIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.DumpActiveObject
// (Final, Exec, Native, Public)

void UGMCheatOther::DumpActiveObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.DumpActiveObject");

	UGMCheatOther_DumpActiveObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.DebugEnableDrawSearchLine
// (Final, Exec, Native, Public)
// Parameters:
// int                            bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatOther::DebugEnableDrawSearchLine(int bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.DebugEnableDrawSearchLine");

	UGMCheatOther_DebugEnableDrawSearchLine_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.CanSeeAllUI
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bUIVisibility                  (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatOther::CanSeeAllUI(bool bUIVisibility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.CanSeeAllUI");

	UGMCheatOther_CanSeeAllUI_Params params;
	params.bUIVisibility = bUIVisibility;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatOther.AutoSelectTeammateToView
// (Final, Exec, Native, Public)

void UGMCheatOther::AutoSelectTeammateToView()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.AutoSelectTeammateToView");

	UGMCheatOther_AutoSelectTeammateToView_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.UpgradeSkillLevel
// (Final, Exec, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillLevel                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::UpgradeSkillLevel(int SkillID, int SkillLevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.UpgradeSkillLevel");

	UGMCheatSkill_UpgradeSkillLevel_Params params;
	params.SkillID = SkillID;
	params.SkillLevel = SkillLevel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.TryDeleteOneSkill
// (Final, Exec, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmediately                   (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::TryDeleteOneSkill(int SkillID, bool bImmediately)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.TryDeleteOneSkill");

	UGMCheatSkill_TryDeleteOneSkill_Params params;
	params.SkillID = SkillID;
	params.bImmediately = bImmediately;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.TryAddOneSkill
// (Final, Exec, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ButtonSlot                     (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::TryAddOneSkill(int SkillID, bool bActive, int ButtonSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.TryAddOneSkill");

	UGMCheatSkill_TryAddOneSkill_Params params;
	params.SkillID = SkillID;
	params.bActive = bActive;
	params.ButtonSlot = ButtonSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.TriggerSkillWithID
// (Final, Exec, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::TriggerSkillWithID(int SkillID, bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.TriggerSkillWithID");

	UGMCheatSkill_TriggerSkillWithID_Params params;
	params.SkillID = SkillID;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.StartSkill
// (Final, Exec, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::StartSkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.StartSkill");

	UGMCheatSkill_StartSkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.StartMainSkill
// (Final, Exec, Native, Public)

void UGMCheatSkill::StartMainSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.StartMainSkill");

	UGMCheatSkill_StartMainSkill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.RemoveVehicleBuffBySkill
// (Final, Exec, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::RemoveVehicleBuffBySkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.RemoveVehicleBuffBySkill");

	UGMCheatSkill_RemoveVehicleBuffBySkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.RemoveVehicleBuff
// (Final, Exec, Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::RemoveVehicleBuff(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.RemoveVehicleBuff");

	UGMCheatSkill_RemoveVehicleBuff_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.RemoveBuffBySkill
// (Final, Exec, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            IsPlayer                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::RemoveBuffBySkill(int SkillID, int IsPlayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.RemoveBuffBySkill");

	UGMCheatSkill_RemoveBuffBySkill_Params params;
	params.SkillID = SkillID;
	params.IsPlayer = IsPlayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.RemoveBuff
// (Final, Exec, Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            IsPlayer                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            BuffLayer                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::RemoveBuff(int BuffID, int IsPlayer, int BuffLayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.RemoveBuff");

	UGMCheatSkill_RemoveBuff_Params params;
	params.BuffID = BuffID;
	params.IsPlayer = IsPlayer;
	params.BuffLayer = BuffLayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.ReloadPVETable
// (Final, Exec, Native, Public)

void UGMCheatSkill::ReloadPVETable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.ReloadPVETable");

	UGMCheatSkill_ReloadPVETable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.EnableSkillCD
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::EnableSkillCD(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.EnableSkillCD");

	UGMCheatSkill_EnableSkillCD_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.DynamicRemoveSkill
// (Final, Exec, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::DynamicRemoveSkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.DynamicRemoveSkill");

	UGMCheatSkill_DynamicRemoveSkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.DynamicAddSkill
// (Final, Exec, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::DynamicAddSkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.DynamicAddSkill");

	UGMCheatSkill_DynamicAddSkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.DumpSkills
// (Final, Exec, Native, Public)

void UGMCheatSkill::DumpSkills()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.DumpSkills");

	UGMCheatSkill_DumpSkills_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.AddVehicleBuffBySkill
// (Final, Exec, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::AddVehicleBuffBySkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.AddVehicleBuffBySkill");

	UGMCheatSkill_AddVehicleBuffBySkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.AddVehicleBuff
// (Final, Exec, Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::AddVehicleBuff(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.AddVehicleBuff");

	UGMCheatSkill_AddVehicleBuff_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.AddSkillToken
// (Final, Exec, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAdd                           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::AddSkillToken(int SkillID, bool bAdd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.AddSkillToken");

	UGMCheatSkill_AddSkillToken_Params params;
	params.SkillID = SkillID;
	params.bAdd = bAdd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.AddBuffBySkill
// (Final, Exec, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            IsPlayer                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::AddBuffBySkill(int SkillID, int IsPlayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.AddBuffBySkill");

	UGMCheatSkill_AddBuffBySkill_Params params;
	params.SkillID = SkillID;
	params.IsPlayer = IsPlayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatSkill.AddBuff
// (Final, Exec, Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            IsPlayer                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatSkill::AddBuff(int BuffID, int IsPlayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.AddBuff");

	UGMCheatSkill_AddBuff_Params params;
	params.BuffID = BuffID;
	params.IsPlayer = IsPlayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.VW_Seat
// (Final, Exec, Native, Public)
// Parameters:
// int                            change                         (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatVehicle::VW_Seat(int change)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.VW_Seat");

	UGMCheatVehicle_VW_Seat_Params params;
	params.change = change;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.VehicleResetTo
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatVehicle::VehicleResetTo(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.VehicleResetTo");

	UGMCheatVehicle_VehicleResetTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.VehicleMoveTo
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatVehicle::VehicleMoveTo(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.VehicleMoveTo");

	UGMCheatVehicle_VehicleMoveTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.ToggleVehicleSync
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatVehicle::ToggleVehicleSync(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ToggleVehicleSync");

	UGMCheatVehicle_ToggleVehicleSync_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.SpawnVehicleWithPathAndLoc
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatVehicle::SpawnVehicleWithPathAndLoc(const struct FString& Path, float X, float Y, float Z, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.SpawnVehicleWithPathAndLoc");

	UGMCheatVehicle_SpawnVehicleWithPathAndLoc_Params params;
	params.Path = Path;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.SpawnVehicleWithPath
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatVehicle::SpawnVehicleWithPath(const struct FString& Path, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.SpawnVehicleWithPath");

	UGMCheatVehicle_SpawnVehicleWithPath_Params params;
	params.Path = Path;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.SpawnVehicle
// (Final, Exec, Native, Public)

void UGMCheatVehicle::SpawnVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.SpawnVehicle");

	UGMCheatVehicle_SpawnVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.SpawnAllVehicle
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)

void UGMCheatVehicle::SpawnAllVehicle(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.SpawnAllVehicle");

	UGMCheatVehicle_SpawnAllVehicle_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.ShowOpenSequence
// (Final, Exec, Native, Public)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatVehicle::ShowOpenSequence(float Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ShowOpenSequence");

	UGMCheatVehicle_ShowOpenSequence_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.SetSnowBoradRotationInAir
// (Final, Exec, Native, Public)
// Parameters:
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Roll                           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatVehicle::SetSnowBoradRotationInAir(float Pitch, float Yaw, float Roll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.SetSnowBoradRotationInAir");

	UGMCheatVehicle_SetSnowBoradRotationInAir_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;
	params.Roll = Roll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.SetFuelByPercent
// (Final, Exec, Native, Public)
// Parameters:
// float                          percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatVehicle::SetFuelByPercent(float percent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.SetFuelByPercent");

	UGMCheatVehicle_SetFuelByPercent_Params params;
	params.percent = percent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.ResetVehicleEngine
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatVehicle::ResetVehicleEngine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ResetVehicleEngine");

	UGMCheatVehicle_ResetVehicleEngine_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.ReqLeaveVehicle
// (Final, Exec, Native, Public)

void UGMCheatVehicle::ReqLeaveVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ReqLeaveVehicle");

	UGMCheatVehicle_ReqLeaveVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.ReqExchangeVehicleCharacter
// (Final, Exec, Native, Public)
// Parameters:
// int                            Param                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatVehicle::ReqExchangeVehicleCharacter(int Param)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ReqExchangeVehicleCharacter");

	UGMCheatVehicle_ReqExchangeVehicleCharacter_Params params;
	params.Param = Param;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.ReqEnterVehicle
// (Final, Exec, Native, Public)
// Parameters:
// float                          dis                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatVehicle::ReqEnterVehicle(float dis)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ReqEnterVehicle");

	UGMCheatVehicle_ReqEnterVehicle_Params params;
	params.dis = dis;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.ReqEnterSnowBoard
// (Final, Exec, Native, Public)

void UGMCheatVehicle::ReqEnterSnowBoard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ReqEnterSnowBoard");

	UGMCheatVehicle_ReqEnterSnowBoard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.ReplaceVehicleWithPath
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)

void UGMCheatVehicle::ReplaceVehicleWithPath(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ReplaceVehicleWithPath");

	UGMCheatVehicle_ReplaceVehicleWithPath_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.ReplaceVehicle
// (Final, Exec, Native, Public)

void UGMCheatVehicle::ReplaceVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ReplaceVehicle");

	UGMCheatVehicle_ReplaceVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.MakeVehicleFly
// (Final, Exec, Native, Public)
// Parameters:
// int                            IsFly                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsUp                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatVehicle::MakeVehicleFly(int IsFly, bool bIsUp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.MakeVehicleFly");

	UGMCheatVehicle_MakeVehicleFly_Params params;
	params.IsFly = IsFly;
	params.bIsUp = bIsUp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatVehicle.KillAllEnermyVehicle
// (Final, Exec, Native, Public)

void UGMCheatVehicle::KillAllEnermyVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.KillAllEnermyVehicle");

	UGMCheatVehicle_KillAllEnermyVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.ToggleShootVertify
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatWeapon::ToggleShootVertify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.ToggleShootVertify");

	UGMCheatWeapon_ToggleShootVertify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.ShowWeaponDirection
// (Final, Exec, Native, Public)
// Parameters:
// int                            Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatWeapon::ShowWeaponDirection(int Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.ShowWeaponDirection");

	UGMCheatWeapon_ShowWeaponDirection_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.ShowBulletInfo
// (Final, Exec, Native, Public)

void UGMCheatWeapon::ShowBulletInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.ShowBulletInfo");

	UGMCheatWeapon_ShowBulletInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.SetWeaponAttrValue
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatWeapon::SetWeaponAttrValue(const struct FString& AttrName, float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.SetWeaponAttrValue");

	UGMCheatWeapon_SetWeaponAttrValue_Params params;
	params.AttrName = AttrName;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.SetWeaponAttrReloadTable
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)

void UGMCheatWeapon::SetWeaponAttrReloadTable(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.SetWeaponAttrReloadTable");

	UGMCheatWeapon_SetWeaponAttrReloadTable_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.SetShootPveVertify
// (Final, Exec, Native, Public)
// Parameters:
// bool                           IsVertify                      (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatWeapon::SetShootPveVertify(bool IsVertify)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.SetShootPveVertify");

	UGMCheatWeapon_SetShootPveVertify_Params params;
	params.IsVertify = IsVertify;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.SetShootPveDebug
// (Final, Exec, Native, Public)
// Parameters:
// bool                           DebugShootPve                  (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatWeapon::SetShootPveDebug(bool DebugShootPve)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.SetShootPveDebug");

	UGMCheatWeapon_SetShootPveDebug_Params params;
	params.DebugShootPve = DebugShootPve;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.SetAIGenerateArmsRaceWeapon
// (Final, Exec, Native, Public)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatWeapon::SetAIGenerateArmsRaceWeapon(float Distance, int Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.SetAIGenerateArmsRaceWeapon");

	UGMCheatWeapon_SetAIGenerateArmsRaceWeapon_Params params;
	params.Distance = Distance;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.ScopeOut
// (Final, Exec, Native, Public)

void UGMCheatWeapon::ScopeOut()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.ScopeOut");

	UGMCheatWeapon_ScopeOut_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.ScopeIn
// (Final, Exec, Native, Public)

void UGMCheatWeapon::ScopeIn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.ScopeIn");

	UGMCheatWeapon_ScopeIn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.PrintWeaponAllState
// (Final, Exec, Native, Public, BlueprintCallable)

void UGMCheatWeapon::PrintWeaponAllState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.PrintWeaponAllState");

	UGMCheatWeapon_PrintWeaponAllState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.GMSwitchWeaponSpeedScale
// (Final, Exec, Native, Public)
// Parameters:
// float                          SwitchScale                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatWeapon::GMSwitchWeaponSpeedScale(float SwitchScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.GMSwitchWeaponSpeedScale");

	UGMCheatWeapon_GMSwitchWeaponSpeedScale_Params params;
	params.SwitchScale = SwitchScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.GMSetReportWeaponNum
// (Final, Exec, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatWeapon::GMSetReportWeaponNum(int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.GMSetReportWeaponNum");

	UGMCheatWeapon_GMSetReportWeaponNum_Params params;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.EnableCurrentWeaponInfiniteBullets
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatWeapon::EnableCurrentWeaponInfiniteBullets(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.EnableCurrentWeaponInfiniteBullets");

	UGMCheatWeapon_EnableCurrentWeaponInfiniteBullets_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.DebugEnableBulletImpact
// (Final, Exec, Native, Public)
// Parameters:
// int                            bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatWeapon::DebugEnableBulletImpact(int bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.DebugEnableBulletImpact");

	UGMCheatWeapon_DebugEnableBulletImpact_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.CollectAllPlayerWeaponPosInfo
// (Final, Exec, Native, Public)

void UGMCheatWeapon::CollectAllPlayerWeaponPosInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.CollectAllPlayerWeaponPosInfo");

	UGMCheatWeapon_CollectAllPlayerWeaponPosInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.ChangeWeaponFunction
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewWeaponFunction              (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatWeapon::ChangeWeaponFunction(int NewWeaponFunction)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.ChangeWeaponFunction");

	UGMCheatWeapon_ChangeWeaponFunction_Params params;
	params.NewWeaponFunction = NewWeaponFunction;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.ChangeShootWeaponStrValue
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 StrName                        (Parm, ZeroConstructor)
// struct FString                 KeyName                        (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatWeapon::ChangeShootWeaponStrValue(const struct FString& StrName, const struct FString& KeyName, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.ChangeShootWeaponStrValue");

	UGMCheatWeapon_ChangeShootWeaponStrValue_Params params;
	params.StrName = StrName;
	params.KeyName = KeyName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.GMCheatWeapon.ChangeArmsRaceWeaponGroup
// (Final, Exec, Native, Public)
// Parameters:
// int                            WeaponGroupID                  (Parm, ZeroConstructor, IsPlainOldData)

void UGMCheatWeapon::ChangeArmsRaceWeaponGroup(int WeaponGroupID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.ChangeArmsRaceWeaponGroup");

	UGMCheatWeapon_ChangeArmsRaceWeaponGroup_Params params;
	params.WeaponGroupID = WeaponGroupID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.QPSBPLibrary.SwitchUIWidgetShowFromUserWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ContainName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserWidgetName                 (Parm, ZeroConstructor)
// struct FString                 WidgetName                     (Parm, ZeroConstructor)

void UQPSBPLibrary::SwitchUIWidgetShowFromUserWidget(const struct FName& ContainName, const struct FString& UserWidgetName, const struct FString& WidgetName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.QPSBPLibrary.SwitchUIWidgetShowFromUserWidget");

	UQPSBPLibrary_SwitchUIWidgetShowFromUserWidget_Params params;
	params.ContainName = ContainName;
	params.UserWidgetName = UserWidgetName;
	params.WidgetName = WidgetName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.QPSBPLibrary.SwitchUIWidgetShow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ContainName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 WidgetName                     (Parm, ZeroConstructor)

void UQPSBPLibrary::SwitchUIWidgetShow(const struct FName& ContainName, const struct FString& WidgetName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.QPSBPLibrary.SwitchUIWidgetShow");

	UQPSBPLibrary_SwitchUIWidgetShow_Params params;
	params.ContainName = ContainName;
	params.WidgetName = WidgetName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.QPSBPLibrary.SwitchUIContainsShow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)

void UQPSBPLibrary::SwitchUIContainsShow(const struct FName& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.QPSBPLibrary.SwitchUIContainsShow");

	UQPSBPLibrary_SwitchUIContainsShow_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.QPSBPLibrary.IsPublishVersion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UQPSBPLibrary::IsPublishVersion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.QPSBPLibrary.IsPublishVersion");

	UQPSBPLibrary_IsPublishVersion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Development.QPSBPLibrary.GetHZBValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UQPSBPLibrary::GetHZBValue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.QPSBPLibrary.GetHZBValue");

	UQPSBPLibrary_GetHZBValue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Development.QPSBPLibrary.GetDistanceCullingFactor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQPSBPLibrary::GetDistanceCullingFactor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.QPSBPLibrary.GetDistanceCullingFactor");

	UQPSBPLibrary_GetDistanceCullingFactor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Development.VisualDebugComponent.StopContinuous
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TaskId                         (Parm, ZeroConstructor, IsPlainOldData)

void UVisualDebugComponent::StopContinuous(int TaskId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.StopContinuous");

	UVisualDebugComponent_StopContinuous_Params params;
	params.TaskId = TaskId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.RPC_DrawDebug_Text
// (Net, Native, Event, Protected, NetClient)
// Parameters:
// struct FDrawShape_Text         Text                           (ConstParm, Parm, ReferenceParm)

void UVisualDebugComponent::RPC_DrawDebug_Text(const struct FDrawShape_Text& Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.RPC_DrawDebug_Text");

	UVisualDebugComponent_RPC_DrawDebug_Text_Params params;
	params.Text = Text;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.RPC_DrawDebug_StopMultiShapes
// (Net, Native, Event, Protected, NetClient)
// Parameters:
// int                            TaskId                         (Parm, ZeroConstructor, IsPlainOldData)

void UVisualDebugComponent::RPC_DrawDebug_StopMultiShapes(int TaskId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.RPC_DrawDebug_StopMultiShapes");

	UVisualDebugComponent_RPC_DrawDebug_StopMultiShapes_Params params;
	params.TaskId = TaskId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.RPC_DrawDebug_Sphere
// (Net, Native, Event, Protected, NetClient)
// Parameters:
// struct FDrawShape_Sphere       Sphere                         (ConstParm, Parm, ReferenceParm)

void UVisualDebugComponent::RPC_DrawDebug_Sphere(const struct FDrawShape_Sphere& Sphere)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.RPC_DrawDebug_Sphere");

	UVisualDebugComponent_RPC_DrawDebug_Sphere_Params params;
	params.Sphere = Sphere;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.RPC_DrawDebug_MultiShapes
// (Net, Native, Event, Protected, NetClient)
// Parameters:
// TArray<struct FDrawShape_Sphere> Spheres                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<struct FDrawShape_Line> Lines                          (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UVisualDebugComponent::RPC_DrawDebug_MultiShapes(TArray<struct FDrawShape_Sphere> Spheres, TArray<struct FDrawShape_Line> Lines)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.RPC_DrawDebug_MultiShapes");

	UVisualDebugComponent_RPC_DrawDebug_MultiShapes_Params params;
	params.Spheres = Spheres;
	params.Lines = Lines;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.RPC_DrawDebug_Line
// (Net, Native, Event, Protected, NetClient)
// Parameters:
// struct FDrawShape_Line         Line                           (ConstParm, Parm, ReferenceParm)

void UVisualDebugComponent::RPC_DrawDebug_Line(const struct FDrawShape_Line& Line)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.RPC_DrawDebug_Line");

	UVisualDebugComponent_RPC_DrawDebug_Line_Params params;
	params.Line = Line;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.RPC_DrawDebug_Cylinder
// (Net, Native, Event, Protected, NetClient)
// Parameters:
// struct FDrawShape_Cylinder     Cylinder                       (ConstParm, Parm, ReferenceParm)

void UVisualDebugComponent::RPC_DrawDebug_Cylinder(const struct FDrawShape_Cylinder& Cylinder)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.RPC_DrawDebug_Cylinder");

	UVisualDebugComponent_RPC_DrawDebug_Cylinder_Params params;
	params.Cylinder = Cylinder;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.RPC_DrawDebug_Box
// (Net, Native, Event, Protected, NetClient)
// Parameters:
// struct FDrawShape_Box          Box                            (ConstParm, Parm, ReferenceParm)

void UVisualDebugComponent::RPC_DrawDebug_Box(const struct FDrawShape_Box& Box)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.RPC_DrawDebug_Box");

	UVisualDebugComponent_RPC_DrawDebug_Box_Params params;
	params.Box = Box;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.NetMulticast_DrawDebug_Sphere
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FDrawShape_Sphere       Sphere                         (ConstParm, Parm, ReferenceParm)

void UVisualDebugComponent::NetMulticast_DrawDebug_Sphere(const struct FDrawShape_Sphere& Sphere)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.NetMulticast_DrawDebug_Sphere");

	UVisualDebugComponent_NetMulticast_DrawDebug_Sphere_Params params;
	params.Sphere = Sphere;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.NetMulticast_DrawDebug_Line
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FDrawShape_Line         Line                           (ConstParm, Parm, ReferenceParm)

void UVisualDebugComponent::NetMulticast_DrawDebug_Line(const struct FDrawShape_Line& Line)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.NetMulticast_DrawDebug_Line");

	UVisualDebugComponent_NetMulticast_DrawDebug_Line_Params params;
	params.Line = Line;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.NetMulticast_DrawDebug_Cylinder
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FDrawShape_Cylinder     Cylinder                       (ConstParm, Parm, ReferenceParm)

void UVisualDebugComponent::NetMulticast_DrawDebug_Cylinder(const struct FDrawShape_Cylinder& Cylinder)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.NetMulticast_DrawDebug_Cylinder");

	UVisualDebugComponent_NetMulticast_DrawDebug_Cylinder_Params params;
	params.Cylinder = Cylinder;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.NetMulticast_DrawDebug_Box
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FDrawShape_Box          Box                            (ConstParm, Parm, ReferenceParm)

void UVisualDebugComponent::NetMulticast_DrawDebug_Box(const struct FDrawShape_Box& Box)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.NetMulticast_DrawDebug_Box");

	UVisualDebugComponent_NetMulticast_DrawDebug_Box_Params params;
	params.Box = Box;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.MarkContinuousEnd
// (Final, Native, Public, BlueprintCallable)

void UVisualDebugComponent::MarkContinuousEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.MarkContinuousEnd");

	UVisualDebugComponent_MarkContinuousEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.MarkContinuousBegin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVisualDebugComponent::MarkContinuousBegin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.MarkContinuousBegin");

	UVisualDebugComponent_MarkContinuousBegin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Development.VisualDebugComponent.DrawString
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 TextLocation                   (ConstParm, Parm, IsPlainOldData)
// struct FString                 Text                           (Parm, ZeroConstructor)
// class AActor*                  TestBaseActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  TextColor                      (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UVisualDebugComponent::DrawString(const struct FVector& TextLocation, const struct FString& Text, class AActor* TestBaseActor, const struct FColor& TextColor, float Duration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.DrawString");

	UVisualDebugComponent_DrawString_Params params;
	params.TextLocation = TextLocation;
	params.Text = Text;
	params.TestBaseActor = TestBaseActor;
	params.TextColor = TextColor;
	params.Duration = Duration;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.DrawSphere
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Center                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  Color                          (Parm, IsPlainOldData)
// float                          LifeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void UVisualDebugComponent::DrawSphere(const struct FVector& Center, float Radius, const struct FColor& Color, float LifeTime, float Thickness)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.DrawSphere");

	UVisualDebugComponent_DrawSphere_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.Color = Color;
	params.LifeTime = LifeTime;
	params.Thickness = Thickness;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.DrawLine
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FColor                  Color                          (Parm, IsPlainOldData)
// float                          LifeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void UVisualDebugComponent::DrawLine(const struct FVector& Start, const struct FVector& End, const struct FColor& Color, float LifeTime, float Thickness)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.DrawLine");

	UVisualDebugComponent_DrawLine_Params params;
	params.Start = Start;
	params.End = End;
	params.Color = Color;
	params.LifeTime = LifeTime;
	params.Thickness = Thickness;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.DrawCylinder
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (ConstParm, Parm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Segments                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  Color                          (Parm, IsPlainOldData)
// float                          LifeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void UVisualDebugComponent::DrawCylinder(const struct FVector& Start, const struct FVector& End, float Radius, int Segments, const struct FColor& Color, float LifeTime, float Thickness)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.DrawCylinder");

	UVisualDebugComponent_DrawCylinder_Params params;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.Segments = Segments;
	params.Color = Color;
	params.LifeTime = LifeTime;
	params.Thickness = Thickness;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugComponent.DrawBox
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Center                         (ConstParm, Parm, IsPlainOldData)
// struct FVector                 Extent                         (Parm, IsPlainOldData)
// struct FColor                  Color                          (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (ConstParm, Parm, IsPlainOldData)
// float                          LifeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void UVisualDebugComponent::DrawBox(const struct FVector& Center, const struct FVector& Extent, const struct FColor& Color, const struct FRotator& Rotation, float LifeTime, float Thickness)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugComponent.DrawBox");

	UVisualDebugComponent_DrawBox_Params params;
	params.Center = Center;
	params.Extent = Extent;
	params.Color = Color;
	params.Rotation = Rotation;
	params.LifeTime = LifeTime;
	params.Thickness = Thickness;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugLibrary.StopDrawContinuous
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Requester                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TaskId                         (Parm, ZeroConstructor, IsPlainOldData)

void UVisualDebugLibrary::StopDrawContinuous(class APawn* Requester, int TaskId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugLibrary.StopDrawContinuous");

	UVisualDebugLibrary_StopDrawContinuous_Params params;
	params.Requester = Requester;
	params.TaskId = TaskId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugLibrary.MarkContinuousEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Requester                      (Parm, ZeroConstructor, IsPlainOldData)

void UVisualDebugLibrary::MarkContinuousEnd(class APawn* Requester)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugLibrary.MarkContinuousEnd");

	UVisualDebugLibrary_MarkContinuousEnd_Params params;
	params.Requester = Requester;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugLibrary.MarkContinuousBegin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Requester                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVisualDebugLibrary::MarkContinuousBegin(class APawn* Requester)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugLibrary.MarkContinuousBegin");

	UVisualDebugLibrary_MarkContinuousBegin_Params params;
	params.Requester = Requester;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Development.VisualDebugLibrary.DrawText
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APawn*                   Requester                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TextLocation                   (ConstParm, Parm, IsPlainOldData)
// struct FString                 Text                           (Parm, ZeroConstructor)
// class AActor*                  TestBaseActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  Color                          (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UVisualDebugLibrary::DrawText(class APawn* Requester, const struct FVector& TextLocation, const struct FString& Text, class AActor* TestBaseActor, const struct FColor& Color, float Duration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugLibrary.DrawText");

	UVisualDebugLibrary_DrawText_Params params;
	params.Requester = Requester;
	params.TextLocation = TextLocation;
	params.Text = Text;
	params.TestBaseActor = TestBaseActor;
	params.Color = Color;
	params.Duration = Duration;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugLibrary.DrawSphere
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APawn*                   Requester                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (ConstParm, Parm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Segments                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  Color                          (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void UVisualDebugLibrary::DrawSphere(class APawn* Requester, const struct FVector& Center, float Radius, int Segments, const struct FColor& Color, float Duration, float Thickness)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugLibrary.DrawSphere");

	UVisualDebugLibrary_DrawSphere_Params params;
	params.Requester = Requester;
	params.Center = Center;
	params.Radius = Radius;
	params.Segments = Segments;
	params.Color = Color;
	params.Duration = Duration;
	params.Thickness = Thickness;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugLibrary.DrawLine
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APawn*                   Requester                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LineStart                      (ConstParm, Parm, IsPlainOldData)
// struct FVector                 LineEnd                        (ConstParm, Parm, IsPlainOldData)
// struct FColor                  Color                          (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void UVisualDebugLibrary::DrawLine(class APawn* Requester, const struct FVector& LineStart, const struct FVector& LineEnd, const struct FColor& Color, float Duration, float Thickness)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugLibrary.DrawLine");

	UVisualDebugLibrary_DrawLine_Params params;
	params.Requester = Requester;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.Color = Color;
	params.Duration = Duration;
	params.Thickness = Thickness;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugLibrary.DrawCylinder
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APawn*                   Requester                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Segments                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  Color                          (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void UVisualDebugLibrary::DrawCylinder(class APawn* Requester, const struct FVector& Start, const struct FVector& End, float Radius, int Segments, const struct FColor& Color, float Duration, float Thickness)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugLibrary.DrawCylinder");

	UVisualDebugLibrary_DrawCylinder_Params params;
	params.Requester = Requester;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.Segments = Segments;
	params.Color = Color;
	params.Duration = Duration;
	params.Thickness = Thickness;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Development.VisualDebugLibrary.DrawBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APawn*                   Requester                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (ConstParm, Parm, IsPlainOldData)
// struct FVector                 Extent                         (Parm, IsPlainOldData)
// struct FColor                  Color                          (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (ConstParm, Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void UVisualDebugLibrary::DrawBox(class APawn* Requester, const struct FVector& Center, const struct FVector& Extent, const struct FColor& Color, const struct FRotator& Rotation, float Duration, float Thickness)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.VisualDebugLibrary.DrawBox");

	UVisualDebugLibrary_DrawBox_Params params;
	params.Requester = Requester;
	params.Center = Center;
	params.Extent = Extent;
	params.Color = Color;
	params.Rotation = Rotation;
	params.Duration = Duration;
	params.Thickness = Thickness;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

