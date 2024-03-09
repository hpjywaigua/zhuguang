// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:13 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function Creative.CreativeAbilitySystemComponent.UpdateGhostBuildingTransform
// (Final, Native, Private)

void UCreativeAbilitySystemComponent::UpdateGhostBuildingTransform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.UpdateGhostBuildingTransform");

	UCreativeAbilitySystemComponent_UpdateGhostBuildingTransform_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAbilitySystemComponent.SetSnapTargetTransform
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// struct FTransform              SnapTargetTransform            (Parm, OutParm, IsPlainOldData)

void UCreativeAbilitySystemComponent::SetSnapTargetTransform(struct FTransform* SnapTargetTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetSnapTargetTransform");

	UCreativeAbilitySystemComponent_SetSnapTargetTransform_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SnapTargetTransform != nullptr)
		*SnapTargetTransform = params.SnapTargetTransform;
}


// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformScale
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAbilitySystemComponent::SetLuaGhostBuildingTransformScale(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformScale");

	UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformScale_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformRotation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Roll                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAbilitySystemComponent::SetLuaGhostBuildingTransformRotation(float Roll, float Yaw, float Pitch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformRotation");

	UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformRotation_Params params;
	params.Roll = Roll;
	params.Yaw = Yaw;
	params.Pitch = Pitch;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformLocation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAbilitySystemComponent::SetLuaGhostBuildingTransformLocation(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformLocation");

	UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformLocation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAbilitySystemComponent.ReceiveGetSnapTargetTransform
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeAbilitySystemComponent::ReceiveGetSnapTargetTransform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.ReceiveGetSnapTargetTransform");

	UCreativeAbilitySystemComponent_ReceiveGetSnapTargetTransform_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxisZ
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Base                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeAbilitySystemComponent::GetSnappedLocAxisZ(float Loc, float Base)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxisZ");

	UCreativeAbilitySystemComponent_GetSnappedLocAxisZ_Params params;
	params.Loc = Loc;
	params.Base = Base;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxis
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            AxisType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeAbilitySystemComponent::GetSnappedLocAxis(float Value, int AxisType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxis");

	UCreativeAbilitySystemComponent_GetSnappedLocAxis_Params params;
	params.Value = Value;
	params.AxisType = AxisType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetSetupBuildingID
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeAbilitySystemComponent::GetSetupBuildingID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetSetupBuildingID");

	UCreativeAbilitySystemComponent_GetSetupBuildingID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetGhostBuildingTransform
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UCreativeAbilitySystemComponent::GetGhostBuildingTransform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetGhostBuildingTransform");

	UCreativeAbilitySystemComponent_GetGhostBuildingTransform_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetBuildingInstanceID
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeAbilitySystemComponent::GetBuildingInstanceID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetBuildingInstanceID");

	UCreativeAbilitySystemComponent_GetBuildingInstanceID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetBuildDistance
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeAbilitySystemComponent::GetBuildDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetBuildDistance");

	UCreativeAbilitySystemComponent_GetBuildDistance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.SortCanEditParamsObjs
// (Event, Protected, BlueprintEvent)

void UCreativeModeActorInteractionComponent::SortCanEditParamsObjs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.SortCanEditParamsObjs");

	UCreativeModeActorInteractionComponent_SortCanEditParamsObjs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeActorInteractionComponent.SetCrossHairTransformObjInstanceID
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeModeActorInteractionComponent::SetCrossHairTransformObjInstanceID(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.SetCrossHairTransformObjInstanceID");

	UCreativeModeActorInteractionComponent_SetCrossHairTransformObjInstanceID_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeActorInteractionComponent.SetCrossHairSelectedObjInstanceID
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeModeActorInteractionComponent::SetCrossHairSelectedObjInstanceID(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.SetCrossHairSelectedObjInstanceID");

	UCreativeModeActorInteractionComponent_SetCrossHairSelectedObjInstanceID_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckIntervalCfg
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetSectorCheckIntervalCfg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckIntervalCfg");

	UCreativeModeActorInteractionComponent_GetSectorCheckIntervalCfg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckDistance
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetSectorCheckDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckDistance");

	UCreativeModeActorInteractionComponent_GetSectorCheckDistance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckAngle
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetSectorCheckAngle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckAngle");

	UCreativeModeActorInteractionComponent_GetSectorCheckAngle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetPlayerHalfHeight
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetPlayerHalfHeight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetPlayerHalfHeight");

	UCreativeModeActorInteractionComponent_GetPlayerHalfHeight_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckIntervalCfg
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetCrossHairCheckIntervalCfg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckIntervalCfg");

	UCreativeModeActorInteractionComponent_GetCrossHairCheckIntervalCfg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckDistanceCfg
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetCrossHairCheckDistanceCfg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckDistanceCfg");

	UCreativeModeActorInteractionComponent_GetCrossHairCheckDistanceCfg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.ClearCanEditParamsObjs
// (Event, Protected, BlueprintEvent)

void UCreativeModeActorInteractionComponent::ClearCanEditParamsObjs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.ClearCanEditParamsObjs");

	UCreativeModeActorInteractionComponent_ClearCanEditParamsObjs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeActorInteractionComponent.AddCanEditObject
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 uCanEditObject                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeActorInteractionComponent::AddCanEditObject(class UObject* uCanEditObject, float Angle, float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.AddCanEditObject");

	UCreativeModeActorInteractionComponent_AddCanEditObject_Params params;
	params.uCanEditObject = uCanEditObject;
	params.Angle = Angle;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAdaptiveSchedulManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeAdaptiveSchedulManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeAdaptiveSchedulManager* UCreativeAdaptiveSchedulManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.Get");

	UCreativeAdaptiveSchedulManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAdaptiveSchedulManager.AfterDead
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            SpecType                       (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAdaptiveSchedulManager::AfterDead(int SpecType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.AfterDead");

	UCreativeAdaptiveSchedulManager_AfterDead_Params params;
	params.SpecType = SpecType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAssetManager.ReceiveOnGameStateBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAssetManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.ReceiveOnGameStateBeginPlay");

	UCreativeAssetManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAssetManager.ReceiveInitAssetInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAssetManager::ReceiveInitAssetInfo(int AssetId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.ReceiveInitAssetInfo");

	UCreativeAssetManager_ReceiveInitAssetInfo_Params params;
	params.AssetId = AssetId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAssetManager.OnGameStateBeginPlay
// (Final, Native, Public)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAssetManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.OnGameStateBeginPlay");

	UCreativeAssetManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAssetManager.GetObbyMeshPath
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeAssetManager::GetObbyMeshPath(int AssetId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.GetObbyMeshPath");

	UCreativeAssetManager_GetObbyMeshPath_Params params;
	params.AssetId = AssetId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAssetManager.GetMaterialPath
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            MaterialID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeAssetManager::GetMaterialPath(int MaterialID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.GetMaterialPath");

	UCreativeAssetManager_GetMaterialPath_Params params;
	params.MaterialID = MaterialID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAssetManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeAssetManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeAssetManager* UCreativeAssetManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.Get");

	UCreativeAssetManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAssetManager.AddAssetInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FCreativeAssetInfo      AssetInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UCreativeAssetManager::AddAssetInfo(int AssetId, const struct FCreativeAssetInfo& AssetInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.AddAssetInfo");

	UCreativeAssetManager_AddAssetInfo_Params params;
	params.AssetId = AssetId;
	params.AssetInfo = AssetInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBackpackUtils.ResCanAddToBackpackNum
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBackpackComponent*      BackpackComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            resID                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            AddNum                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeBackpackUtils::ResCanAddToBackpackNum(class UBackpackComponent* BackpackComponent, int resID, int AddNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBackpackUtils.ResCanAddToBackpackNum");

	UCreativeModeBackpackUtils_ResCanAddToBackpackNum_Params params;
	params.BackpackComponent = BackpackComponent;
	params.resID = resID;
	params.AddNum = AddNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBackpackUtils.GetItemMaxCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBackpackComponent*      BackpackComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            resID                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeBackpackUtils::GetItemMaxCount(class UBackpackComponent* BackpackComponent, int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBackpackUtils.GetItemMaxCount");

	UCreativeModeBackpackUtils_GetItemMaxCount_Params params;
	params.BackpackComponent = BackpackComponent;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBackpackUtils.AddAIAvatarItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBackpackComponent*      BackpackComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Pattern                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBackpackUtils::AddAIAvatarItem(class UBackpackComponent* BackpackComponent, int ID, int Color, int Pattern, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBackpackUtils.AddAIAvatarItem");

	UCreativeModeBackpackUtils_AddAIAvatarItem_Params params;
	params.BackpackComponent = BackpackComponent;
	params.ID = ID;
	params.Color = Color;
	params.Pattern = Pattern;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.TransformRevert
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              TransformRelative              (Parm, OutParm, IsPlainOldData)
// struct FTransform              TransformB                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UCreativeModeBlueprintLibrary::TransformRevert(const struct FTransform& TransformB, struct FTransform* TransformRelative)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.TransformRevert");

	UCreativeModeBlueprintLibrary_TransformRevert_Params params;
	params.TransformB = TransformB;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TransformRelative != nullptr)
		*TransformRelative = params.TransformRelative;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.TransformMultiplyBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              Source                         (Parm, OutParm, IsPlainOldData)
// struct FTransform              M                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCreativeModeBlueprintLibrary::TransformMultiplyBy(const struct FTransform& M, struct FTransform* Source)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.TransformMultiplyBy");

	UCreativeModeBlueprintLibrary_TransformMultiplyBy_Params params;
	params.M = M;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Source != nullptr)
		*Source = params.Source;
}


// Function Creative.CreativeModeBlueprintLibrary.TransformBounds
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBoxSphereBounds        Bounds                         (Parm, OutParm, IsPlainOldData)
// struct FTransform              M                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCreativeModeBlueprintLibrary::TransformBounds(const struct FTransform& M, struct FBoxSphereBounds* Bounds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.TransformBounds");

	UCreativeModeBlueprintLibrary_TransformBounds_Params params;
	params.M = M;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Bounds != nullptr)
		*Bounds = params.Bounds;
}


// Function Creative.CreativeModeBlueprintLibrary.ShouldCreatePhysicsState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::ShouldCreatePhysicsState(class UPrimitiveComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ShouldCreatePhysicsState");

	UCreativeModeBlueprintLibrary_ShouldCreatePhysicsState_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.SetStaticMeshMobility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*    StaticMeshComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EComponentMobility> NewMobility                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::SetStaticMeshMobility(class UStaticMeshComponent* StaticMeshComponent, TEnumAsByte<EComponentMobility> NewMobility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetStaticMeshMobility");

	UCreativeModeBlueprintLibrary_SetStaticMeshMobility_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.NewMobility = NewMobility;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SetSpeedOverLimit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::SetSpeedOverLimit(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetSpeedOverLimit");

	UCreativeModeBlueprintLibrary_SetSpeedOverLimit_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SetParticleCullingDistance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UParticleSystemComponent* ParticleSystemComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::SetParticleCullingDistance(class UParticleSystemComponent* ParticleSystemComponent, float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetParticleCullingDistance");

	UCreativeModeBlueprintLibrary_SetParticleCullingDistance_Params params;
	params.ParticleSystemComponent = ParticleSystemComponent;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SetInstanceValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::SetInstanceValue(class UObject* WorldContextObject, const struct FString& InstanceID, const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetInstanceValue");

	UCreativeModeBlueprintLibrary_SetInstanceValue_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InstanceID = InstanceID;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SetCommandLineValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 NewValue                       (Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::SetCommandLineValue(const struct FString& Key, const struct FString& NewValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetCommandLineValue");

	UCreativeModeBlueprintLibrary_SetCommandLineValue_Params params;
	params.Key = Key;
	params.NewValue = NewValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SetCollisionMobility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UShapeComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EComponentMobility> NewMobility                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::SetCollisionMobility(class UShapeComponent* Component, TEnumAsByte<EComponentMobility> NewMobility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetCollisionMobility");

	UCreativeModeBlueprintLibrary_SetCollisionMobility_Params params;
	params.Component = Component;
	params.NewMobility = NewMobility;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SaveAssetStringToFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor)
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::SaveAssetStringToFile(const struct FString& String, const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SaveAssetStringToFile");

	UCreativeModeBlueprintLibrary_SaveAssetStringToFile_Params params;
	params.String = String;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.RenameObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NewName                        (ConstParm, Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::RenameObject(class UObject* Object, const struct FString& NewName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.RenameObject");

	UCreativeModeBlueprintLibrary_RenameObject_Params params;
	params.Object = Object;
	params.NewName = NewName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.RecreatePhysicsState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeModeBlueprintLibrary::RecreatePhysicsState(class UPrimitiveComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.RecreatePhysicsState");

	UCreativeModeBlueprintLibrary_RecreatePhysicsState_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.QuatCross
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                   Quat1                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FQuat                   Quat2                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UCreativeModeBlueprintLibrary::QuatCross(const struct FQuat& Quat1, const struct FQuat& Quat2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.QuatCross");

	UCreativeModeBlueprintLibrary_QuatCross_Params params;
	params.Quat1 = Quat1;
	params.Quat2 = Quat2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.ProjectSavedDir
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::ProjectSavedDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ProjectSavedDir");

	UCreativeModeBlueprintLibrary_ProjectSavedDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.PopulateParticleProperties
// (Final, Native, Static, Public)
// Parameters:
// class UParticleSystemComponent* ParticleSystemComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeModeBlueprintLibrary::PopulateParticleProperties(class UParticleSystemComponent* ParticleSystemComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.PopulateParticleProperties");

	UCreativeModeBlueprintLibrary_PopulateParticleProperties_Params params;
	params.ParticleSystemComponent = ParticleSystemComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.MinAreaRectangle
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         InPoints                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 SampleSurfaceNormal            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 OutRectCenter                  (Parm, OutParm, IsPlainOldData)
// struct FRotator                OutRectRotation                (Parm, OutParm, IsPlainOldData)
// float                          OutRectLengthX                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutRectLengthY                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bDebugDraw                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    PolyVertIndices                (Parm, OutParm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::MinAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InPoints, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FRotator* OutRectRotation, float* OutRectLengthX, float* OutRectLengthY, struct FVector* OutRectCenter, TArray<int>* PolyVertIndices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.MinAreaRectangle");

	UCreativeModeBlueprintLibrary_MinAreaRectangle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InPoints = InPoints;
	params.SampleSurfaceNormal = SampleSurfaceNormal;
	params.bDebugDraw = bDebugDraw;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRectCenter != nullptr)
		*OutRectCenter = params.OutRectCenter;
	if (OutRectRotation != nullptr)
		*OutRectRotation = params.OutRectRotation;
	if (OutRectLengthX != nullptr)
		*OutRectLengthX = params.OutRectLengthX;
	if (OutRectLengthY != nullptr)
		*OutRectLengthY = params.OutRectLengthY;
	if (PolyVertIndices != nullptr)
		*PolyVertIndices = params.PolyVertIndices;
}


// Function Creative.CreativeModeBlueprintLibrary.MD5HashByteArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          inArray                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::MD5HashByteArray(TArray<unsigned char> inArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.MD5HashByteArray");

	UCreativeModeBlueprintLibrary_MD5HashByteArray_Params params;
	params.inArray = inArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.MD5HashAnsiString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 str                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::MD5HashAnsiString(const struct FString& str)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.MD5HashAnsiString");

	UCreativeModeBlueprintLibrary_MD5HashAnsiString_Params params;
	params.str = str;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.LoadAssetFileToString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::LoadAssetFileToString(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.LoadAssetFileToString");

	UCreativeModeBlueprintLibrary_LoadAssetFileToString_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.IsPhysicsStateCreated
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::IsPhysicsStateCreated(class UPrimitiveComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsPhysicsStateCreated");

	UCreativeModeBlueprintLibrary_IsPhysicsStateCreated_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.IsPersistentModeEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::IsPersistentModeEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsPersistentModeEnabled");

	UCreativeModeBlueprintLibrary_IsPersistentModeEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.IsOfflineBuild
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::IsOfflineBuild()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsOfflineBuild");

	UCreativeModeBlueprintLibrary_IsOfflineBuild_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.IsCreativeMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::IsCreativeMode(class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsCreativeMode");

	UCreativeModeBlueprintLibrary_IsCreativeMode_Params params;
	params.World = World;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.IgnoreClientMovementErrorChecksAndCorrection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ACharacter*              Charcter                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsIgnore                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::IgnoreClientMovementErrorChecksAndCorrection(class ACharacter* Charcter, bool bIsIgnore)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IgnoreClientMovementErrorChecksAndCorrection");

	UCreativeModeBlueprintLibrary_IgnoreClientMovementErrorChecksAndCorrection_Params params;
	params.Charcter = Charcter;
	params.bIsIgnore = bIsIgnore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.GetUrlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::GetUrlValue(class UObject* WorldContext, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetUrlValue");

	UCreativeModeBlueprintLibrary_GetUrlValue_Params params;
	params.WorldContext = WorldContext;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetRTValidMaxArea
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*  TextureTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeBlueprintLibrary::GetRTValidMaxArea(class UTextureRenderTarget2D* TextureTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetRTValidMaxArea");

	UCreativeModeBlueprintLibrary_GetRTValidMaxArea_Params params;
	params.TextureTarget = TextureTarget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetReplicateAddDataArrayVaildNum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FReplicateAddDataArray  ReplicateAddDataArray          (ConstParm, Parm, OutParm, ReferenceParm)
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeBlueprintLibrary::GetReplicateAddDataArrayVaildNum(class UObject* WorldContextObject, const struct FReplicateAddDataArray& ReplicateAddDataArray, int StartIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetReplicateAddDataArrayVaildNum");

	UCreativeModeBlueprintLibrary_GetReplicateAddDataArrayVaildNum_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ReplicateAddDataArray = ReplicateAddDataArray;
	params.StartIndex = StartIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetObjectScreenPos
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FVector2D               Pos                            (Parm, OutParm, IsPlainOldData)

void UCreativeModeBlueprintLibrary::GetObjectScreenPos(class UObject* WorldContextObject, const struct FString& InstanceID, struct FVector2D* Pos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetObjectScreenPos");

	UCreativeModeBlueprintLibrary_GetObjectScreenPos_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Pos != nullptr)
		*Pos = params.Pos;
}


// Function Creative.CreativeModeBlueprintLibrary.GetObjectMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FString, class UObject*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FString, class UObject*> UCreativeModeBlueprintLibrary::GetObjectMap(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetObjectMap");

	UCreativeModeBlueprintLibrary_GetObjectMap_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetGameTypeAsString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECreativeModeGameType          GameType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::GetGameTypeAsString(ECreativeModeGameType GameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetGameTypeAsString");

	UCreativeModeBlueprintLibrary_GetGameTypeAsString_Params params;
	params.GameType = GameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetDataConttentByInstanceDataContent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FCreativeInstanceDataContent InstanceDataContent            (Parm, OutParm)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UCreativeModeBlueprintLibrary::GetDataConttentByInstanceDataContent(struct FCreativeInstanceDataContent* InstanceDataContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetDataConttentByInstanceDataContent");

	UCreativeModeBlueprintLibrary_GetDataConttentByInstanceDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceDataContent != nullptr)
		*InstanceDataContent = params.InstanceDataContent;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetContentPatchData
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          OldData                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          DiffData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          outNewData                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::GetContentPatchData(TArray<unsigned char> OldData, TArray<unsigned char> DiffData, TArray<unsigned char>* outNewData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetContentPatchData");

	UCreativeModeBlueprintLibrary_GetContentPatchData_Params params;
	params.OldData = OldData;
	params.DiffData = DiffData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (outNewData != nullptr)
		*outNewData = params.outNewData;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetContentDiffData
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          OldData                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          NewData                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          outDiffData                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::GetContentDiffData(TArray<unsigned char> OldData, TArray<unsigned char> NewData, TArray<unsigned char>* outDiffData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetContentDiffData");

	UCreativeModeBlueprintLibrary_GetContentDiffData_Params params;
	params.OldData = OldData;
	params.NewData = NewData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (outDiffData != nullptr)
		*outDiffData = params.outDiffData;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetCommandLineValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::GetCommandLineValue(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetCommandLineValue");

	UCreativeModeBlueprintLibrary_GetCommandLineValue_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetBoundingBoxOfInstances
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         Ids                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, OutParm, IsPlainOldData)

void UCreativeModeBlueprintLibrary::GetBoundingBoxOfInstances(class UObject* WorldContext, TArray<struct FString> Ids, float Yaw, struct FVector* Center, struct FVector* BoxExtent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetBoundingBoxOfInstances");

	UCreativeModeBlueprintLibrary_GetBoundingBoxOfInstances_Params params;
	params.WorldContext = WorldContext;
	params.Ids = Ids;
	params.Yaw = Yaw;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Center != nullptr)
		*Center = params.Center;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}


// Function Creative.CreativeModeBlueprintLibrary.GetBoundingBoxOfActors
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, OutParm, IsPlainOldData)

void UCreativeModeBlueprintLibrary::GetBoundingBoxOfActors(TArray<class AActor*> Actors, float Yaw, struct FVector* Center, struct FVector* BoxExtent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetBoundingBoxOfActors");

	UCreativeModeBlueprintLibrary_GetBoundingBoxOfActors_Params params;
	params.Actors = Actors;
	params.Yaw = Yaw;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Center != nullptr)
		*Center = params.Center;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}


// Function Creative.CreativeModeBlueprintLibrary.GetAllInstanceInScreenBox
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            CheckDistance                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            CountLimit                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UCreativeModeBlueprintLibrary::GetAllInstanceInScreenBox(class UObject* WorldContext, const struct FVector2D& Start, const struct FVector2D& End, int CheckDistance, int CountLimit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetAllInstanceInScreenBox");

	UCreativeModeBlueprintLibrary_GetAllInstanceInScreenBox_Params params;
	params.WorldContext = WorldContext;
	params.Start = Start;
	params.End = End;
	params.CheckDistance = CheckDistance;
	params.CountLimit = CountLimit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetAllInstanceInBox
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Extent                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                Rotator                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UCreativeModeBlueprintLibrary::GetAllInstanceInBox(class UObject* WorldContext, const struct FVector& Center, const struct FVector& Extent, const struct FRotator& Rotator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetAllInstanceInBox");

	UCreativeModeBlueprintLibrary_GetAllInstanceInBox_Params params;
	params.WorldContext = WorldContext;
	params.Center = Center;
	params.Extent = Extent;
	params.Rotator = Rotator;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetActorMeshBoundsByTag
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, OutParm, IsPlainOldData)
// struct FString                 IgnoreTag                      (Parm, ZeroConstructor)
// struct FString                 IncludeTag                     (Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::GetActorMeshBoundsByTag(class AActor* Actor, const struct FString& IgnoreTag, const struct FString& IncludeTag, struct FVector* Origin, struct FVector* BoxExtent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetActorMeshBoundsByTag");

	UCreativeModeBlueprintLibrary_GetActorMeshBoundsByTag_Params params;
	params.Actor = Actor;
	params.IgnoreTag = IgnoreTag;
	params.IncludeTag = IncludeTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}


// Function Creative.CreativeModeBlueprintLibrary.GenerateUIntGuid
// (Final, Native, Static, Public)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UCreativeModeBlueprintLibrary::GenerateUIntGuid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GenerateUIntGuid");

	UCreativeModeBlueprintLibrary_GenerateUIntGuid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GenerateGuid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::GenerateGuid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GenerateGuid");

	UCreativeModeBlueprintLibrary_GenerateGuid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.DrawLine
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           InContext                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector2D               Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FLinearColor            LineColor                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            LayerOffset                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          LineThickness                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAntiAlias                     (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::DrawLine(const struct FPaintContext& InContext, const struct FVector2D& Start, const struct FVector2D& End, const struct FLinearColor& LineColor, int LayerOffset, float LineThickness, bool bAntiAlias)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DrawLine");

	UCreativeModeBlueprintLibrary_DrawLine_Params params;
	params.InContext = InContext;
	params.Start = Start;
	params.End = End;
	params.LineColor = LineColor;
	params.LayerOffset = LayerOffset;
	params.LineThickness = LineThickness;
	params.bAntiAlias = bAntiAlias;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.DrawGrids
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           InContext                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                          CellSize                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            CellCountX                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            CellCountY                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosOffsetX                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosOffsetY                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          LineThickness                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAntiAlias                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerOffset                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::DrawGrids(const struct FPaintContext& InContext, float CellSize, int CellCountX, int CellCountY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, float LineThickness, bool bAntiAlias, int LayerOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DrawGrids");

	UCreativeModeBlueprintLibrary_DrawGrids_Params params;
	params.InContext = InContext;
	params.CellSize = CellSize;
	params.CellCountX = CellCountX;
	params.CellCountY = CellCountY;
	params.PosOffsetX = PosOffsetX;
	params.PosOffsetY = PosOffsetY;
	params.LineColor = LineColor;
	params.LineThickness = LineThickness;
	params.bAntiAlias = bAntiAlias;
	params.LayerOffset = LayerOffset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.DrawGridCell
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           InContext                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                          CellSize                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            CellIndexX                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            CellIndexY                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosOffsetX                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosOffsetY                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            LayerOffset                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::DrawGridCell(const struct FPaintContext& InContext, float CellSize, int CellIndexX, int CellIndexY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, int LayerOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DrawGridCell");

	UCreativeModeBlueprintLibrary_DrawGridCell_Params params;
	params.InContext = InContext;
	params.CellSize = CellSize;
	params.CellIndexX = CellIndexX;
	params.CellIndexY = CellIndexY;
	params.PosOffsetX = PosOffsetX;
	params.PosOffsetY = PosOffsetY;
	params.LineColor = LineColor;
	params.LayerOffset = LayerOffset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.DestroyInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::DestroyInstance(class UObject* WorldContextObject, const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DestroyInstance");

	UCreativeModeBlueprintLibrary_DestroyInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.CreativeInstanceDataContent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          DataContent                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FCreativeInstanceDataContent ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCreativeInstanceDataContent UCreativeModeBlueprintLibrary::CreativeInstanceDataContent(TArray<unsigned char> DataContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.CreativeInstanceDataContent");

	UCreativeModeBlueprintLibrary_CreativeInstanceDataContent_Params params;
	params.DataContent = DataContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.ClearGrassByMaskTexture
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              MaskTexture                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               WorldStart                     (Parm, IsPlainOldData)
// struct FVector2D               WorldEnd                       (Parm, IsPlainOldData)

void UCreativeModeBlueprintLibrary::ClearGrassByMaskTexture(class UObject* WorldContextObject, class UTexture2D* MaskTexture, const struct FVector2D& WorldStart, const struct FVector2D& WorldEnd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ClearGrassByMaskTexture");

	UCreativeModeBlueprintLibrary_ClearGrassByMaskTexture_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MaskTexture = MaskTexture;
	params.WorldStart = WorldStart;
	params.WorldEnd = WorldEnd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.BoxOverlapComponents
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxPos                         (ConstParm, Parm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, IsPlainOldData)
// TArray<int>                    ObjectTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  CompClassFilter                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UPrimitiveComponent*> OutComps                       (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::BoxOverlapComponents(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<int> ObjectTypes, class UClass* CompClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComps)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.BoxOverlapComponents");

	UCreativeModeBlueprintLibrary_BoxOverlapComponents_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BoxPos = BoxPos;
	params.BoxExtent = BoxExtent;
	params.ObjectTypes = ObjectTypes;
	params.CompClassFilter = CompClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutComps != nullptr)
		*OutComps = params.OutComps;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.BoxOverlapActors
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxPos                         (ConstParm, Parm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, IsPlainOldData)
// TArray<int>                    ObjectTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  ActorClassFilter               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::BoxOverlapActors(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<int> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.BoxOverlapActors");

	UCreativeModeBlueprintLibrary_BoxOverlapActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BoxPos = BoxPos;
	params.BoxExtent = BoxExtent;
	params.ObjectTypes = ObjectTypes;
	params.ActorClassFilter = ActorClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.BeginDeferredActorSpawnWithName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// ESpawnActorCollisionHandlingMethod CollisionHandlingOverride      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UCreativeModeBlueprintLibrary::BeginDeferredActorSpawnWithName(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, const struct FName& Name, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.BeginDeferredActorSpawnWithName");

	UCreativeModeBlueprintLibrary_BeginDeferredActorSpawnWithName_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.SpawnTransform = SpawnTransform;
	params.Name = Name;
	params.CollisionHandlingOverride = CollisionHandlingOverride;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.AttachOutlineBox
// (Final, Native, Static, Public)
// Parameters:
// class AActor*                  AttachedActor                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OutlineBox                     (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::AttachOutlineBox(class AActor* AttachedActor, float Yaw, class AActor* OutlineBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AttachOutlineBox");

	UCreativeModeBlueprintLibrary_AttachOutlineBox_Params params;
	params.AttachedActor = AttachedActor;
	params.Yaw = Yaw;
	params.OutlineBox = OutlineBox;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.AttachInstanceOutlineBox
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 AttachedId                     (Parm, ZeroConstructor)
// bool                           bGridEnable                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OutlineBox                     (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::AttachInstanceOutlineBox(const struct FString& AttachedId, bool bGridEnable, float Yaw, class AActor* OutlineBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AttachInstanceOutlineBox");

	UCreativeModeBlueprintLibrary_AttachInstanceOutlineBox_Params params;
	params.AttachedId = AttachedId;
	params.bGridEnable = bGridEnable;
	params.Yaw = Yaw;
	params.OutlineBox = OutlineBox;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.AttachGroupOutlineBox
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class AActor*                  GroupObject                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          AttachedActors                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OutlineBox                     (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::AttachGroupOutlineBox(class AActor* GroupObject, TArray<class AActor*> AttachedActors, float Yaw, class AActor* OutlineBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AttachGroupOutlineBox");

	UCreativeModeBlueprintLibrary_AttachGroupOutlineBox_Params params;
	params.GroupObject = GroupObject;
	params.AttachedActors = AttachedActors;
	params.Yaw = Yaw;
	params.OutlineBox = OutlineBox;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.AttachGroupInstanceOutlineBox
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 GroupID                        (Parm, ZeroConstructor)
// TArray<struct FString>         ChildrenIds                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<struct FString, struct FTransform> ChildrenTransforms             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bGridEnable                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OutlineBox                     (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::AttachGroupInstanceOutlineBox(const struct FString& GroupID, TArray<struct FString> ChildrenIds, TMap<struct FString, struct FTransform> ChildrenTransforms, bool bGridEnable, float Yaw, class AActor* OutlineBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AttachGroupInstanceOutlineBox");

	UCreativeModeBlueprintLibrary_AttachGroupInstanceOutlineBox_Params params;
	params.GroupID = GroupID;
	params.ChildrenIds = ChildrenIds;
	params.ChildrenTransforms = ChildrenTransforms;
	params.bGridEnable = bGridEnable;
	params.Yaw = Yaw;
	params.OutlineBox = OutlineBox;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.AddOnScreenDebugMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Msg                            (ConstParm, Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::AddOnScreenDebugMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AddOnScreenDebugMessage");

	UCreativeModeBlueprintLibrary_AddOnScreenDebugMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCustomParameterManager.RemoveCustomParameter
// (Final, Native, Public)
// Parameters:
// uint32_t                       ParameterID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeCustomParameterManager::RemoveCustomParameter(uint32_t ParameterID, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.RemoveCustomParameter");

	UCreativeCustomParameterManager_RemoveCustomParameter_Params params;
	params.ParameterID = ParameterID;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCustomParameterManager.ReceiveOnGameStateBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeCustomParameterManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.ReceiveOnGameStateBeginPlay");

	UCreativeCustomParameterManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCustomParameterManager.OnGameStateBeginPlay
// (Final, Native, Protected)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeCustomParameterManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.OnGameStateBeginPlay");

	UCreativeCustomParameterManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCustomParameterManager.GetCustomParameterDataNodes
// (Final, Native, Public, HasOutParms)
// Parameters:
// uint32_t                       ParameterID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FCreativeCustomParameterDataNode> OutCustomParameterDataNodes    (Parm, OutParm, ZeroConstructor)

void UCreativeCustomParameterManager::GetCustomParameterDataNodes(uint32_t ParameterID, TArray<struct FCreativeCustomParameterDataNode>* OutCustomParameterDataNodes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.GetCustomParameterDataNodes");

	UCreativeCustomParameterManager_GetCustomParameterDataNodes_Params params;
	params.ParameterID = ParameterID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutCustomParameterDataNodes != nullptr)
		*OutCustomParameterDataNodes = params.OutCustomParameterDataNodes;
}


// Function Creative.CreativeCustomParameterManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeCustomParameterManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeCustomParameterManager* UCreativeCustomParameterManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.Get");

	UCreativeCustomParameterManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeCustomParameterManager.ChangeCustomParameter
// (Final, Native, Public, HasOutParms)
// Parameters:
// uint32_t                       ParameterID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int8_t                         TeamID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          DataContent                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeCustomParameterManager::ChangeCustomParameter(uint32_t ParameterID, uint32_t PlayerKey, int8_t TeamID, TArray<unsigned char> DataContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.ChangeCustomParameter");

	UCreativeCustomParameterManager_ChangeCustomParameter_Params params;
	params.ParameterID = ParameterID;
	params.PlayerKey = PlayerKey;
	params.TeamID = TeamID;
	params.DataContent = DataContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCustomParameterManager.AddCustomParameter
// (Final, Native, Public, HasOutParms)
// Parameters:
// uint32_t                       ParameterID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int8_t                         TeamID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          DataContent                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bPropagateToChildren           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeCustomParameterManager::AddCustomParameter(uint32_t ParameterID, uint32_t PlayerKey, int8_t TeamID, TArray<unsigned char> DataContent, bool bPropagateToChildren)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.AddCustomParameter");

	UCreativeCustomParameterManager_AddCustomParameter_Params params;
	params.ParameterID = ParameterID;
	params.PlayerKey = PlayerKey;
	params.TeamID = TeamID;
	params.DataContent = DataContent;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCustomPrefabComponent.GetNodeSegmentContent
// (Final, Native, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCreativePrefabDataSegment Segment                        (Parm, OutParm)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UCreativeCustomPrefabComponent::GetNodeSegmentContent(struct FCreativePrefabDataSegment* Segment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomPrefabComponent.GetNodeSegmentContent");

	UCreativeCustomPrefabComponent_GetNodeSegmentContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Segment != nullptr)
		*Segment = params.Segment;

	return params.ReturnValue;
}


// Function Creative.CreativeCustomPrefabComponent.AddInstanceDataContent
// (Final, Native, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCreativeCustomPrefabDataSegment Segment                        (Parm, OutParm)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeCustomPrefabComponent::AddInstanceDataContent(TArray<unsigned char> Content, struct FCreativeCustomPrefabDataSegment* Segment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomPrefabComponent.AddInstanceDataContent");

	UCreativeCustomPrefabComponent_AddInstanceDataContent_Params params;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Segment != nullptr)
		*Segment = params.Segment;

	return params.ReturnValue;
}


// Function Creative.CreativeModeLiteComponent.OnReturnToPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       RecycledSeq                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeLiteComponent::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLiteComponent.OnReturnToPool");

	UCreativeModeLiteComponent_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeLiteComponent.GetObjectFromPool
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            PoolID                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, OutParm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeModeLiteComponent::GetObjectFromPool(int PoolID, class UObject* NewOuter, struct FString* InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLiteComponent.GetObjectFromPool");

	UCreativeModeLiteComponent_GetObjectFromPool_Params params;
	params.PoolID = PoolID;
	params.NewOuter = NewOuter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InName != nullptr)
		*InName = params.InName;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameModeBaseComponent.SetGameStateComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCreativeModeGameStateBaseComponent* NewGameStateComponent          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGameModeBaseComponent::SetGameStateComponent(class UCreativeModeGameStateBaseComponent* NewGameStateComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.SetGameStateComponent");

	UCreativeModeGameModeBaseComponent_SetGameStateComponent_Params params;
	params.NewGameStateComponent = NewGameStateComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameModeBaseComponent.ReceivePostInitializeComponents
// (Event, Public, BlueprintEvent)

void UCreativeModeGameModeBaseComponent::ReceivePostInitializeComponents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.ReceivePostInitializeComponents");

	UCreativeModeGameModeBaseComponent_ReceivePostInitializeComponents_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameModeBaseComponent.GetGameType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECreativeModeGameType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeGameType UCreativeModeGameModeBaseComponent::GetGameType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.GetGameType");

	UCreativeModeGameModeBaseComponent_GetGameType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameModeBaseComponent.GetGameMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ACreativeModeGameMode*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACreativeModeGameMode* UCreativeModeGameModeBaseComponent::GetGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.GetGameMode");

	UCreativeModeGameModeBaseComponent_GetGameMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameModeBaseComponent.FindPlayerStartOverride
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 IncomingName                   (Parm, ZeroConstructor)
// bool                           bIsRevive                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UCreativeModeGameModeBaseComponent::FindPlayerStartOverride(class AController* Player, const struct FString& IncomingName, bool bIsRevive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.FindPlayerStartOverride");

	UCreativeModeGameModeBaseComponent_FindPlayerStartOverride_Params params;
	params.Player = Player;
	params.IncomingName = IncomingName;
	params.bIsRevive = bIsRevive;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.UnregisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Destroy                        (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.UnregisterLiteComponent");

	ACreativeModeEditorObject_UnregisterLiteComponent_Params params;
	params.Component = Component;
	params.Destroy = Destroy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ShowSelectedEffect
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           ShowEff                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OutlineColor                   (Parm, IsPlainOldData)
// float                          OutlineThickness               (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::ShowSelectedEffect(bool ShowEff, const struct FLinearColor& OutlineColor, float OutlineThickness)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ShowSelectedEffect");

	ACreativeModeEditorObject_ShowSelectedEffect_Params params;
	params.ShowEff = ShowEff;
	params.OutlineColor = OutlineColor;
	params.OutlineThickness = OutlineThickness;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ShowOutlineEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ShowEff                        (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstance*       Material                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 IgnoreTag                      (Parm, ZeroConstructor)

void ACreativeModeEditorObject::ShowOutlineEffect(bool ShowEff, class UMaterialInstance* Material, const struct FString& IgnoreTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ShowOutlineEffect");

	ACreativeModeEditorObject_ShowOutlineEffect_Params params;
	params.ShowEff = ShowEff;
	params.Material = Material;
	params.IgnoreTag = IgnoreTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.SetPhotographyMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsCapturing                   (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::SetPhotographyMode(bool bIsCapturing)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.SetPhotographyMode");

	ACreativeModeEditorObject_SetPhotographyMode_Params params;
	params.bIsCapturing = bIsCapturing;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.SetLiteComponentTickEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::SetLiteComponentTickEnable(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.SetLiteComponentTickEnable");

	ACreativeModeEditorObject_SetLiteComponentTickEnable_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.SetActorState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECreativeModeActorState        NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::SetActorState(ECreativeModeActorState NewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.SetActorState");

	ACreativeModeEditorObject_SetActorState_Params params;
	params.NewState = NewState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ReturnObjectToPool
// (Native, Public)
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::ReturnObjectToPool(class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReturnObjectToPool");

	ACreativeModeEditorObject_ReturnObjectToPool_Params params;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ReturnObjectsToPool
// (Native, Public)
// Parameters:
// TArray<class UObject*>         Objs                           (Parm, ZeroConstructor)

void ACreativeModeEditorObject::ReturnObjectsToPool(TArray<class UObject*> Objs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReturnObjectsToPool");

	ACreativeModeEditorObject_ReturnObjectsToPool_Params params;
	params.Objs = Objs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.RegisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.RegisterLiteComponent");

	ACreativeModeEditorObject_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ReceivePostBeginPlay
// (Event, Public, BlueprintEvent)

void ACreativeModeEditorObject::ReceivePostBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceivePostBeginPlay");

	ACreativeModeEditorObject_ReceivePostBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ReceiveIsDedicatedServer
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeEditorObject::ReceiveIsDedicatedServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceiveIsDedicatedServer");

	ACreativeModeEditorObject_ReceiveIsDedicatedServer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.ReceiveInitializeLiteComponent
// (Event, Protected, BlueprintEvent)

void ACreativeModeEditorObject::ReceiveInitializeLiteComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceiveInitializeLiteComponent");

	ACreativeModeEditorObject_ReceiveInitializeLiteComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ReceiveInitCanEditFlag
// (Event, Public, BlueprintEvent)

void ACreativeModeEditorObject::ReceiveInitCanEditFlag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceiveInitCanEditFlag");

	ACreativeModeEditorObject_ReceiveInitCanEditFlag_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ReceiveHasAuthority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeEditorObject::ReceiveHasAuthority()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceiveHasAuthority");

	ACreativeModeEditorObject_ReceiveHasAuthority_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.OnRepActorStateOverride
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECreativeModeActorState        NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::OnRepActorStateOverride(ECreativeModeActorState NewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.OnRepActorStateOverride");

	ACreativeModeEditorObject_OnRepActorStateOverride_Params params;
	params.NewState = NewState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.OnRep_ActorState
// (Final, Native, Public)
// Parameters:
// ECreativeModeActorState        LastState                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::OnRep_ActorState(ECreativeModeActorState LastState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.OnRep_ActorState");

	ACreativeModeEditorObject_OnRep_ActorState_Params params;
	params.LastState = LastState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.InCollisionState
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeEditorObject::InCollisionState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.InCollisionState");

	ACreativeModeEditorObject_InCollisionState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.GetObjectFromPool
// (Native, Public, HasOutParms)
// Parameters:
// int                            PoolID                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, OutParm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* ACreativeModeEditorObject::GetObjectFromPool(int PoolID, class UObject* NewOuter, struct FString* InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.GetObjectFromPool");

	ACreativeModeEditorObject_GetObjectFromPool_Params params;
	params.PoolID = PoolID;
	params.NewOuter = NewOuter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InName != nullptr)
		*InName = params.InName;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.GetActorState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECreativeModeActorState        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeActorState ACreativeModeEditorObject::GetActorState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.GetActorState");

	ACreativeModeEditorObject_GetActorState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.FindLiteComponentByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class ULiteComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULiteComponent* ACreativeModeEditorObject::FindLiteComponentByClass(class UClass* ComponentClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.FindLiteComponentByClass");

	ACreativeModeEditorObject_FindLiteComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameStateBaseComponent.ReceivePostInitializeComponents
// (Event, Public, BlueprintEvent)

void UCreativeModeGameStateBaseComponent::ReceivePostInitializeComponents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateBaseComponent.ReceivePostInitializeComponents");

	UCreativeModeGameStateBaseComponent_ReceivePostInitializeComponents_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateBaseComponent.GetPlayState
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ECreativeModePlayState         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModePlayState UCreativeModeGameStateBaseComponent::GetPlayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateBaseComponent.GetPlayState");

	UCreativeModeGameStateBaseComponent_GetPlayState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameStateBaseComponent.GetGameType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECreativeModeGameType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeGameType UCreativeModeGameStateBaseComponent::GetGameType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateBaseComponent.GetGameType");

	UCreativeModeGameStateBaseComponent_GetGameType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameStateBaseComponent.GetGameState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ACreativeModeGameState*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACreativeModeGameState* UCreativeModeGameStateBaseComponent::GetGameState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateBaseComponent.GetGameState");

	UCreativeModeGameStateBaseComponent_GetGameState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.UnregisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameMode::UnregisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.UnregisterLiteComponent");

	ACreativeModeGameMode_UnregisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.SetLiteComponentTickEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameMode::SetLiteComponentTickEnable(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.SetLiteComponentTickEnable");

	ACreativeModeGameMode_SetLiteComponentTickEnable_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.SetItemGenerate
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameMode::SetItemGenerate(bool bIsOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.SetItemGenerate");

	ACreativeModeGameMode_SetItemGenerate_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.SetCurrentGameType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECreativeModeGameType          NewGameType                    (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameMode::SetCurrentGameType(ECreativeModeGameType NewGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.SetCurrentGameType");

	ACreativeModeGameMode_SetCurrentGameType_Params params;
	params.NewGameType = NewGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.ReInitItemGenerate
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 NewItemClassPath               (Parm, OutParm, ZeroConstructor)

void ACreativeModeGameMode::ReInitItemGenerate(struct FString* NewItemClassPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.ReInitItemGenerate");

	ACreativeModeGameMode_ReInitItemGenerate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewItemClassPath != nullptr)
		*NewItemClassPath = params.NewItemClassPath;
}


// Function Creative.CreativeModeGameMode.RegisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameMode::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.RegisterLiteComponent");

	ACreativeModeGameMode_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.ReceiveInitializeLiteComponent
// (Event, Protected, BlueprintEvent)

void ACreativeModeGameMode::ReceiveInitializeLiteComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.ReceiveInitializeLiteComponent");

	ACreativeModeGameMode_ReceiveInitializeLiteComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.IsRestartPlayerUsePawnRotation
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeGameMode::IsRestartPlayerUsePawnRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.IsRestartPlayerUsePawnRotation");

	ACreativeModeGameMode_IsRestartPlayerUsePawnRotation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.GetCurrentModeComponent
// (Final, Native, Public)
// Parameters:
// class UCreativeModeGameModeBaseComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeGameModeBaseComponent* ACreativeModeGameMode::GetCurrentModeComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.GetCurrentModeComponent");

	ACreativeModeGameMode_GetCurrentModeComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamNum
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACreativeModeGameMode::GetCreativeModeRealTeamNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamNum");

	ACreativeModeGameMode_GetCreativeModeRealTeamNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamIDs
// (Final, Native, Public)
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> ACreativeModeGameMode::GetCreativeModeRealTeamIDs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamIDs");

	ACreativeModeGameMode_GetCreativeModeRealTeamIDs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.FindLiteComponentByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class ULiteComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULiteComponent* ACreativeModeGameMode::FindLiteComponentByClass(class UClass* ComponentClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.FindLiteComponentByClass");

	ACreativeModeGameMode_FindLiteComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.CreativeModeFindPlayerStart
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 IncomingName                   (Parm, ZeroConstructor)
// bool                           bIsRevive                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ACreativeModeGameMode::CreativeModeFindPlayerStart(class AController* Player, const struct FString& IncomingName, bool bIsRevive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.CreativeModeFindPlayerStart");

	ACreativeModeGameMode_CreativeModeFindPlayerStart_Params params;
	params.Player = Player;
	params.IncomingName = IncomingName;
	params.bIsRevive = bIsRevive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameModeComponent.ReceiveCallPlayStateFunction
// (Event, Public, BlueprintEvent)

void UCreativeModeGameModeComponent::ReceiveCallPlayStateFunction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeComponent.ReceiveCallPlayStateFunction");

	UCreativeModeGameModeComponent_ReceiveCallPlayStateFunction_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.UnregisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Destroy                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGameObject::UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.UnregisterLiteComponent");

	UCreativeModeGameObject_UnregisterLiteComponent_Params params;
	params.Component = Component;
	params.Destroy = Destroy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.RegisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGameObject::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.RegisterLiteComponent");

	UCreativeModeGameObject_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.ReceivePostBeginPlay
// (Event, Protected, BlueprintEvent)

void UCreativeModeGameObject::ReceivePostBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceivePostBeginPlay");

	UCreativeModeGameObject_ReceivePostBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.ReceiveIsDedicatedServer
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGameObject::ReceiveIsDedicatedServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceiveIsDedicatedServer");

	UCreativeModeGameObject_ReceiveIsDedicatedServer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameObject.ReceiveHasAuthority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGameObject::ReceiveHasAuthority()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceiveHasAuthority");

	UCreativeModeGameObject_ReceiveHasAuthority_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameObject.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)

void UCreativeModeGameObject::ReceiveEndPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceiveEndPlay");

	UCreativeModeGameObject_ReceiveEndPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void UCreativeModeGameObject::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceiveBeginPlay");

	UCreativeModeGameObject_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.GetObjectFromPool
// (Native, Public, HasOutParms)
// Parameters:
// int                            PoolID                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, OutParm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeModeGameObject::GetObjectFromPool(int PoolID, class UObject* NewOuter, struct FString* InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.GetObjectFromPool");

	UCreativeModeGameObject_GetObjectFromPool_Params params;
	params.PoolID = PoolID;
	params.NewOuter = NewOuter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InName != nullptr)
		*InName = params.InName;

	return params.ReturnValue;
}


// Function Creative.CreativeGameParameterManager.RemoveGameParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (ConstParm, Parm, ZeroConstructor)

void UCreativeGameParameterManager::RemoveGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.RemoveGameParameter");

	UCreativeGameParameterManager_RemoveGameParameter_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGameParameterManager.ReceiveOnGameStateBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeGameParameterManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.ReceiveOnGameStateBeginPlay");

	UCreativeGameParameterManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGameParameterManager.OnReceivePreGameParameterRemove
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (Parm, ZeroConstructor)

void UCreativeGameParameterManager::OnReceivePreGameParameterRemove(const struct FString& ParameterKey, const struct FString& TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.OnReceivePreGameParameterRemove");

	UCreativeGameParameterManager_OnReceivePreGameParameterRemove_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGameParameterManager.OnReceivePostGameParameterChange
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeGameParameterManager::OnReceivePostGameParameterChange(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.OnReceivePostGameParameterChange");

	UCreativeGameParameterManager_OnReceivePostGameParameterChange_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGameParameterManager.OnReceivePostGameParameterAdd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeGameParameterManager::OnReceivePostGameParameterAdd(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.OnReceivePostGameParameterAdd");

	UCreativeGameParameterManager_OnReceivePostGameParameterAdd_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGameParameterManager.OnGameStateBeginPlay
// (Final, Native, Protected)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeGameParameterManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.OnGameStateBeginPlay");

	UCreativeGameParameterManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGameParameterManager.GetGameParameterContent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (ConstParm, Parm, ZeroConstructor)
// TArray<unsigned char>          OutContent                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGameParameterManager::GetGameParameterContent(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char>* OutContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.GetGameParameterContent");

	UCreativeGameParameterManager_GetGameParameterContent_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutContent != nullptr)
		*OutContent = params.OutContent;

	return params.ReturnValue;
}


// Function Creative.CreativeGameParameterManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeGameParameterManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeGameParameterManager* UCreativeGameParameterManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.Get");

	UCreativeGameParameterManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGameParameterManager.ChangeGameParameter
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (ConstParm, Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeGameParameterManager::ChangeGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.ChangeGameParameter");

	UCreativeGameParameterManager_ChangeGameParameter_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGameParameterManager.AddGameParameter
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (ConstParm, Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeGameParameterManager::AddGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.AddGameParameter");

	UCreativeGameParameterManager_AddGameParameter_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.UnregisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::UnregisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.UnregisterLiteComponent");

	ACreativeModeGameState_UnregisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.SetLiteComponentTickEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::SetLiteComponentTickEnable(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.SetLiteComponentTickEnable");

	ACreativeModeGameState_SetLiteComponentTickEnable_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.SetCurrentGameType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECreativeModeGameType          NewGameType                    (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::SetCurrentGameType(ECreativeModeGameType NewGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.SetCurrentGameType");

	ACreativeModeGameState_SetCurrentGameType_Params params;
	params.NewGameType = NewGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.RPC_Replay_SetInstanceDataContent
// (Net, Native, Event, Public)
// Parameters:
// uint32_t                       InstanceID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FCreativeInstanceDataContent InstanceDataContent            (Parm)

void ACreativeModeGameState::RPC_Replay_SetInstanceDataContent(uint32_t InstanceID, const struct FCreativeInstanceDataContent& InstanceDataContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.RPC_Replay_SetInstanceDataContent");

	ACreativeModeGameState_RPC_Replay_SetInstanceDataContent_Params params;
	params.InstanceID = InstanceID;
	params.InstanceDataContent = InstanceDataContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.RegisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.RegisterLiteComponent");

	ACreativeModeGameState_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.ReceiveInitializeLiteComponent
// (Event, Protected, BlueprintEvent)

void ACreativeModeGameState::ReceiveInitializeLiteComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ReceiveInitializeLiteComponent");

	ACreativeModeGameState_ReceiveInitializeLiteComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.OnViewportSizeChanged
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct FVector2D               OldViewportSize                (Parm, IsPlainOldData)
// struct FVector2D               NewViewportSize                (Parm, IsPlainOldData)

void ACreativeModeGameState::OnViewportSizeChanged(const struct FVector2D& OldViewportSize, const struct FVector2D& NewViewportSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnViewportSizeChanged");

	ACreativeModeGameState_OnViewportSizeChanged_Params params;
	params.OldViewportSize = OldViewportSize;
	params.NewViewportSize = NewViewportSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.OnRep_InitializeGameType
// (Final, Native, Protected)
// Parameters:
// ECreativeModeGameType          LastInitializeGameType         (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::OnRep_InitializeGameType(ECreativeModeGameType LastInitializeGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_InitializeGameType");

	ACreativeModeGameState_OnRep_InitializeGameType_Params params;
	params.LastInitializeGameType = LastInitializeGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.OnRep_CurrentStateComponent
// (Final, Native, Protected)
// Parameters:
// class UCreativeModeGameStateBaseComponent* LastComponent                  (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::OnRep_CurrentStateComponent(class UCreativeModeGameStateBaseComponent* LastComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_CurrentStateComponent");

	ACreativeModeGameState_OnRep_CurrentStateComponent_Params params;
	params.LastComponent = LastComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.OnRep_CreativeModID
// (Final, Native, Protected)
// Parameters:
// int                            LastCreativeModID              (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::OnRep_CreativeModID(int LastCreativeModID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_CreativeModID");

	ACreativeModeGameState_OnRep_CreativeModID_Params params;
	params.LastCreativeModID = LastCreativeModID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.OnClientRecordingStateChange
// (Final, Native, Public)
// Parameters:
// EClientRecordingType           Type                           (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::OnClientRecordingStateChange(EClientRecordingType Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnClientRecordingStateChange");

	ACreativeModeGameState_OnClientRecordingStateChange_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.IsCreativeEditor
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeGameState::IsCreativeEditor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.IsCreativeEditor");

	ACreativeModeGameState_IsCreativeEditor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.InitCreativeModID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ModID                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::InitCreativeModID(int ModID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.InitCreativeModID");

	ACreativeModeGameState_InitCreativeModID_Params params;
	params.ModID = ModID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.GetPlayState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ECreativeModePlayState         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModePlayState ACreativeModeGameState::GetPlayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetPlayState");

	ACreativeModeGameState_GetPlayState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetIsOfficialGame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeGameState::GetIsOfficialGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetIsOfficialGame");

	ACreativeModeGameState_GetIsOfficialGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetIsEditorMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeGameState::GetIsEditorMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetIsEditorMode");

	ACreativeModeGameState_GetIsEditorMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetIsDemoGame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeGameState::GetIsDemoGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetIsDemoGame");

	ACreativeModeGameState_GetIsDemoGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetIsCreative
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeGameState::GetIsCreative()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetIsCreative");

	ACreativeModeGameState_GetIsCreative_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetInitializeGameType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECreativeModeGameType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeGameType ACreativeModeGameState::GetInitializeGameType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetInitializeGameType");

	ACreativeModeGameState_GetInitializeGameType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetDisableDistanceLevelsOutsideBox
// (Final, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            W                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            L                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> ACreativeModeGameState::GetDisableDistanceLevelsOutsideBox(float X, float Y, int W, int L, float RotationAngle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetDisableDistanceLevelsOutsideBox");

	ACreativeModeGameState_GetDisableDistanceLevelsOutsideBox_Params params;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.L = L;
	params.RotationAngle = RotationAngle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetCurrentStateComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCreativeModeGameStateBaseComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeGameStateBaseComponent* ACreativeModeGameState::GetCurrentStateComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurrentStateComponent");

	ACreativeModeGameState_GetCurrentStateComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetCurrentGameType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECreativeModeGameType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeGameType ACreativeModeGameState::GetCurrentGameType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurrentGameType");

	ACreativeModeGameState_GetCurrentGameType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetCurCreativeModResList
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ACreativeModeGameState::GetCurCreativeModResList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurCreativeModResList");

	ACreativeModeGameState_GetCurCreativeModResList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetCurCreativeModMapID
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ACreativeModeGameState::GetCurCreativeModMapID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurCreativeModMapID");

	ACreativeModeGameState_GetCurCreativeModMapID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetCreativeModID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACreativeModeGameState::GetCreativeModID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCreativeModID");

	ACreativeModeGameState_GetCreativeModID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.FindLiteComponentByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class ULiteComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULiteComponent* ACreativeModeGameState::FindLiteComponentByClass(class UClass* ComponentClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.FindLiteComponentByClass");

	ACreativeModeGameState_FindLiteComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.ClearInstance
// (Final, Native, Public)

void ACreativeModeGameState::ClearInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ClearInstance");

	ACreativeModeGameState_ClearInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.ClearAndReImportInstance
// (Final, Native, Protected)

void ACreativeModeGameState::ClearAndReImportInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ClearAndReImportInstance");

	ACreativeModeGameState_ClearAndReImportInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateComponent.SetPlayState
// (Final, Native, Protected)
// Parameters:
// ECreativeModePlayState         newPlayState                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGameStateComponent::SetPlayState(ECreativeModePlayState newPlayState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.SetPlayState");

	UCreativeModeGameStateComponent_SetPlayState_Params params;
	params.newPlayState = newPlayState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateComponent.OnRep_RuntimePlayerBattleDataObject
// (Final, Native, Protected)

void UCreativeModeGameStateComponent::OnRep_RuntimePlayerBattleDataObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.OnRep_RuntimePlayerBattleDataObject");

	UCreativeModeGameStateComponent_OnRep_RuntimePlayerBattleDataObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateComponent.OnRep_IntegralMechanismComponent
// (Final, Native, Protected)

void UCreativeModeGameStateComponent::OnRep_IntegralMechanismComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.OnRep_IntegralMechanismComponent");

	UCreativeModeGameStateComponent_OnRep_IntegralMechanismComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateComponent.OnRep_CurPlayState
// (Final, Native, Protected)

void UCreativeModeGameStateComponent::OnRep_CurPlayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.OnRep_CurPlayState");

	UCreativeModeGameStateComponent_OnRep_CurPlayState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateComponent.GetPlayState
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// ECreativeModePlayState         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModePlayState UCreativeModeGameStateComponent::GetPlayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.GetPlayState");

	UCreativeModeGameStateComponent_GetPlayState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.UpdateBatchActorInstances
// (Final, Native, Public)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// int                            AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaterialID                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReplaceAll                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeGridLevelsManager::UpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID, bool ReplaceAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.UpdateBatchActorInstances");

	UCreativeGridLevelsManager_UpdateBatchActorInstances_Params params;
	params.GridName = GridName;
	params.AssetId = AssetId;
	params.MaterialID = MaterialID;
	params.ReplaceAll = ReplaceAll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGridLevelsManager.UnLoadGridLevelsBatchActor
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              CellIndex                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCreativeGridLevelsManager::UnLoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.UnLoadGridLevelsBatchActor");

	UCreativeGridLevelsManager_UnLoadGridLevelsBatchActor_Params params;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGridLevelsManager.StaticMeshObjectRelieveBatch
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 InstanceID                     (Parm, OutParm, ZeroConstructor)

void UCreativeGridLevelsManager::StaticMeshObjectRelieveBatch(struct FString* InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.StaticMeshObjectRelieveBatch");

	UCreativeGridLevelsManager_StaticMeshObjectRelieveBatch_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceID != nullptr)
		*InstanceID = params.InstanceID;
}


// Function Creative.CreativeGridLevelsManager.StaticMeshObjectReBatch
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 InstanceID                     (Parm, OutParm, ZeroConstructor)

void UCreativeGridLevelsManager::StaticMeshObjectReBatch(struct FString* InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.StaticMeshObjectReBatch");

	UCreativeGridLevelsManager_StaticMeshObjectReBatch_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceID != nullptr)
		*InstanceID = params.InstanceID;
}


// Function Creative.CreativeGridLevelsManager.RemoveObject
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::RemoveObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.RemoveObject");

	UCreativeGridLevelsManager_RemoveObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.ReceiveRegistInstanceValueListener
// (Event, Public, BlueprintEvent)

void UCreativeGridLevelsManager::ReceiveRegistInstanceValueListener()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ReceiveRegistInstanceValueListener");

	UCreativeGridLevelsManager_ReceiveRegistInstanceValueListener_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGridLevelsManager.ReceiveDelayUpdateBatchActorInstances
// (Final, Native, Public)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// int                            AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaterialID                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReplaceAll                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          MoveForwardTimeStamp           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeGridLevelsManager::ReceiveDelayUpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID, bool ReplaceAll, float MoveForwardTimeStamp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ReceiveDelayUpdateBatchActorInstances");

	UCreativeGridLevelsManager_ReceiveDelayUpdateBatchActorInstances_Params params;
	params.GridName = GridName;
	params.AssetId = AssetId;
	params.MaterialID = MaterialID;
	params.ReplaceAll = ReplaceAll;
	params.MoveForwardTimeStamp = MoveForwardTimeStamp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGridLevelsManager.ReceiveClearAllData
// (Event, Public, BlueprintEvent)

void UCreativeGridLevelsManager::ReceiveClearAllData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ReceiveClearAllData");

	UCreativeGridLevelsManager_ReceiveClearAllData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGridLevelsManager.ReceiveCheckObjectCanBatch
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::ReceiveCheckObjectCanBatch(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ReceiveCheckObjectCanBatch");

	UCreativeGridLevelsManager_ReceiveCheckObjectCanBatch_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.ObjectAddToGridCellMap
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              Index                          (ConstParm, Parm, IsPlainOldData)
// struct FString                 InstanceID                     (ConstParm, Parm, ZeroConstructor)

void UCreativeGridLevelsManager::ObjectAddToGridCellMap(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ObjectAddToGridCellMap");

	UCreativeGridLevelsManager_ObjectAddToGridCellMap_Params params;
	params.GridName = GridName;
	params.Index = Index;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGridLevelsManager.LoadGridLevelsBatchActor
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              CellIndex                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCreativeGridLevelsManager::LoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.LoadGridLevelsBatchActor");

	UCreativeGridLevelsManager_LoadGridLevelsBatchActor_Params params;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGridLevelsManager.IsCreativeEidtMode
// (Final, Native, Private)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::IsCreativeEidtMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.IsCreativeEidtMode");

	UCreativeGridLevelsManager_IsCreativeEidtMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GridCellMapRemoveObject
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              Index                          (ConstParm, Parm, IsPlainOldData)
// struct FString                 InstanceID                     (ConstParm, Parm, ZeroConstructor)

void UCreativeGridLevelsManager::GridCellMapRemoveObject(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GridCellMapRemoveObject");

	UCreativeGridLevelsManager_GridCellMapRemoveObject_Params params;
	params.GridName = GridName;
	params.Index = Index;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGridLevelsManager.GetStaticMeshBatchActorPath
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeGridLevelsManager::GetStaticMeshBatchActorPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetStaticMeshBatchActorPath");

	UCreativeGridLevelsManager_GetStaticMeshBatchActorPath_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetRelieveBatchDistance
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeGridLevelsManager::GetRelieveBatchDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetRelieveBatchDistance");

	UCreativeGridLevelsManager_GetRelieveBatchDistance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetReBatchDistance
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeGridLevelsManager::GetReBatchDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetReBatchDistance");

	UCreativeGridLevelsManager_GetReBatchDistance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetOnCellIndex
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FIntVector              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FIntVector UCreativeGridLevelsManager::GetOnCellIndex(const struct FString& GridName, const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetOnCellIndex");

	UCreativeGridLevelsManager_GetOnCellIndex_Params params;
	params.GridName = GridName;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetObjectTransform
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UCreativeGridLevelsManager::GetObjectTransform(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectTransform");

	UCreativeGridLevelsManager_GetObjectTransform_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetObjectStreamingType
// (Final, Native, Private)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// ECreativeModeActorStreamingType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeActorStreamingType UCreativeGridLevelsManager::GetObjectStreamingType(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectStreamingType");

	UCreativeGridLevelsManager_GetObjectStreamingType_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetObjectRuntimeGrid
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeGridLevelsManager::GetObjectRuntimeGrid(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectRuntimeGrid");

	UCreativeGridLevelsManager_GetObjectRuntimeGrid_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetObjectIsPrefab
// (Final, Native, Private)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::GetObjectIsPrefab(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectIsPrefab");

	UCreativeGridLevelsManager_GetObjectIsPrefab_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetObjectAssetID
// (Final, Native, Private)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeGridLevelsManager::GetObjectAssetID(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectAssetID");

	UCreativeGridLevelsManager_GetObjectAssetID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetGridLoadingRange
// (Final, Native, Public)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeGridLevelsManager::GetGridLoadingRange(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetGridLoadingRange");

	UCreativeGridLevelsManager_GetGridLoadingRange_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetGridList
// (Final, Native, Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UCreativeGridLevelsManager::GetGridList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetGridList");

	UCreativeGridLevelsManager_GetGridList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetDefaultGridName
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeGridLevelsManager::GetDefaultGridName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetDefaultGridName");

	UCreativeGridLevelsManager_GetDefaultGridName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetCellWidthHeight
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UCreativeGridLevelsManager::GetCellWidthHeight(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetCellWidthHeight");

	UCreativeGridLevelsManager_GetCellWidthHeight_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetCellCenterLocation
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              CellIndex                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UCreativeGridLevelsManager::GetCellCenterLocation(const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetCellCenterLocation");

	UCreativeGridLevelsManager_GetCellCenterLocation_Params params;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetAxisIndex
// (Final, Native, Public, Const)
// Parameters:
// float                          Pos                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          BlockLenght                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeGridLevelsManager::GetAxisIndex(float Pos, float BlockLenght)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetAxisIndex");

	UCreativeGridLevelsManager_GetAxisIndex_Params params;
	params.Pos = Pos;
	params.BlockLenght = BlockLenght;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeGridLevelsManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeGridLevelsManager* UCreativeGridLevelsManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.Get");

	UCreativeGridLevelsManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.CheckObjectBeRelieveBatch
// (Final, Native, Private)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::CheckObjectBeRelieveBatch(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.CheckObjectBeRelieveBatch");

	UCreativeGridLevelsManager_CheckObjectBeRelieveBatch_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.CheckObjectBeBatch
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::CheckObjectBeBatch(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.CheckObjectBeBatch");

	UCreativeGridLevelsManager_CheckObjectBeBatch_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.CheckAndRemoveObjectForBatchData
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::CheckAndRemoveObjectForBatchData(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.CheckAndRemoveObjectForBatchData");

	UCreativeGridLevelsManager_CheckAndRemoveObjectForBatchData_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.CheckAndAddObjectToBatchData
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::CheckAndAddObjectToBatchData(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.CheckAndAddObjectToBatchData");

	UCreativeGridLevelsManager_CheckAndAddObjectToBatchData_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.ChangeObjectTransform
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::ChangeObjectTransform(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ChangeObjectTransform");

	UCreativeGridLevelsManager_ChangeObjectTransform_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.ChangeObjectStreamingType
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// ECreativeModeActorStreamingType NewStremaingType               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::ChangeObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ChangeObjectStreamingType");

	UCreativeGridLevelsManager_ChangeObjectStreamingType_Params params;
	params.InstanceID = InstanceID;
	params.NewStremaingType = NewStremaingType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.ChangeObjectMaterialId
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// int                            MaterialID                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::ChangeObjectMaterialId(const struct FString& InstanceID, int MaterialID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ChangeObjectMaterialId");

	UCreativeGridLevelsManager_ChangeObjectMaterialId_Params params;
	params.InstanceID = InstanceID;
	params.MaterialID = MaterialID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.ChangeObjectIsPrefab
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           bIsPrefab                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::ChangeObjectIsPrefab(const struct FString& InstanceID, bool bIsPrefab)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ChangeObjectIsPrefab");

	UCreativeGridLevelsManager_ChangeObjectIsPrefab_Params params;
	params.InstanceID = InstanceID;
	params.bIsPrefab = bIsPrefab;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.AddObjectToGridLevels
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::AddObjectToGridLevels(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.AddObjectToGridLevels");

	UCreativeGridLevelsManager_AddObjectToGridLevels_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGroupManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeGroupManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeGroupManager* UCreativeGroupManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGroupManager.Get");

	UCreativeGroupManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeInGameManagerCenter.GetIsBeginPlayEnded
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeInGameManagerCenter::GetIsBeginPlayEnded()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInGameManagerCenter.GetIsBeginPlayEnded");

	ACreativeModeInGameManagerCenter_GetIsBeginPlayEnded_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.UpdateModBinInstanceCount
// (Final, Native, Public, BlueprintCallable)

void UCreativeInstanceManager::UpdateModBinInstanceCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.UpdateModBinInstanceCount");

	UCreativeInstanceManager_UpdateModBinInstanceCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.SetModBinInstanceCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceManager::SetModBinInstanceCount(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.SetModBinInstanceCount");

	UCreativeInstanceManager_SetModBinInstanceCount_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.SetInstanceValue
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::SetInstanceValue(const struct FString& InstanceID, const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.SetInstanceValue");

	UCreativeInstanceManager_SetInstanceValue_Params params;
	params.InstanceID = InstanceID;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.SetInstanceDataContents
// (Final, Native, Public, HasOutParms)
// Parameters:
// uint16_t                       Seq                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FCreativeInstanceDataContent> InstanceDataContents           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeInstanceManager::SetInstanceDataContents(uint16_t Seq, TArray<struct FCreativeInstanceDataContent> InstanceDataContents)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.SetInstanceDataContents");

	UCreativeInstanceManager_SetInstanceDataContents_Params params;
	params.Seq = Seq;
	params.InstanceDataContents = InstanceDataContents;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.SendModBinaryDataToReplay
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<unsigned char>          InBinaryData                   (Parm, OutParm, ZeroConstructor)

void UCreativeInstanceManager::SendModBinaryDataToReplay(TArray<unsigned char>* InBinaryData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.SendModBinaryDataToReplay");

	UCreativeInstanceManager_SendModBinaryDataToReplay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InBinaryData != nullptr)
		*InBinaryData = params.InBinaryData;
}


// Function Creative.CreativeInstanceManager.RemoveInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)

void UCreativeInstanceManager::RemoveInstance(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.RemoveInstance");

	UCreativeInstanceManager_RemoveInstance_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.RemoveCppInstanceNode
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::RemoveCppInstanceNode(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.RemoveCppInstanceNode");

	UCreativeInstanceManager_RemoveCppInstanceNode_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.RecordAllInstanceDataByRPC
// (Final, Native, Public)

void UCreativeInstanceManager::RecordAllInstanceDataByRPC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.RecordAllInstanceDataByRPC");

	UCreativeInstanceManager_RecordAllInstanceDataByRPC_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.ReceiveOnGameStateBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ReceiveOnGameStateBeginPlay");

	UCreativeInstanceManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnRep_ModBinInstanceCount
// (Final, Native, Public)

void UCreativeInstanceManager::OnRep_ModBinInstanceCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnRep_ModBinInstanceCount");

	UCreativeInstanceManager_OnRep_ModBinInstanceCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnReceivePreInstanceRemove
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)

void UCreativeInstanceManager::OnReceivePreInstanceRemove(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnReceivePreInstanceRemove");

	UCreativeInstanceManager_OnReceivePreInstanceRemove_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnReceivePostInstanceChange
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeInstanceManager::OnReceivePostInstanceChange(const struct FString& ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnReceivePostInstanceChange");

	UCreativeInstanceManager_OnReceivePostInstanceChange_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnReceivePostInstanceAdd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeInstanceManager::OnReceivePostInstanceAdd(const struct FString& ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnReceivePostInstanceAdd");

	UCreativeInstanceManager_OnReceivePostInstanceAdd_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnReceiveClearNotReplicatedData
// (Event, Public, BlueprintEvent)

void UCreativeInstanceManager::OnReceiveClearNotReplicatedData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnReceiveClearNotReplicatedData");

	UCreativeInstanceManager_OnReceiveClearNotReplicatedData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnReadyToAddInstance
// (Final, Native, Public)

void UCreativeInstanceManager::OnReadyToAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnReadyToAddInstance");

	UCreativeInstanceManager_OnReadyToAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnGameTypeChanged
// (Final, Native, Public)
// Parameters:
// unsigned char                  LastGameType                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  CurrentGameType                (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceManager::OnGameTypeChanged(unsigned char LastGameType, unsigned char CurrentGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnGameTypeChanged");

	UCreativeInstanceManager_OnGameTypeChanged_Params params;
	params.LastGameType = LastGameType;
	params.CurrentGameType = CurrentGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnGameStateBeginPlay
// (Final, Native, Public)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnGameStateBeginPlay");

	UCreativeInstanceManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.IsInstanceReplicatTreeReplicateComplete
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::IsInstanceReplicatTreeReplicateComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.IsInstanceReplicatTreeReplicateComplete");

	UCreativeInstanceManager_IsInstanceReplicatTreeReplicateComplete_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.IsInstanceDataTreeReplicateComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::IsInstanceDataTreeReplicateComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.IsInstanceDataTreeReplicateComplete");

	UCreativeInstanceManager_IsInstanceDataTreeReplicateComplete_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.IsAssetRuntimeObjectBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::IsAssetRuntimeObjectBox(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.IsAssetRuntimeObjectBox");

	UCreativeInstanceManager_IsAssetRuntimeObjectBox_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.HasReadyToAddInstance
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::HasReadyToAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.HasReadyToAddInstance");

	UCreativeInstanceManager_HasReadyToAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.HasAuthorityOrReplay
// (Final, Native, Private, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::HasAuthorityOrReplay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.HasAuthorityOrReplay");

	UCreativeInstanceManager_HasAuthorityOrReplay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetModBinInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeInstanceManager::GetModBinInstanceCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetModBinInstanceCount");

	UCreativeInstanceManager_GetModBinInstanceCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetModBinaryDataFromReplay
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<unsigned char>          InBinaryData                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::GetModBinaryDataFromReplay(TArray<unsigned char> InBinaryData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetModBinaryDataFromReplay");

	UCreativeInstanceManager_GetModBinaryDataFromReplay_Params params;
	params.InBinaryData = InBinaryData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetInstanceDataTreeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeInstanceManager::GetInstanceDataTreeCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceDataTreeCount");

	UCreativeInstanceManager_GetInstanceDataTreeCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetInstanceDataContents
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<uint32_t>               InstanceIDs                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FCreativeInstanceRespondPullDataSegment> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FCreativeInstanceRespondPullDataSegment> UCreativeInstanceManager::GetInstanceDataContents(TArray<uint32_t> InstanceIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceDataContents");

	UCreativeInstanceManager_GetInstanceDataContents_Params params;
	params.InstanceIDs = InstanceIDs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetInstanceContainerCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeInstanceManager::GetInstanceContainerCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceContainerCount");

	UCreativeInstanceManager_GetInstanceContainerCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetInstanceBox
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FBox                    ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FBox UCreativeInstanceManager::GetInstanceBox(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceBox");

	UCreativeInstanceManager_GetInstanceBox_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetCppInstanceNode
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FCreativeInstanceNode   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCreativeInstanceNode UCreativeInstanceManager::GetCppInstanceNode(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetCppInstanceNode");

	UCreativeInstanceManager_GetCppInstanceNode_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetAssetBox
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FBox                    ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FBox UCreativeInstanceManager::GetAssetBox(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetAssetBox");

	UCreativeInstanceManager_GetAssetBox_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeInstanceManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeInstanceManager* UCreativeInstanceManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.Get");

	UCreativeInstanceManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.DestroyInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeInstanceManager::DestroyInstance(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.DestroyInstance");

	UCreativeInstanceManager_DestroyInstance_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.Client_SetInstanceDataContent
// (Final, Native, Public)
// Parameters:
// uint32_t                       InstanceID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FCreativeInstanceDataContent InstanceDataContent            (Parm)

void UCreativeInstanceManager::Client_SetInstanceDataContent(uint32_t InstanceID, const struct FCreativeInstanceDataContent& InstanceDataContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.Client_SetInstanceDataContent");

	UCreativeInstanceManager_Client_SetInstanceDataContent_Params params;
	params.InstanceID = InstanceID;
	params.InstanceDataContent = InstanceDataContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.ClearInstanceTree
// (Final, Native, Public, BlueprintCallable)

void UCreativeInstanceManager::ClearInstanceTree()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ClearInstanceTree");

	UCreativeInstanceManager_ClearInstanceTree_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.ChangeInstance
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeInstanceManager::ChangeInstance(const struct FString& ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ChangeInstance");

	UCreativeInstanceManager_ChangeInstance_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.ChangeCppInstanceNode
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FCreativeInstanceNode   Node                           (Parm, OutParm)

void UCreativeInstanceManager::ChangeCppInstanceNode(const struct FString& ID, const struct FString& Key, struct FCreativeInstanceNode* Node)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ChangeCppInstanceNode");

	UCreativeInstanceManager_ChangeCppInstanceNode_Params params;
	params.ID = ID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Node != nullptr)
		*Node = params.Node;
}


// Function Creative.CreativeInstanceManager.AddInstance
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeInstanceManager::AddInstance(const struct FString& ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.AddInstance");

	UCreativeInstanceManager_AddInstance_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.AddCppInstanceNode
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FCreativeInstanceNode   Node                           (Parm, OutParm)

void UCreativeInstanceManager::AddCppInstanceNode(const struct FString& ID, struct FCreativeInstanceNode* Node)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.AddCppInstanceNode");

	UCreativeInstanceManager_AddCppInstanceNode_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Node != nullptr)
		*Node = params.Node;
}


// Function Creative.CreativeInstanceManager.AddBuildingFlag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)

void UCreativeInstanceManager::AddBuildingFlag(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.AddBuildingFlag");

	UCreativeInstanceManager_AddBuildingFlag_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceStaticMeshComponent.UnInitInstancedStaticMeshComponntByGroupBuild
// (Final, Native, Public)

void UCreativeInstanceStaticMeshComponent::UnInitInstancedStaticMeshComponntByGroupBuild()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.UnInitInstancedStaticMeshComponntByGroupBuild");

	UCreativeInstanceStaticMeshComponent_UnInitInstancedStaticMeshComponntByGroupBuild_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceStaticMeshComponent.OnStaticMeshAsyncLoaded
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct FSoftObjectPath         SoftObjectPath                 (Parm)

void UCreativeInstanceStaticMeshComponent::OnStaticMeshAsyncLoaded(const struct FSoftObjectPath& SoftObjectPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.OnStaticMeshAsyncLoaded");

	UCreativeInstanceStaticMeshComponent_OnStaticMeshAsyncLoaded_Params params;
	params.SoftObjectPath = SoftObjectPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceStaticMeshComponent.OnReturnToPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       RecycledSeq                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceStaticMeshComponent::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.OnReturnToPool");

	UCreativeInstanceStaticMeshComponent_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceStaticMeshComponent.OnPickFromPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, ZeroConstructor)

void UCreativeInstanceStaticMeshComponent::OnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.OnPickFromPool");

	UCreativeInstanceStaticMeshComponent_OnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceStaticMeshComponent.InitInstancedStaticMeshComponntByGroupBuild
// (Final, Native, Public, HasOutParms)
// Parameters:
// class USceneComponent*         Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FTransform>      InstanceTransforms             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 MeshPath                       (Parm, ZeroConstructor)
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceStaticMeshComponent::InitInstancedStaticMeshComponntByGroupBuild(class USceneComponent* Parent, TArray<struct FTransform> InstanceTransforms, const struct FString& MeshPath, class UMaterialInterface* Material)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.InitInstancedStaticMeshComponntByGroupBuild");

	UCreativeInstanceStaticMeshComponent_InitInstancedStaticMeshComponntByGroupBuild_Params params;
	params.Parent = Parent;
	params.InstanceTransforms = InstanceTransforms;
	params.MeshPath = MeshPath;
	params.Material = Material;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismComponent.SetPlayerIntegral
// (Final, Native, Protected)
// Parameters:
// struct FString                 UID                            (Parm, ZeroConstructor)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            curIntegral                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            curStageIntegral               (Parm, ZeroConstructor, IsPlainOldData)
// int                            integralAddSeq                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeIntegralMechanismComponent::SetPlayerIntegral(const struct FString& UID, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismComponent.SetPlayerIntegral");

	UCreativeModeIntegralMechanismComponent_SetPlayerIntegral_Params params;
	params.UID = UID;
	params.TeamID = TeamID;
	params.curIntegral = curIntegral;
	params.curStageIntegral = curStageIntegral;
	params.integralAddSeq = integralAddSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeIntegralMechanismComponent.OnRepPlayerIntegralsOverride
// (Event, Protected, BlueprintEvent)

void UCreativeModeIntegralMechanismComponent::OnRepPlayerIntegralsOverride()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismComponent.OnRepPlayerIntegralsOverride");

	UCreativeModeIntegralMechanismComponent_OnRepPlayerIntegralsOverride_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismComponent.OnRep_PlayerIntegrals
// (Final, Native, Protected)

void UCreativeModeIntegralMechanismComponent::OnRep_PlayerIntegrals()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismComponent.OnRep_PlayerIntegrals");

	UCreativeModeIntegralMechanismComponent_OnRep_PlayerIntegrals_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismComponent.ClearPlayerIntegrals
// (Final, Native, Protected)

void UCreativeModeIntegralMechanismComponent::ClearPlayerIntegrals()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismComponent.ClearPlayerIntegrals");

	UCreativeModeIntegralMechanismComponent_ClearPlayerIntegrals_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.SetPlayerIntegral
// (Final, Native, Protected)
// Parameters:
// struct FString                 UID                            (Parm, ZeroConstructor)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            curIntegral                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            curStageIntegral               (Parm, ZeroConstructor, IsPlainOldData)
// int                            integralAddSeq                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeIntegralMechanismLiteComponent::SetPlayerIntegral(const struct FString& UID, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.SetPlayerIntegral");

	UCreativeModeIntegralMechanismLiteComponent_SetPlayerIntegral_Params params;
	params.UID = UID;
	params.TeamID = TeamID;
	params.curIntegral = curIntegral;
	params.curStageIntegral = curStageIntegral;
	params.integralAddSeq = integralAddSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.PlayerIntegralContains
// (Final, Native, Protected)
// Parameters:
// struct FString                 UID                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeIntegralMechanismLiteComponent::PlayerIntegralContains(const struct FString& UID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.PlayerIntegralContains");

	UCreativeModeIntegralMechanismLiteComponent_PlayerIntegralContains_Params params;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRepPlayerIntegralsOverride
// (Event, Protected, BlueprintEvent)

void UCreativeModeIntegralMechanismLiteComponent::OnRepPlayerIntegralsOverride()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRepPlayerIntegralsOverride");

	UCreativeModeIntegralMechanismLiteComponent_OnRepPlayerIntegralsOverride_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_TestIndex
// (Final, Native, Protected)
// Parameters:
// int                            LastIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeIntegralMechanismLiteComponent::OnRep_TestIndex(int LastIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_TestIndex");

	UCreativeModeIntegralMechanismLiteComponent_OnRep_TestIndex_Params params;
	params.LastIndex = LastIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_PlayerIntegrals
// (Final, Native, Protected)

void UCreativeModeIntegralMechanismLiteComponent::OnRep_PlayerIntegrals()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_PlayerIntegrals");

	UCreativeModeIntegralMechanismLiteComponent_OnRep_PlayerIntegrals_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.ClearPlayerIntegrals
// (Final, Native, Protected)

void UCreativeModeIntegralMechanismLiteComponent::ClearPlayerIntegrals()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.ClearPlayerIntegrals");

	UCreativeModeIntegralMechanismLiteComponent_ClearPlayerIntegrals_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeItemGeneratorComponent.SetWeightMul
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<struct FString, int>      Weight                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeItemGeneratorComponent::SetWeightMul(TMap<struct FString, int> Weight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeItemGeneratorComponent.SetWeightMul");

	UCreativeItemGeneratorComponent_SetWeightMul_Params params;
	params.Weight = Weight;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeItemGeneratorComponent.SetAddSpotPercentMul
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          percent                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeItemGeneratorComponent::SetAddSpotPercentMul(float percent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeItemGeneratorComponent.SetAddSpotPercentMul");

	UCreativeItemGeneratorComponent_SetAddSpotPercentMul_Params params;
	params.percent = percent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeItemGeneratorComponent.ClearWeightMul
// (Final, Native, Public, BlueprintCallable)

void UCreativeItemGeneratorComponent::ClearWeightMul()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeItemGeneratorComponent.ClearWeightMul");

	UCreativeItemGeneratorComponent_ClearWeightMul_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLoadManager.UnloadSomeObjects
// (Final, Native, Public)
// Parameters:
// TArray<struct FString>         InstanceIDs                    (Parm, ZeroConstructor)

void UCreativeLoadManager::UnloadSomeObjects(TArray<struct FString> InstanceIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.UnloadSomeObjects");

	UCreativeLoadManager_UnloadSomeObjects_Params params;
	params.InstanceIDs = InstanceIDs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLoadManager.UnloadObject
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeLoadManager::UnloadObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.UnloadObject");

	UCreativeLoadManager_UnloadObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLoadManager.LoadSomeObjects
// (Final, Native, Public)
// Parameters:
// TArray<struct FString>         InstanceIDs                    (Parm, ZeroConstructor)
// bool                           bLoadImmediately               (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLoadManager::LoadSomeObjects(TArray<struct FString> InstanceIDs, bool bLoadImmediately)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.LoadSomeObjects");

	UCreativeLoadManager_LoadSomeObjects_Params params;
	params.InstanceIDs = InstanceIDs;
	params.bLoadImmediately = bLoadImmediately;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLoadManager.LoadObject
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeLoadManager::LoadObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.LoadObject");

	UCreativeLoadManager_LoadObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLoadManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeLoadManager*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeLoadManager* UCreativeLoadManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.Get");

	UCreativeLoadManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeLoadManager.AddObject
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FCreativeInstanceNode   InstanceNode                   (ConstParm, Parm, OutParm, ReferenceParm)

void UCreativeLoadManager::AddObject(const struct FString& InstanceID, const struct FCreativeInstanceNode& InstanceNode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.AddObject");

	UCreativeLoadManager_AddObject_Params params;
	params.InstanceID = InstanceID;
	params.InstanceNode = InstanceNode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeModDataCheckManager.ReceiveOnPreAddInstance
// (Event, Public, BlueprintEvent)

void UCreativeModeModDataCheckManager::ReceiveOnPreAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.ReceiveOnPreAddInstance");

	UCreativeModeModDataCheckManager_ReceiveOnPreAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeModDataCheckManager.ReceiveOnPostAddInstance
// (Event, Public, BlueprintEvent)

void UCreativeModeModDataCheckManager::ReceiveOnPostAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.ReceiveOnPostAddInstance");

	UCreativeModeModDataCheckManager_ReceiveOnPostAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeModDataCheckManager.OnPreAddInstance
// (Final, Native, Public)

void UCreativeModeModDataCheckManager::OnPreAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.OnPreAddInstance");

	UCreativeModeModDataCheckManager_OnPreAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeModDataCheckManager.OnPostAddInstance
// (Final, Native, Public)

void UCreativeModeModDataCheckManager::OnPostAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.OnPostAddInstance");

	UCreativeModeModDataCheckManager_OnPostAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeModDataCheckManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeModeModDataCheckManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeModDataCheckManager* UCreativeModeModDataCheckManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.Get");

	UCreativeModeModDataCheckManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGlobalManagerCenter.OnCreativeDelegateCreated
// (Final, Native, Protected)

void UCreativeModeGlobalManagerCenter::OnCreativeDelegateCreated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGlobalManagerCenter.OnCreativeDelegateCreated");

	UCreativeModeGlobalManagerCenter_OnCreativeDelegateCreated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntermediateManager.ServerTravel
// (Final, Native, Public, Const)
// Parameters:
// bool                           bIsEditor                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InUrl                          (Parm, ZeroConstructor)
// bool                           bAbsolute                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldSkipGameNotify          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeIntermediateManager::ServerTravel(bool bIsEditor, const struct FString& InUrl, bool bAbsolute, bool bShouldSkipGameNotify)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntermediateManager.ServerTravel");

	UCreativeModeIntermediateManager_ServerTravel_Params params;
	params.bIsEditor = bIsEditor;
	params.InUrl = InUrl;
	params.bAbsolute = bAbsolute;
	params.bShouldSkipGameNotify = bShouldSkipGameNotify;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeIntermediateManager.ServerChangeLevel
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsEditor                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeIntermediateManager::ServerChangeLevel(bool bIsEditor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntermediateManager.ServerChangeLevel");

	UCreativeModeIntermediateManager_ServerChangeLevel_Params params;
	params.bIsEditor = bIsEditor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntermediateManager.ReceiveOnPreLoadMap
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor)

void UCreativeModeIntermediateManager::ReceiveOnPreLoadMap(const struct FString& MapName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntermediateManager.ReceiveOnPreLoadMap");

	UCreativeModeIntermediateManager_ReceiveOnPreLoadMap_Params params;
	params.MapName = MapName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntermediateManager.ReceiveOnPostSetLuaEventBridgeInstance
// (Event, Public, BlueprintEvent)

void UCreativeModeIntermediateManager::ReceiveOnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntermediateManager.ReceiveOnPostSetLuaEventBridgeInstance");

	UCreativeModeIntermediateManager_ReceiveOnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntermediateManager.ReceiveOnPostLoadMapWithWorld
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeIntermediateManager::ReceiveOnPostLoadMapWithWorld(class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntermediateManager.ReceiveOnPostLoadMapWithWorld");

	UCreativeModeIntermediateManager_ReceiveOnPostLoadMapWithWorld_Params params;
	params.World = World;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntermediateManager.OnPreLoadMap
// (Final, Native, Public)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor)

void UCreativeModeIntermediateManager::OnPreLoadMap(const struct FString& MapName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntermediateManager.OnPreLoadMap");

	UCreativeModeIntermediateManager_OnPreLoadMap_Params params;
	params.MapName = MapName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntermediateManager.OnPostSetLuaEventBridgeInstance
// (Final, Native, Public)

void UCreativeModeIntermediateManager::OnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntermediateManager.OnPostSetLuaEventBridgeInstance");

	UCreativeModeIntermediateManager_OnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntermediateManager.OnPostLoadMapWithWorld
// (Final, Native, Public)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeIntermediateManager::OnPostLoadMapWithWorld(class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntermediateManager.OnPostLoadMapWithWorld");

	UCreativeModeIntermediateManager_OnPostLoadMapWithWorld_Params params;
	params.World = World;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntermediateManager.OnLoadModBinaryData
// (Event, Public, BlueprintEvent)

void UCreativeModeIntermediateManager::OnLoadModBinaryData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntermediateManager.OnLoadModBinaryData");

	UCreativeModeIntermediateManager_OnLoadModBinaryData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntermediateManager.IsCreativeModeSwitchToGame
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeIntermediateManager::IsCreativeModeSwitchToGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntermediateManager.IsCreativeModeSwitchToGame");

	UCreativeModeIntermediateManager_IsCreativeModeSwitchToGame_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeIntermediateManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeModeIntermediateManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeIntermediateManager* UCreativeModeIntermediateManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntermediateManager.Get");

	UCreativeModeIntermediateManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeIntermediateManager.ClientChangeLevel
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsEditor                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeIntermediateManager::ClientChangeLevel(bool bIsEditor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntermediateManager.ClientChangeLevel");

	UCreativeModeIntermediateManager_ClientChangeLevel_Params params;
	params.bIsEditor = bIsEditor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeLuaSpectatorPawn.UnRegistLuaTick
// (Final, Native, Public, BlueprintCallable)

void ACreativeModeLuaSpectatorPawn::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.UnRegistLuaTick");

	ACreativeModeLuaSpectatorPawn_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeLuaSpectatorPawn.SetAbilitySystemComponentAvatar
// (Final, Native, Public, BlueprintCallable)

void ACreativeModeLuaSpectatorPawn::SetAbilitySystemComponentAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.SetAbilitySystemComponentAvatar");

	ACreativeModeLuaSpectatorPawn_SetAbilitySystemComponentAvatar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeLuaSpectatorPawn.RegistLuaTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeLuaSpectatorPawn::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.RegistLuaTick");

	ACreativeModeLuaSpectatorPawn_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeLuaSpectatorPawn.MoveRight
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeLuaSpectatorPawn::MoveRight(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.MoveRight");

	ACreativeModeLuaSpectatorPawn_MoveRight_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeLuaSpectatorPawn.MoveForward
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeLuaSpectatorPawn::MoveForward(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.MoveForward");

	ACreativeModeLuaSpectatorPawn_MoveForward_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeLuaSpectatorPawn.GetActiveSpringArm
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USpringArmComponent* ACreativeModeLuaSpectatorPawn::GetActiveSpringArm()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.GetActiveSpringArm");

	ACreativeModeLuaSpectatorPawn_GetActiveSpringArm_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeStaticMeshBatchActor.SetISMStaticMeshAndMaterials
// (Event, Public, BlueprintEvent)
// Parameters:
// class UInstancedStaticMeshComponent* InstancedStaticMeshComponent   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            AssetId                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            StaticMeshIndex                (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaterialID                     (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeStaticMeshBatchActor::SetISMStaticMeshAndMaterials(class UInstancedStaticMeshComponent* InstancedStaticMeshComponent, int AssetId, int StaticMeshIndex, int MaterialID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStaticMeshBatchActor.SetISMStaticMeshAndMaterials");

	ACreativeModeStaticMeshBatchActor_SetISMStaticMeshAndMaterials_Params params;
	params.InstancedStaticMeshComponent = InstancedStaticMeshComponent;
	params.AssetId = AssetId;
	params.StaticMeshIndex = StaticMeshIndex;
	params.MaterialID = MaterialID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeStaticMeshBatchActor.GetBatchStaticMeshInfo
// (Final, Native, Public)
// Parameters:
// class UInstancedStaticMeshComponent* InstancedStaticMeshComponent   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCreativeBatchStaticMeshInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCreativeBatchStaticMeshInfo ACreativeModeStaticMeshBatchActor::GetBatchStaticMeshInfo(class UInstancedStaticMeshComponent* InstancedStaticMeshComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStaticMeshBatchActor.GetBatchStaticMeshInfo");

	ACreativeModeStaticMeshBatchActor_GetBatchStaticMeshInfo_Params params;
	params.InstancedStaticMeshComponent = InstancedStaticMeshComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.SetDynamicModeEnable
// (Final, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeNavigationManager::SetDynamicModeEnable(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SetDynamicModeEnable");

	UCreativeModeNavigationManager_SetDynamicModeEnable_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.SetDebugOutputEnable
// (Final, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeNavigationManager::SetDebugOutputEnable(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SetDebugOutputEnable");

	UCreativeModeNavigationManager_SetDebugOutputEnable_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.SetConcurrentTaskNum
// (Final, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeNavigationManager::SetConcurrentTaskNum(int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SetConcurrentTaskNum");

	UCreativeModeNavigationManager_SetConcurrentTaskNum_Params params;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.SerializeDynamicTileToByteArr
// (Final, Native, Public)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UCreativeModeNavigationManager::SerializeDynamicTileToByteArr()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SerializeDynamicTileToByteArr");

	UCreativeModeNavigationManager_SerializeDynamicTileToByteArr_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.RevokePendingBuildingTasks
// (Final, Native, Public)

void UCreativeModeNavigationManager::RevokePendingBuildingTasks()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.RevokePendingBuildingTasks");

	UCreativeModeNavigationManager_RevokePendingBuildingTasks_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.ReceiveOnUnInit
// (Event, Public, BlueprintEvent)

void UCreativeModeNavigationManager::ReceiveOnUnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ReceiveOnUnInit");

	UCreativeModeNavigationManager_ReceiveOnUnInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.ReceiveOnInit
// (Event, Public, BlueprintEvent)

void UCreativeModeNavigationManager::ReceiveOnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ReceiveOnInit");

	UCreativeModeNavigationManager_ReceiveOnInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.RebuildDynamicTiles
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<class AActor*>          Actors                         (Parm, OutParm, ZeroConstructor)

void UCreativeModeNavigationManager::RebuildDynamicTiles(TArray<class AActor*>* Actors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.RebuildDynamicTiles");

	UCreativeModeNavigationManager_RebuildDynamicTiles_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function Creative.CreativeModeNavigationManager.IsBuildingInProgress
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeNavigationManager::IsBuildingInProgress()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.IsBuildingInProgress");

	UCreativeModeNavigationManager_IsBuildingInProgress_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.ImportDynamicTile
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UCreativeModeNavigationManager::ImportDynamicTile(struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ImportDynamicTile");

	UCreativeModeNavigationManager_ImportDynamicTile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}


// Function Creative.CreativeModeNavigationManager.GetDynamicTilesCount
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeNavigationManager::GetDynamicTilesCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.GetDynamicTilesCount");

	UCreativeModeNavigationManager_GetDynamicTilesCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.GetDynamicTileMemCost
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            Total                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OctTree                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TileCache                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            DynamicTile                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            DynamicTileCount               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeNavigationManager::GetDynamicTileMemCost(int* Total, int* OctTree, int* TileCache, int* DynamicTile, int* DynamicTileCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.GetDynamicTileMemCost");

	UCreativeModeNavigationManager_GetDynamicTileMemCost_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Total != nullptr)
		*Total = params.Total;
	if (OctTree != nullptr)
		*OctTree = params.OctTree;
	if (TileCache != nullptr)
		*TileCache = params.TileCache;
	if (DynamicTile != nullptr)
		*DynamicTile = params.DynamicTile;
	if (DynamicTileCount != nullptr)
		*DynamicTileCount = params.DynamicTileCount;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.GetAllAssociateActors
// (Final, Native, Public, Const)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UCreativeModeNavigationManager::GetAllAssociateActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.GetAllAssociateActors");

	UCreativeModeNavigationManager_GetAllAssociateActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeModeNavigationManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeNavigationManager* UCreativeModeNavigationManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.Get");

	UCreativeModeNavigationManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.ExportDynamicTile
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UCreativeModeNavigationManager::ExportDynamicTile(struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ExportDynamicTile");

	UCreativeModeNavigationManager_ExportDynamicTile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}


// Function Creative.CreativeModeNavigationManager.DeserializeDynamicTileFromByteArr
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          ByteArr                        (Parm, OutParm, ZeroConstructor)

void UCreativeModeNavigationManager::DeserializeDynamicTileFromByteArr(TArray<unsigned char>* ByteArr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.DeserializeDynamicTileFromByteArr");

	UCreativeModeNavigationManager_DeserializeDynamicTileFromByteArr_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ByteArr != nullptr)
		*ByteArr = params.ByteArr;
}


// Function Creative.CreativeModeNavigationManager.ClearNavCollision
// (Final, Native, Public)

void UCreativeModeNavigationManager::ClearNavCollision()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ClearNavCollision");

	UCreativeModeNavigationManager_ClearNavCollision_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.ClearDynamicOctreeData
// (Final, Native, Public)

void UCreativeModeNavigationManager::ClearDynamicOctreeData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ClearDynamicOctreeData");

	UCreativeModeNavigationManager_ClearDynamicOctreeData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.ClearDynamicNavMesh
// (Final, Native, Public)

void UCreativeModeNavigationManager::ClearDynamicNavMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ClearDynamicNavMesh");

	UCreativeModeNavigationManager_ClearDynamicNavMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.ClearAssociateActors
// (Final, Native, Public)

void UCreativeModeNavigationManager::ClearAssociateActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ClearAssociateActors");

	UCreativeModeNavigationManager_ClearAssociateActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.CalSamplePointsInBoxLegacy
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 BoxMin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 BoxMax                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          StepSize                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxPoints                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UCreativeModeNavigationManager::CalSamplePointsInBoxLegacy(const struct FVector& BoxMin, const struct FVector& BoxMax, float StepSize, int MaxPoints)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.CalSamplePointsInBoxLegacy");

	UCreativeModeNavigationManager_CalSamplePointsInBoxLegacy_Params params;
	params.BoxMin = BoxMin;
	params.BoxMax = BoxMax;
	params.StepSize = StepSize;
	params.MaxPoints = MaxPoints;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.CalSamplePointsInBox
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 BoxMin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 BoxMax                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          StepSize                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxPoints                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UCreativeModeNavigationManager::CalSamplePointsInBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float StepSize, int MaxPoints)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.CalSamplePointsInBox");

	UCreativeModeNavigationManager_CalSamplePointsInBox_Params params;
	params.BoxMin = BoxMin;
	params.BoxMax = BoxMax;
	params.StepSize = StepSize;
	params.MaxPoints = MaxPoints;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.CalSamplePoints
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 StartPos                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          StepSize                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxPoints                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UCreativeModeNavigationManager::CalSamplePoints(const struct FVector& StartPos, float StepSize, int MaxPoints)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.CalSamplePoints");

	UCreativeModeNavigationManager_CalSamplePoints_Params params;
	params.StartPos = StartPos;
	params.StepSize = StepSize;
	params.MaxPoints = MaxPoints;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.AddNavAffectedObjects
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeModeNavigationManager::AddNavAffectedObjects(TArray<class AActor*> Actors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.AddNavAffectedObjects");

	UCreativeModeNavigationManager_AddNavAffectedObjects_Params params;
	params.Actors = Actors;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.AddNavAffectedObject
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeNavigationManager::AddNavAffectedObject(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.AddNavAffectedObject");

	UCreativeModeNavigationManager_AddNavAffectedObject_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeObjectInterface.ReceiveOnPostSetInstanceId
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeModeObjectInterface::ReceiveOnPostSetInstanceId(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectInterface.ReceiveOnPostSetInstanceId");

	UCreativeModeObjectInterface_ReceiveOnPostSetInstanceId_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.SpawnObjectForStreaming
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeObjectManager::SpawnObjectForStreaming(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.SpawnObjectForStreaming");

	UCreativeObjectManager_SpawnObjectForStreaming_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.SpawnObject
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 Path                           (Parm, ZeroConstructor)
// struct FTransform              SpawnTransform                 (Parm, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeObjectManager::SpawnObject(const struct FString& InstanceID, const struct FString& Path, const struct FTransform& SpawnTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.SpawnObject");

	UCreativeObjectManager_SpawnObject_Params params;
	params.InstanceID = InstanceID;
	params.Path = Path;
	params.SpawnTransform = SpawnTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.SetObjectTempStreamingType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// ECreativeModeActorStreamingType TempStreamingType              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::SetObjectTempStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType TempStreamingType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.SetObjectTempStreamingType");

	UCreativeObjectManager_SetObjectTempStreamingType_Params params;
	params.InstanceID = InstanceID;
	params.TempStreamingType = TempStreamingType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.ResetObjectStreamingType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::ResetObjectStreamingType(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ResetObjectStreamingType");

	UCreativeObjectManager_ResetObjectStreamingType_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.RemoveSpawnObjectInfoFormQueue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::RemoveSpawnObjectInfoFormQueue(struct FString* InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.RemoveSpawnObjectInfoFormQueue");

	UCreativeObjectManager_RemoveSpawnObjectInfoFormQueue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceID != nullptr)
		*InstanceID = params.InstanceID;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.RemovePhysicsObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeObjectManager::RemovePhysicsObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.RemovePhysicsObject");

	UCreativeObjectManager_RemovePhysicsObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.RemoveObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::RemoveObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.RemoveObject");

	UCreativeObjectManager_RemoveObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.RemoveDestroyObjectInfoFormQueue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::RemoveDestroyObjectInfoFormQueue(struct FString* InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.RemoveDestroyObjectInfoFormQueue");

	UCreativeObjectManager_RemoveDestroyObjectInfoFormQueue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceID != nullptr)
		*InstanceID = params.InstanceID;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.ReceiveUnregisterObject
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class UObject*                 NewObject                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeObjectManager::ReceiveUnregisterObject(const struct FString& InstanceID, class UObject* NewObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ReceiveUnregisterObject");

	UCreativeObjectManager_ReceiveUnregisterObject_Params params;
	params.InstanceID = InstanceID;
	params.NewObject = NewObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.ReceiveRegisterObject
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class UObject*                 NewObject                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeObjectManager::ReceiveRegisterObject(const struct FString& InstanceID, class UObject* NewObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ReceiveRegisterObject");

	UCreativeObjectManager_ReceiveRegisterObject_Params params;
	params.InstanceID = InstanceID;
	params.NewObject = NewObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.ReceiveClearAllObjects
// (Event, Public, BlueprintEvent)

void UCreativeObjectManager::ReceiveClearAllObjects()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ReceiveClearAllObjects");

	UCreativeObjectManager_ReceiveClearAllObjects_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.OnObjectSpawnComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)

void UCreativeObjectManager::OnObjectSpawnComplete(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.OnObjectSpawnComplete");

	UCreativeObjectManager_OnObjectSpawnComplete_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.GetObjectTransform
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UCreativeObjectManager::GetObjectTransform(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetObjectTransform");

	UCreativeObjectManager_GetObjectTransform_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.GetObjectNum
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UCreativeObjectManager::GetObjectNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetObjectNum");

	UCreativeObjectManager_GetObjectNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.GetObjectAssetPath
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeObjectManager::GetObjectAssetPath(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetObjectAssetPath");

	UCreativeObjectManager_GetObjectAssetPath_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.GetObjectAssetID
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeObjectManager::GetObjectAssetID(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetObjectAssetID");

	UCreativeObjectManager_GetObjectAssetID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.GetObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeObjectManager::GetObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetObject");

	UCreativeObjectManager_GetObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.GetActiveObjectNum
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UCreativeObjectManager::GetActiveObjectNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetActiveObjectNum");

	UCreativeObjectManager_GetActiveObjectNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeObjectManager*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeObjectManager* UCreativeObjectManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.Get");

	UCreativeObjectManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.DestroyObjectForStreaming
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeObjectManager::DestroyObjectForStreaming(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.DestroyObjectForStreaming");

	UCreativeObjectManager_DestroyObjectForStreaming_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.DestroyObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::DestroyObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.DestroyObject");

	UCreativeObjectManager_DestroyObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.CheckObjectBeBatch
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::CheckObjectBeBatch(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.CheckObjectBeBatch");

	UCreativeObjectManager_CheckObjectBeBatch_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.ChangeObjectTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::ChangeObjectTransform(const struct FString& InstanceID, const struct FTransform& Transform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ChangeObjectTransform");

	UCreativeObjectManager_ChangeObjectTransform_Params params;
	params.InstanceID = InstanceID;
	params.Transform = Transform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.AddSpawnObjectToQueue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 Path                           (Parm, ZeroConstructor)
// struct FTransform              SpawnTransform                 (Parm, IsPlainOldData)

void UCreativeObjectManager::AddSpawnObjectToQueue(const struct FString& InstanceID, const struct FString& Path, const struct FTransform& SpawnTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.AddSpawnObjectToQueue");

	UCreativeObjectManager_AddSpawnObjectToQueue_Params params;
	params.InstanceID = InstanceID;
	params.Path = Path;
	params.SpawnTransform = SpawnTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.AddPhysicsObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeObjectManager::AddPhysicsObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.AddPhysicsObject");

	UCreativeObjectManager_AddPhysicsObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.AddObject
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FCreativeModeStreamingParameters StreamingParameters            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::AddObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.AddObject");

	UCreativeObjectManager_AddObject_Params params;
	params.InstanceID = InstanceID;
	params.StreamingParameters = StreamingParameters;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.AddDestroyObjectToQueue
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeObjectManager::AddDestroyObjectToQueue(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.AddDestroyObjectToQueue");

	UCreativeObjectManager_AddDestroyObjectToQueue_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectStateManager.ReceiveOnGameStateBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeObjectStateManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectStateManager.ReceiveOnGameStateBeginPlay");

	UCreativeObjectStateManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectStateManager.OnGameStateBeginPlay
// (Final, Native, Protected)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeObjectStateManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectStateManager.OnGameStateBeginPlay");

	UCreativeObjectStateManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectStateManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeObjectStateManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeObjectStateManager* UCreativeObjectStateManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectStateManager.Get");

	UCreativeObjectStateManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeOfflineBuildManager.ReceiveOnPostSetLuaEventBridgeInstance
// (Event, Public, BlueprintEvent)

void UCreativeOfflineBuildManager::ReceiveOnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOfflineBuildManager.ReceiveOnPostSetLuaEventBridgeInstance");

	UCreativeOfflineBuildManager_ReceiveOnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeOfflineBuildManager.OnPostSetLuaEventBridgeInstance
// (Final, Native, Public)

void UCreativeOfflineBuildManager::OnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOfflineBuildManager.OnPostSetLuaEventBridgeInstance");

	UCreativeOfflineBuildManager_OnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeOfflineBuildManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeOfflineBuildManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeOfflineBuildManager* UCreativeOfflineBuildManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOfflineBuildManager.Get");

	UCreativeOfflineBuildManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponentMaterial
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ComponentID                    (Parm, OutParm, ZeroConstructor)
// struct FString                 MaterialPath                   (Parm, OutParm, ZeroConstructor)

void ACreativePhysicsBatchActor::UpdatePhysicsComponentMaterial(struct FString* ComponentID, struct FString* MaterialPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponentMaterial");

	ACreativePhysicsBatchActor_UpdatePhysicsComponentMaterial_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ComponentID != nullptr)
		*ComponentID = params.ComponentID;
	if (MaterialPath != nullptr)
		*MaterialPath = params.MaterialPath;
}


// Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponent
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FString                 ComponentID                    (Parm, OutParm, ZeroConstructor)
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// TEnumAsByte<ECollisionEnabled> CollisionEnabled               (Parm, ZeroConstructor, IsPlainOldData)

void ACreativePhysicsBatchActor::UpdatePhysicsComponent(const struct FTransform& Transform, TEnumAsByte<ECollisionEnabled> CollisionEnabled, struct FString* ComponentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponent");

	ACreativePhysicsBatchActor_UpdatePhysicsComponent_Params params;
	params.Transform = Transform;
	params.CollisionEnabled = CollisionEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ComponentID != nullptr)
		*ComponentID = params.ComponentID;
}


// Function Creative.CreativePhysicsBatchActor.UnRegisterPhysicsComponent
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ComponentID                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativePhysicsBatchActor::UnRegisterPhysicsComponent(struct FString* ComponentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.UnRegisterPhysicsComponent");

	ACreativePhysicsBatchActor_UnRegisterPhysicsComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ComponentID != nullptr)
		*ComponentID = params.ComponentID;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsBatchActor.SetPhysicsComponentEnabled
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ComponentID                    (Parm, OutParm, ZeroConstructor)
// TEnumAsByte<ECollisionEnabled> CollisionEnabled               (Parm, ZeroConstructor, IsPlainOldData)

void ACreativePhysicsBatchActor::SetPhysicsComponentEnabled(TEnumAsByte<ECollisionEnabled> CollisionEnabled, struct FString* ComponentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.SetPhysicsComponentEnabled");

	ACreativePhysicsBatchActor_SetPhysicsComponentEnabled_Params params;
	params.CollisionEnabled = CollisionEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ComponentID != nullptr)
		*ComponentID = params.ComponentID;
}


// Function Creative.CreativePhysicsBatchActor.RegisterPhysicsComponentByMesh
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 ComponentID                    (Parm, ZeroConstructor)
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// struct FString                 MeshPath                       (Parm, ZeroConstructor)
// struct FName                   CollisionProfileName           (Parm, ZeroConstructor, IsPlainOldData)

void ACreativePhysicsBatchActor::RegisterPhysicsComponentByMesh(const struct FString& InstanceID, const struct FString& ComponentID, const struct FTransform& Transform, const struct FString& MeshPath, const struct FName& CollisionProfileName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.RegisterPhysicsComponentByMesh");

	ACreativePhysicsBatchActor_RegisterPhysicsComponentByMesh_Params params;
	params.InstanceID = InstanceID;
	params.ComponentID = ComponentID;
	params.Transform = Transform;
	params.MeshPath = MeshPath;
	params.CollisionProfileName = CollisionProfileName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsBatchActor.IsLoadFinish
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativePhysicsBatchActor::IsLoadFinish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.IsLoadFinish");

	ACreativePhysicsBatchActor_IsLoadFinish_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsBatchActor.GetRegisterNum
// (Final, Native, Public, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACreativePhysicsBatchActor::GetRegisterNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.GetRegisterNum");

	ACreativePhysicsBatchActor_GetRegisterNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsBatchActor.GetPhysicsComponent
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ComponentID                    (Parm, OutParm, ZeroConstructor)
// class UCreativePhysicsComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCreativePhysicsComponent* ACreativePhysicsBatchActor::GetPhysicsComponent(struct FString* ComponentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.GetPhysicsComponent");

	ACreativePhysicsBatchActor_GetPhysicsComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ComponentID != nullptr)
		*ComponentID = params.ComponentID;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsBatchActor.ClearAllPhysicsComponent
// (Final, Native, Public)

void ACreativePhysicsBatchActor::ClearAllPhysicsComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.ClearAllPhysicsComponent");

	ACreativePhysicsBatchActor_ClearAllPhysicsComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsComponent.SetIsReplicatedOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ShouldReplicate                (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePhysicsComponent::SetIsReplicatedOnly(bool ShouldReplicate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsComponent.SetIsReplicatedOnly");

	UCreativePhysicsComponent_SetIsReplicatedOnly_Params params;
	params.ShouldReplicate = ShouldReplicate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsManager.SetStreamingEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePhysicsManager::SetStreamingEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.SetStreamingEnable");

	UCreativePhysicsManager_SetStreamingEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsManager.SetPhysicsActorVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePhysicsManager::SetPhysicsActorVisible(int Index, bool Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.SetPhysicsActorVisible");

	UCreativePhysicsManager_SetPhysicsActorVisible_Params params;
	params.Index = Index;
	params.Visible = Visible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsManager.RemovePhysicsObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativePhysicsManager::RemovePhysicsObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.RemovePhysicsObject");

	UCreativePhysicsManager_RemovePhysicsObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsManager.OnPhysicsBatchActorLoadFinish
// (Event, Public, BlueprintEvent)

void UCreativePhysicsManager::OnPhysicsBatchActorLoadFinish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.OnPhysicsBatchActorLoadFinish");

	UCreativePhysicsManager_OnPhysicsBatchActorLoadFinish_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsManager.IsPhysicsActorVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePhysicsManager::IsPhysicsActorVisible(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.IsPhysicsActorVisible");

	UCreativePhysicsManager_IsPhysicsActorVisible_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsManager.GetPhysicsBatchActorByInstanceID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class ACreativePhysicsBatchActor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACreativePhysicsBatchActor* UCreativePhysicsManager::GetPhysicsBatchActorByInstanceID(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.GetPhysicsBatchActorByInstanceID");

	UCreativePhysicsManager_GetPhysicsBatchActorByInstanceID_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsManager.GetPhysicsBatchActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class ACreativePhysicsBatchActor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACreativePhysicsBatchActor* UCreativePhysicsManager::GetPhysicsBatchActor(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.GetPhysicsBatchActor");

	UCreativePhysicsManager_GetPhysicsBatchActor_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsManager.GetLevelLandscapeSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativePhysicsManager::GetLevelLandscapeSection()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.GetLevelLandscapeSection");

	UCreativePhysicsManager_GetLevelLandscapeSection_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsManager.GetLandscapeIndexByVector
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LandscapeX                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LandscapeY                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativePhysicsManager::GetLandscapeIndexByVector(int LandscapeX, int LandscapeY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.GetLandscapeIndexByVector");

	UCreativePhysicsManager_GetLandscapeIndexByVector_Params params;
	params.LandscapeX = LandscapeX;
	params.LandscapeY = LandscapeY;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsManager.GetLandscapeIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativePhysicsManager::GetLandscapeIndex(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.GetLandscapeIndex");

	UCreativePhysicsManager_GetLandscapeIndex_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativePhysicsManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativePhysicsManager* UCreativePhysicsManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.Get");

	UCreativePhysicsManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsManager.ClearAllPhysicsBatchActor
// (Final, Native, Public, BlueprintCallable)

void UCreativePhysicsManager::ClearAllPhysicsBatchActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.ClearAllPhysicsBatchActor");

	UCreativePhysicsManager_ClearAllPhysicsBatchActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsManager.AddPhysicsObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativePhysicsManager::AddPhysicsObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.AddPhysicsObject");

	UCreativePhysicsManager_AddPhysicsObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModePlayerState.ServerAddInstance
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ACreativeModePlayerState::ServerAddInstance(const struct FString& InstanceID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.ServerAddInstance");

	ACreativeModePlayerState_ServerAddInstance_Params params;
	params.InstanceID = InstanceID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolInterface.SetRecycleTime
// (Native, Public)
// Parameters:
// float                          RecycleTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativePoolInterface::SetRecycleTime(float RecycleTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.SetRecycleTime");

	UCreativePoolInterface_SetRecycleTime_Params params;
	params.RecycleTime = RecycleTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolInterface.SetIsRecycled
// (Native, Public)
// Parameters:
// bool                           IsRecycled                     (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePoolInterface::SetIsRecycled(bool IsRecycled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.SetIsRecycled");

	UCreativePoolInterface_SetIsRecycled_Params params;
	params.IsRecycled = IsRecycled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolInterface.ReceiveOnReturnToPool
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            RecycledSeq                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePoolInterface::ReceiveOnReturnToPool(class UObject* NewOuter, int RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.ReceiveOnReturnToPool");

	UCreativePoolInterface_ReceiveOnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolInterface.ReceiveOnPickFromPool
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, ZeroConstructor)

void UCreativePoolInterface::ReceiveOnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.ReceiveOnPickFromPool");

	UCreativePoolInterface_ReceiveOnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolInterface.OnReturnToPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       RecycledSeq                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePoolInterface::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.OnReturnToPool");

	UCreativePoolInterface_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolInterface.OnPickFromPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, ZeroConstructor)

void UCreativePoolInterface::OnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.OnPickFromPool");

	UCreativePoolInterface_OnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolInterface.GetRecycleTime
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativePoolInterface::GetRecycleTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.GetRecycleTime");

	UCreativePoolInterface_GetRecycleTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePoolInterface.CheckIsRecycled
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePoolInterface::CheckIsRecycled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.CheckIsRecycled");

	UCreativePoolInterface_CheckIsRecycled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePoolManager.SetPoolManagerEnable
// (Final, Native, Public)
// Parameters:
// bool                           bPoolManagerEnable             (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePoolManager::SetPoolManagerEnable(bool bPoolManagerEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.SetPoolManagerEnable");

	UCreativePoolManager_SetPoolManagerEnable_Params params;
	params.bPoolManagerEnable = bPoolManagerEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolManager.ReturnObject
// (Final, Native, Public)
// Parameters:
// int                            PoolID                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePoolManager::ReturnObject(int PoolID, class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.ReturnObject");

	UCreativePoolManager_ReturnObject_Params params;
	params.PoolID = PoolID;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolManager.OnReceiveDestroyHandle
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ID                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 InObj                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePoolManager::OnReceiveDestroyHandle(int ID, class UObject* InObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.OnReceiveDestroyHandle");

	UCreativePoolManager_OnReceiveDestroyHandle_Params params;
	params.ID = ID;
	params.InObj = InObj;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePoolManager.OnReceiveCreateHandle
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ID                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativePoolManager::OnReceiveCreateHandle(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.OnReceiveCreateHandle");

	UCreativePoolManager_OnReceiveCreateHandle_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePoolManager.InitPool
// (Final, Native, Protected, HasOutParms)
// Parameters:
// int                            PoolID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FCreativeObjectPoolClassConfig PoolConfig                     (Parm, OutParm)
// bool                           bPoolEnable                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePoolManager::InitPool(int PoolID, bool bPoolEnable, struct FCreativeObjectPoolClassConfig* PoolConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.InitPool");

	UCreativePoolManager_InitPool_Params params;
	params.PoolID = PoolID;
	params.bPoolEnable = bPoolEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PoolConfig != nullptr)
		*PoolConfig = params.PoolConfig;

	return params.ReturnValue;
}


// Function Creative.CreativePoolManager.GetObject
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            PoolID                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, OutParm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativePoolManager::GetObject(int PoolID, class UObject* NewOuter, struct FString* InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.GetObject");

	UCreativePoolManager_GetObject_Params params;
	params.PoolID = PoolID;
	params.NewOuter = NewOuter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InName != nullptr)
		*InName = params.InName;

	return params.ReturnValue;
}


// Function Creative.CreativePoolManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativePoolManager*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativePoolManager* UCreativePoolManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.Get");

	UCreativePoolManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.SetTeamGameOutcomeCondition
// (Final, Native, Protected, HasOutParms)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimeTeamGameOutcomeConditionInfo TeamGameOutcomeCondition       (Parm, OutParm)
// bool                           bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeRuntimePlayerBattleDataObject::SetTeamGameOutcomeCondition(int TeamID, bool bPropagateToChildren, struct FRuntimeTeamGameOutcomeConditionInfo* TeamGameOutcomeCondition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.SetTeamGameOutcomeCondition");

	ACreativeRuntimePlayerBattleDataObject_SetTeamGameOutcomeCondition_Params params;
	params.TeamID = TeamID;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TeamGameOutcomeCondition != nullptr)
		*TeamGameOutcomeCondition = params.TeamGameOutcomeCondition;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.SetPlayerBattleData
// (Final, Native, Protected, HasOutParms)
// Parameters:
// uint64_t                       UID                            (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimePlayerBattleDataInfo PlayerBattleData               (Parm, OutParm)
// bool                           bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeRuntimePlayerBattleDataObject::SetPlayerBattleData(uint64_t UID, uint32_t PlayerKey, bool bPropagateToChildren, struct FRuntimePlayerBattleDataInfo* PlayerBattleData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.SetPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_SetPlayerBattleData_Params params;
	params.UID = UID;
	params.PlayerKey = PlayerKey;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PlayerBattleData != nullptr)
		*PlayerBattleData = params.PlayerBattleData;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.ResetCurRoundPlayerBattleDataList
// (Final, Native, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeRuntimePlayerBattleDataObject::ResetCurRoundPlayerBattleDataList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.ResetCurRoundPlayerBattleDataList");

	ACreativeRuntimePlayerBattleDataObject_ResetCurRoundPlayerBattleDataList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepTeamGameOutcomeConditionInfo
// (Final, Native, Public)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeRuntimePlayerBattleDataObject::OnRepTeamGameOutcomeConditionInfo(int TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepTeamGameOutcomeConditionInfo");

	ACreativeRuntimePlayerBattleDataObject_OnRepTeamGameOutcomeConditionInfo_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepCurRoundPlayerBattleDataInfo
// (Final, Native, Public)
// Parameters:
// uint64_t                       PlayerUID                      (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ChangeTeamID                   (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeRuntimePlayerBattleDataObject::OnRepCurRoundPlayerBattleDataInfo(uint64_t PlayerUID, uint64_t PlayerKey, int ChangeTeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepCurRoundPlayerBattleDataInfo");

	ACreativeRuntimePlayerBattleDataObject_OnRepCurRoundPlayerBattleDataInfo_Params params;
	params.PlayerUID = PlayerUID;
	params.PlayerKey = PlayerKey;
	params.ChangeTeamID = ChangeTeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetTeamGameOutcomeCondition
// (Final, Native, Protected)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimeTeamGameOutcomeConditionInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimeTeamGameOutcomeConditionInfo ACreativeRuntimePlayerBattleDataObject::GetTeamGameOutcomeCondition(int TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetTeamGameOutcomeCondition");

	ACreativeRuntimePlayerBattleDataObject_GetTeamGameOutcomeCondition_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundPlayerBattleData
// (Final, Native, Protected)
// Parameters:
// uint64_t                       PlayerUID                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimePlayerBattleDataInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimePlayerBattleDataInfo ACreativeRuntimePlayerBattleDataObject::GetCurRoundPlayerBattleData(uint64_t PlayerUID, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetCurRoundPlayerBattleData_Params params;
	params.PlayerUID = PlayerUID;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundAllPlayerBattleData
// (Final, Native, Protected)
// Parameters:
// TArray<struct FRuntimePlayerBattleDataInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRuntimePlayerBattleDataInfo> ACreativeRuntimePlayerBattleDataObject::GetCurRoundAllPlayerBattleData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundAllPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetCurRoundAllPlayerBattleData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundPlayerBattleData
// (Final, Native, Protected)
// Parameters:
// int                            RoundIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       PlayerUID                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimePlayerBattleDataInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimePlayerBattleDataInfo ACreativeRuntimePlayerBattleDataObject::GetCacheRoundPlayerBattleData(int RoundIndex, uint64_t PlayerUID, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetCacheRoundPlayerBattleData_Params params;
	params.RoundIndex = RoundIndex;
	params.PlayerUID = PlayerUID;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundBattleData
// (Final, Native, Protected)
// Parameters:
// int                            RoundIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimeCacheRoundBattleDataInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimeCacheRoundBattleDataInfo ACreativeRuntimePlayerBattleDataObject::GetCacheRoundBattleData(int RoundIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetCacheRoundBattleData_Params params;
	params.RoundIndex = RoundIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetAllRoundPlayerBattleData
// (Final, Native, Protected)
// Parameters:
// uint64_t                       PlayerUID                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimePlayerBattleDataInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimePlayerBattleDataInfo ACreativeRuntimePlayerBattleDataObject::GetAllRoundPlayerBattleData(uint64_t PlayerUID, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetAllRoundPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetAllRoundPlayerBattleData_Params params;
	params.PlayerUID = PlayerUID;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.CacheCurRoundBattleData
// (Final, Native, Protected)
// Parameters:
// int                            RoundIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeRuntimePlayerBattleDataObject::CacheCurRoundBattleData(int RoundIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.CacheCurRoundBattleData");

	ACreativeRuntimePlayerBattleDataObject_CacheCurRoundBattleData_Params params;
	params.RoundIndex = RoundIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSceneQueryManager.RemoveReplicateObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSceneQueryManager::RemoveReplicateObject(const struct FString& InstanceID, class UObject* Object)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.RemoveReplicateObject");

	UCreativeSceneQueryManager_RemoveReplicateObject_Params params;
	params.InstanceID = InstanceID;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSceneQueryManager.RemoveReplicateData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeSceneQueryManager::RemoveReplicateData(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.RemoveReplicateData");

	UCreativeSceneQueryManager_RemoveReplicateData_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSceneQueryManager.OnReceivePreReplicateDataRemove
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)

void UCreativeSceneQueryManager::OnReceivePreReplicateDataRemove(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.OnReceivePreReplicateDataRemove");

	UCreativeSceneQueryManager_OnReceivePreReplicateDataRemove_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataChange
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<class UObject*>         Objects                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeSceneQueryManager::OnReceivePostReplicateDataChange(const struct FString& ID, TArray<class UObject*> Objects)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataChange");

	UCreativeSceneQueryManager_OnReceivePostReplicateDataChange_Params params;
	params.ID = ID;
	params.Objects = Objects;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataAdd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<class UObject*>         Objects                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeSceneQueryManager::OnReceivePostReplicateDataAdd(const struct FString& ID, TArray<class UObject*> Objects)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataAdd");

	UCreativeSceneQueryManager_OnReceivePostReplicateDataAdd_Params params;
	params.ID = ID;
	params.Objects = Objects;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSceneQueryManager.GetReplicatedObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UCreativeSceneQueryManager::GetReplicatedObjects(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.GetReplicatedObjects");

	UCreativeSceneQueryManager_GetReplicatedObjects_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeSceneQueryManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeSceneQueryManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeSceneQueryManager* UCreativeSceneQueryManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.Get");

	UCreativeSceneQueryManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeSceneQueryManager.AddReplicateObjectPostDeferred
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FTransform              SpawnTransform                 (Parm, IsPlainOldData)
// class UObject*                 ReplicatedObject               (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSceneQueryManager::AddReplicateObjectPostDeferred(const struct FString& InstanceID, const struct FTransform& SpawnTransform, class UObject* ReplicatedObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.AddReplicateObjectPostDeferred");

	UCreativeSceneQueryManager_AddReplicateObjectPostDeferred_Params params;
	params.InstanceID = InstanceID;
	params.SpawnTransform = SpawnTransform;
	params.ReplicatedObject = ReplicatedObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSceneQueryManager.AddReplicateObjectDeferred
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class UClass*                  ObjectClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FTransform              SpawnTransform                 (Parm, IsPlainOldData)
// ESpawnActorCollisionHandlingMethod CollisionHandlingOverride      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeSceneQueryManager::AddReplicateObjectDeferred(const struct FString& InstanceID, class UClass* ObjectClass, const struct FString& Name, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.AddReplicateObjectDeferred");

	UCreativeSceneQueryManager_AddReplicateObjectDeferred_Params params;
	params.InstanceID = InstanceID;
	params.ObjectClass = ObjectClass;
	params.Name = Name;
	params.SpawnTransform = SpawnTransform;
	params.CollisionHandlingOverride = CollisionHandlingOverride;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeSceneQueryManager.AddReplicateObject
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class UClass*                  ObjectClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FTransform              SpawnTransform                 (Parm, IsPlainOldData)
// ESpawnActorCollisionHandlingMethod CollisionHandlingOverride      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeSceneQueryManager::AddReplicateObject(const struct FString& InstanceID, class UClass* ObjectClass, const struct FString& Name, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.AddReplicateObject");

	UCreativeSceneQueryManager_AddReplicateObject_Params params;
	params.InstanceID = InstanceID;
	params.ObjectClass = ObjectClass;
	params.Name = Name;
	params.SpawnTransform = SpawnTransform;
	params.CollisionHandlingOverride = CollisionHandlingOverride;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeSoftComponentManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeModeSoftComponentManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeSoftComponentManager* UCreativeModeSoftComponentManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeSoftComponentManager.Get");

	UCreativeModeSoftComponentManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.SoftStaticMeshComponent.SetSoftStaticMeshAsync
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 NewMeshPath                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USoftStaticMeshComponent::SetSoftStaticMeshAsync(struct FString* NewMeshPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.SetSoftStaticMeshAsync");

	USoftStaticMeshComponent_SetSoftStaticMeshAsync_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewMeshPath != nullptr)
		*NewMeshPath = params.NewMeshPath;

	return params.ReturnValue;
}


// Function Creative.SoftStaticMeshComponent.SetSoftStaticMesh
// (Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*             NewMesh                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetStaticMesh                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USoftStaticMeshComponent::SetSoftStaticMesh(class UStaticMesh* NewMesh, bool bSetStaticMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.SetSoftStaticMesh");

	USoftStaticMeshComponent_SetSoftStaticMesh_Params params;
	params.NewMesh = NewMesh;
	params.bSetStaticMesh = bSetStaticMesh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.SoftStaticMeshComponent.OnClientAsyncLoaded
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FSoftObjectPath         SoftObjectPath                 (Parm)

void USoftStaticMeshComponent::OnClientAsyncLoaded(const struct FSoftObjectPath& SoftObjectPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.OnClientAsyncLoaded");

	USoftStaticMeshComponent_OnClientAsyncLoaded_Params params;
	params.SoftObjectPath = SoftObjectPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.SoftStaticMeshComponent.LoadSoftStaticMeshImmediately
// (Final, Native, Public)

void USoftStaticMeshComponent::LoadSoftStaticMeshImmediately()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.LoadSoftStaticMeshImmediately");

	USoftStaticMeshComponent_LoadSoftStaticMeshImmediately_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSoftStaticMeshComponent.OnReturnToPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       RecycledSeq                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSoftStaticMeshComponent::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSoftStaticMeshComponent.OnReturnToPool");

	UCreativeSoftStaticMeshComponent_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSoftStaticMeshComponent.OnPickFromPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, ZeroConstructor)

void UCreativeSoftStaticMeshComponent::OnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSoftStaticMeshComponent.OnPickFromPool");

	UCreativeSoftStaticMeshComponent_OnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSpawnManager.OnUnitSpawned
// (Final, Native, Public)
// Parameters:
// class AActor*                  NewUnit                        (Parm, ZeroConstructor, IsPlainOldData)
// ESpecType                      SpecType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSpawnManager::OnUnitSpawned(class AActor* NewUnit, ESpecType SpecType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.OnUnitSpawned");

	UCreativeSpawnManager_OnUnitSpawned_Params params;
	params.NewUnit = NewUnit;
	params.SpecType = SpecType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSpawnManager.OnOwnedFakePlayerDead
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class ASTExtraBaseCharacter*   DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              KillingHitInfo                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 KillingHitImpulseDir           (Parm, IsPlainOldData)
// class UClass*                  KillingHitDamageType           (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSpawnManager::OnOwnedFakePlayerDead(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.OnOwnedFakePlayerDead");

	UCreativeSpawnManager_OnOwnedFakePlayerDead_Params params;
	params.DeadCharacter = DeadCharacter;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSpawnManager.OnOwnedAIPlayerDead
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class ASTExtraBaseCharacter*   DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              KillingHitInfo                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 KillingHitImpulseDir           (Parm, IsPlainOldData)
// class UClass*                  KillingHitDamageType           (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSpawnManager::OnOwnedAIPlayerDead(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.OnOwnedAIPlayerDead");

	UCreativeSpawnManager_OnOwnedAIPlayerDead_Params params;
	params.DeadCharacter = DeadCharacter;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSpawnManager.OnMonsterUnitDead
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class ASTExtraSimpleCharacter* DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              KillingHitInfo                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 KillingHitImpulseDir           (Parm, IsPlainOldData)
// class UClass*                  KillingHitDamageType           (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSpawnManager::OnMonsterUnitDead(class ASTExtraSimpleCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.OnMonsterUnitDead");

	UCreativeSpawnManager_OnMonsterUnitDead_Params params;
	params.DeadCharacter = DeadCharacter;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSpawnManager.OnDeadWithCategory
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// ESpecType                      Category                       (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSpawnManager::OnDeadWithCategory(ESpecType Category, class APawn* DeadCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.OnDeadWithCategory");

	UCreativeSpawnManager_OnDeadWithCategory_Params params;
	params.Category = Category;
	params.DeadCharacter = DeadCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSpawnManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeSpawnManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeSpawnManager* UCreativeSpawnManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.Get");

	UCreativeSpawnManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStaticMeshComponent.OnReturnToPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       RecycledSeq                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeStaticMeshComponent::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStaticMeshComponent.OnReturnToPool");

	UCreativeStaticMeshComponent_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeStaticMeshComponent.OnPickFromPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, ZeroConstructor)

void UCreativeStaticMeshComponent::OnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStaticMeshComponent.OnPickFromPool");

	UCreativeStaticMeshComponent_OnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeStreamingManager.StreamingManagerEnable
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeStreamingManager::StreamingManagerEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.StreamingManagerEnable");

	UCreativeStreamingManager_StreamingManagerEnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.RemoveStreamingObject
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (ConstParm, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeStreamingManager::RemoveStreamingObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.RemoveStreamingObject");

	UCreativeStreamingManager_RemoveStreamingObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.GetOnGridCellIndex
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FIntVector              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FIntVector UCreativeStreamingManager::GetOnGridCellIndex(const struct FString& GridName, const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.GetOnGridCellIndex");

	UCreativeStreamingManager_GetOnGridCellIndex_Params params;
	params.GridName = GridName;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.GetGridLoadingRange
// (Final, Native, Public)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeStreamingManager::GetGridLoadingRange(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.GetGridLoadingRange");

	UCreativeStreamingManager_GetGridLoadingRange_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.GetGridList
// (Final, Native, Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UCreativeStreamingManager::GetGridList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.GetGridList");

	UCreativeStreamingManager_GetGridList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.GetGridCellWidthHeight
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UCreativeStreamingManager::GetGridCellWidthHeight(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.GetGridCellWidthHeight");

	UCreativeStreamingManager_GetGridCellWidthHeight_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeStreamingManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeStreamingManager* UCreativeStreamingManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.Get");

	UCreativeStreamingManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.ChangeStreamingObjectStreamingType
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (ConstParm, Parm, ZeroConstructor)
// ECreativeModeActorStreamingType NewStremaingType               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// ECreativeModeActorStreamingType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeActorStreamingType UCreativeStreamingManager::ChangeStreamingObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.ChangeStreamingObjectStreamingType");

	UCreativeStreamingManager_ChangeStreamingObjectStreamingType_Params params;
	params.InstanceID = InstanceID;
	params.NewStremaingType = NewStremaingType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.AddStreamingObject
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (ConstParm, Parm, ZeroConstructor)
// struct FCreativeModeStreamingParameters StreamingParameters            (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeStreamingManager::AddStreamingObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.AddStreamingObject");

	UCreativeStreamingManager_AddStreamingObject_Params params;
	params.InstanceID = InstanceID;
	params.StreamingParameters = StreamingParameters;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeWebSocketManager.SendMessage
// (Final, Native, Public)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void UCreativeWebSocketManager::SendMessage(const struct FString& Message)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.SendMessage");

	UCreativeWebSocketManager_SendMessage_Params params;
	params.Message = Message;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWebSocketManager.ReceiveOnPostSetLuaEventBridgeInstance
// (Event, Public, BlueprintEvent)

void UCreativeWebSocketManager::ReceiveOnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.ReceiveOnPostSetLuaEventBridgeInstance");

	UCreativeWebSocketManager_ReceiveOnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWebSocketManager.OnTickTimer
// (Final, Native, Public)

void UCreativeWebSocketManager::OnTickTimer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.OnTickTimer");

	UCreativeWebSocketManager_OnTickTimer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWebSocketManager.OnReceiveConnected
// (Event, Public, BlueprintEvent)

void UCreativeWebSocketManager::OnReceiveConnected()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.OnReceiveConnected");

	UCreativeWebSocketManager_OnReceiveConnected_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWebSocketManager.OnPostSetLuaEventBridgeInstance
// (Final, Native, Public)

void UCreativeWebSocketManager::OnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.OnPostSetLuaEventBridgeInstance");

	UCreativeWebSocketManager_OnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWebSocketManager.OnMessageSent
// (Final, Native, Public)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeWebSocketManager::OnMessageSent(const struct FString& Message)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.OnMessageSent");

	UCreativeWebSocketManager_OnMessageSent_Params params;
	params.Message = Message;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeWebSocketManager.OnMessageReceived
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeWebSocketManager::OnMessageReceived(const struct FString& Message)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.OnMessageReceived");

	UCreativeWebSocketManager_OnMessageReceived_Params params;
	params.Message = Message;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeWebSocketManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeWebSocketManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeWebSocketManager* UCreativeWebSocketManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.Get");

	UCreativeWebSocketManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeWebSocketManager.ConnectServer
// (Final, Native, Public)
// Parameters:
// struct FString                 ServerURL                      (Parm, ZeroConstructor)
// struct FString                 ServerProtocol                 (Parm, ZeroConstructor)

void UCreativeWebSocketManager::ConnectServer(const struct FString& ServerURL, const struct FString& ServerProtocol)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.ConnectServer");

	UCreativeWebSocketManager_ConnectServer_Params params;
	params.ServerURL = ServerURL;
	params.ServerProtocol = ServerProtocol;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWorldSubSystem.GetPhysicsBatchActor
// (Final, Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UCreativeWorldSubSystem::GetPhysicsBatchActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWorldSubSystem.GetPhysicsBatchActor");

	UCreativeWorldSubSystem_GetPhysicsBatchActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeWorldSubSystem.GetManagerCenter
// (Final, Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UCreativeWorldSubSystem::GetManagerCenter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWorldSubSystem.GetManagerCenter");

	UCreativeWorldSubSystem_GetManagerCenter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.DancerDeviceActor.OnRep_SyncPlayerCharacter
// (Final, Native, Protected)

void ADancerDeviceActor::OnRep_SyncPlayerCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DancerDeviceActor.OnRep_SyncPlayerCharacter");

	ADancerDeviceActor_OnRep_SyncPlayerCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.GameModeStateFighting_CreativeMode.PlayersInfoRecord
// (Native, Public)

void UGameModeStateFighting_CreativeMode::PlayersInfoRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.GameModeStateFighting_CreativeMode.PlayersInfoRecord");

	UGameModeStateFighting_CreativeMode_PlayersInfoRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.ShowAllPlayerManagerActor.TriggerRefresh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraBaseCharacter*   Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AShowAllPlayerManagerActor::TriggerRefresh(class ASTExtraBaseCharacter* Character, bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.TriggerRefresh");

	AShowAllPlayerManagerActor_TriggerRefresh_Params params;
	params.Character = Character;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.ShowAllPlayerManagerActor.RefreshTeamPoseData
// (Native, Event, Public, BlueprintEvent)

void AShowAllPlayerManagerActor::RefreshTeamPoseData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.RefreshTeamPoseData");

	AShowAllPlayerManagerActor_RefreshTeamPoseData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.ShowAllPlayerManagerActor.RefreshMapMarkData
// (Native, Event, Public, BlueprintEvent)

void AShowAllPlayerManagerActor::RefreshMapMarkData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.RefreshMapMarkData");

	AShowAllPlayerManagerActor_RefreshMapMarkData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.ShowAllPlayerManagerActor.OnTeamPosDataChange
// (Native, Event, Public, BlueprintEvent)

void AShowAllPlayerManagerActor::OnTeamPosDataChange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.OnTeamPosDataChange");

	AShowAllPlayerManagerActor_OnTeamPosDataChange_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.ShowAllPlayerManagerActor.OnRep_TeamPosData
// (Final, Native, Public)

void AShowAllPlayerManagerActor::OnRep_TeamPosData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.OnRep_TeamPosData");

	AShowAllPlayerManagerActor_OnRep_TeamPosData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.ShowAllPlayerManagerActor.IsCharacterValidForShow
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraBaseCharacter*   Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShowAllPlayerManagerActor::IsCharacterValidForShow(class ASTExtraBaseCharacter* Character)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.IsCharacterValidForShow");

	AShowAllPlayerManagerActor_IsCharacterValidForShow_Params params;
	params.Character = Character;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.ShowAllPlayerManagerActor.FlushBatchData
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            BatchSize                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurExtraSize                   (Parm, ZeroConstructor, IsPlainOldData)

void AShowAllPlayerManagerActor::FlushBatchData(int BatchSize, int CurExtraSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.FlushBatchData");

	AShowAllPlayerManagerActor_FlushBatchData_Params params;
	params.BatchSize = BatchSize;
	params.CurExtraSize = CurExtraSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.ShowAllPlayerManagerActor.EnableRefresh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AShowAllPlayerManagerActor::EnableRefresh(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.EnableRefresh");

	AShowAllPlayerManagerActor_EnableRefresh_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.ShowAllPlayerManagerActor.ClearAllMark
// (Final, Native, Public, BlueprintCallable)

void AShowAllPlayerManagerActor::ClearAllMark()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.ClearAllMark");

	AShowAllPlayerManagerActor_ClearAllMark_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

