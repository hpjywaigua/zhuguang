// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:14 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function AutoRobot.AutoTestInterface.StarJumpPlane
// (Final, Native, Public)

void UAutoTestInterface::StarJumpPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestInterface.StarJumpPlane");

	UAutoTestInterface_StarJumpPlane_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.Swipe
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InPath                         (Parm, ZeroConstructor)
// float                          Duringtime                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            StartX                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            StartY                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            EndX                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            EndY                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            TouchIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ControllerId                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ScreensizeX                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ScreensizeY                    (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::Swipe(const struct FString& InPath, float Duringtime, int StartX, int StartY, int EndX, int EndY, int TouchIndex, int ControllerId, int ScreensizeX, int ScreensizeY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.Swipe");

	UAutoTestSubsystem_Swipe_Params params;
	params.InPath = InPath;
	params.Duringtime = Duringtime;
	params.StartX = StartX;
	params.StartY = StartY;
	params.EndX = EndX;
	params.EndY = EndY;
	params.TouchIndex = TouchIndex;
	params.ControllerId = ControllerId;
	params.ScreensizeX = ScreensizeX;
	params.ScreensizeY = ScreensizeY;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.StopRecordInput
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::StopRecordInput()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.StopRecordInput");

	UAutoTestSubsystem_StopRecordInput_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.StopPlayInput
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::StopPlayInput()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.StopPlayInput");

	UAutoTestSubsystem_StopPlayInput_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.StartRemoteControl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Host                           (Parm, ZeroConstructor)
// int                            Port                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::StartRemoteControl(const struct FString& Name, const struct FString& Host, int Port)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.StartRemoteControl");

	UAutoTestSubsystem_StartRemoteControl_Params params;
	params.Name = Name;
	params.Host = Host;
	params.Port = Port;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.StartRecordInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Command                        (Parm, ZeroConstructor)

void UAutoTestSubsystem::StartRecordInput(const struct FString& Command)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.StartRecordInput");

	UAutoTestSubsystem_StartRecordInput_Params params;
	params.Command = Command;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.StartPlayInput
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::StartPlayInput()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.StartPlayInput");

	UAutoTestSubsystem_StartPlayInput_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.SetCustomRouteLine
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::SetCustomRouteLine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.SetCustomRouteLine");

	UAutoTestSubsystem_SetCustomRouteLine_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.RegisterInputProcessor
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::RegisterInputProcessor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.RegisterInputProcessor");

	UAutoTestSubsystem_RegisterInputProcessor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.PVEAutoTestGetEnemyLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAutoTestSubsystem::PVEAutoTestGetEnemyLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.PVEAutoTestGetEnemyLocation");

	UAutoTestSubsystem_PVEAutoTestGetEnemyLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.PubgmSimulateActionClientEx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SimulateType                   (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::PubgmSimulateActionClientEx(int SimulateType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.PubgmSimulateActionClientEx");

	UAutoTestSubsystem_PubgmSimulateActionClientEx_Params params;
	params.SimulateType = SimulateType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.ParsePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 SrcStr                         (Parm, ZeroConstructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAutoTestSubsystem::ParsePoint(const struct FString& SrcStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.ParsePoint");

	UAutoTestSubsystem_ParsePoint_Params params;
	params.SrcStr = SrcStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.OpenDebugg
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::OpenDebugg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.OpenDebugg");

	UAutoTestSubsystem_OpenDebugg_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.OnStopAutoTest
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::OnStopAutoTest()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.OnStopAutoTest");

	UAutoTestSubsystem_OnStopAutoTest_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.OnStartAutoTest
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::OnStartAutoTest()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.OnStartAutoTest");

	UAutoTestSubsystem_OnStartAutoTest_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.OnGameStart
// (Final, Native, Public, Const)

void UAutoTestSubsystem::OnGameStart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.OnGameStart");

	UAutoTestSubsystem_OnGameStart_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.OnGameEnd
// (Final, Native, Public, Const)

void UAutoTestSubsystem::OnGameEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.OnGameEnd");

	UAutoTestSubsystem_OnGameEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.IsUIAutoTest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutoTestSubsystem::IsUIAutoTest()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.IsUIAutoTest");

	UAutoTestSubsystem_IsUIAutoTest_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.IsSecAutoRunTest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutoTestSubsystem::IsSecAutoRunTest()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.IsSecAutoRunTest");

	UAutoTestSubsystem_IsSecAutoRunTest_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.IsGAutomatorTest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutoTestSubsystem::IsGAutomatorTest()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.IsGAutomatorTest");

	UAutoTestSubsystem_IsGAutomatorTest_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.IsAutoRunTestGamePVEProfile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutoTestSubsystem::IsAutoRunTestGamePVEProfile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.IsAutoRunTestGamePVEProfile");

	UAutoTestSubsystem_IsAutoRunTestGamePVEProfile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.IsAutoRunTestGamePVE
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutoTestSubsystem::IsAutoRunTestGamePVE()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.IsAutoRunTestGamePVE");

	UAutoTestSubsystem_IsAutoRunTestGamePVE_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.IsAutoRunTestGameBindComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutoTestSubsystem::IsAutoRunTestGameBindComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.IsAutoRunTestGameBindComponent");

	UAutoTestSubsystem_IsAutoRunTestGameBindComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.IsAutoRunTestGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutoTestSubsystem::IsAutoRunTestGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.IsAutoRunTestGame");

	UAutoTestSubsystem_IsAutoRunTestGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.GetWidgetPathByPos
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            StartX                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            StartY                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ScreensizeX                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ScreensizeY                    (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::GetWidgetPathByPos(int StartX, int StartY, int ScreensizeX, int ScreensizeY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.GetWidgetPathByPos");

	UAutoTestSubsystem_GetWidgetPathByPos_Params params;
	params.StartX = StartX;
	params.StartY = StartY;
	params.ScreensizeX = ScreensizeX;
	params.ScreensizeY = ScreensizeY;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.GetRuntimeProfileData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAutoTestSubsystem::GetRuntimeProfileData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.GetRuntimeProfileData");

	UAutoTestSubsystem_GetRuntimeProfileData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.GetAutoTestInterface
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAutoTestInterface*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAutoTestInterface* UAutoTestSubsystem::GetAutoTestInterface()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.GetAutoTestInterface");

	UAutoTestSubsystem_GetAutoTestInterface_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.GetAutoRunTestServerIdx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAutoTestSubsystem::GetAutoRunTestServerIdx()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.GetAutoRunTestServerIdx");

	UAutoTestSubsystem_GetAutoRunTestServerIdx_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.GetAutoRunPassWD
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAutoTestSubsystem::GetAutoRunPassWD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.GetAutoRunPassWD");

	UAutoTestSubsystem_GetAutoRunPassWD_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.GetAutoRunLuaTest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAutoTestSubsystem::GetAutoRunLuaTest()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.GetAutoRunLuaTest");

	UAutoTestSubsystem_GetAutoRunLuaTest_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.GetAutoRunAccount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAutoTestSubsystem::GetAutoRunAccount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.GetAutoRunAccount");

	UAutoTestSubsystem_GetAutoRunAccount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.CloseDebugg
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::CloseDebugg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.CloseDebugg");

	UAutoTestSubsystem_CloseDebugg_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.ClickButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InPath                         (Parm, ZeroConstructor)
// float                          Duringtime                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            StartX                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            StartY                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            EndX                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            EndY                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            TouchIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ControllerId                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ScreensizeX                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ScreensizeY                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UsePos                         (Parm, ZeroConstructor)

void UAutoTestSubsystem::ClickButton(const struct FString& InPath, float Duringtime, int StartX, int StartY, int EndX, int EndY, int TouchIndex, int ControllerId, int ScreensizeX, int ScreensizeY, const struct FString& UsePos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.ClickButton");

	UAutoTestSubsystem_ClickButton_Params params;
	params.InPath = InPath;
	params.Duringtime = Duringtime;
	params.StartX = StartX;
	params.StartY = StartY;
	params.EndX = EndX;
	params.EndY = EndY;
	params.TouchIndex = TouchIndex;
	params.ControllerId = ControllerId;
	params.ScreensizeX = ScreensizeX;
	params.ScreensizeY = ScreensizeY;
	params.UsePos = UsePos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.CheckStaticMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeformationDistance            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckComplexCollisionQuery     (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::CheckStaticMesh(float Radius, float DeformationDistance, bool CheckComplexCollisionQuery)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.CheckStaticMesh");

	UAutoTestSubsystem_CheckStaticMesh_Params params;
	params.Radius = Radius;
	params.DeformationDistance = DeformationDistance;
	params.CheckComplexCollisionQuery = CheckComplexCollisionQuery;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestWaitForUIWithName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UIName                         (Parm, ZeroConstructor)

void UAutoTestSubsystem::AutoTestWaitForUIWithName(const struct FString& UIName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestWaitForUIWithName");

	UAutoTestSubsystem_AutoTestWaitForUIWithName_Params params;
	params.UIName = UIName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestWaitForSecond
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            sec                            (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestWaitForSecond(int sec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestWaitForSecond");

	UAutoTestSubsystem_AutoTestWaitForSecond_Params params;
	params.sec = sec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestWaitForJumpPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutoTestSubsystem::AutoTestWaitForJumpPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestWaitForJumpPlane");

	UAutoTestSubsystem_AutoTestWaitForJumpPlane_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestVehicleDriverShoot
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::AutoTestVehicleDriverShoot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestVehicleDriverShoot");

	UAutoTestSubsystem_AutoTestVehicleDriverShoot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestVaultWall
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::AutoTestVaultWall()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestVaultWall");

	UAutoTestSubsystem_AutoTestVaultWall_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestUsePropSkillClientEx
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::AutoTestUsePropSkillClientEx()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestUsePropSkillClientEx");

	UAutoTestSubsystem_AutoTestUsePropSkillClientEx_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestUseItemClientEx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestUseItemClientEx(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestUseItemClientEx");

	UAutoTestSubsystem_AutoTestUseItemClientEx_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestUseItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestUseItem(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestUseItem");

	UAutoTestSubsystem_AutoTestUseItem_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestUpgradePropSkillClientEx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestUpgradePropSkillClientEx(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestUpgradePropSkillClientEx");

	UAutoTestSubsystem_AutoTestUpgradePropSkillClientEx_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestToggleVehicleSync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestToggleVehicleSync(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestToggleVehicleSync");

	UAutoTestSubsystem_AutoTestToggleVehicleSync_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestThrowBoomOnlyClientEx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestThrowBoomOnlyClientEx(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestThrowBoomOnlyClientEx");

	UAutoTestSubsystem_AutoTestThrowBoomOnlyClientEx_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestThrowBoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestThrowBoom(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestThrowBoom");

	UAutoTestSubsystem_AutoTestThrowBoom_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestSwitchWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            WeaponType                     (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestSwitchWeapon(int WeaponType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestSwitchWeapon");

	UAutoTestSubsystem_AutoTestSwitchWeapon_Params params;
	params.WeaponType = WeaponType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestSwitchMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunName                        (Parm, ZeroConstructor)

void UAutoTestSubsystem::AutoTestSwitchMode(const struct FString& FunName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestSwitchMode");

	UAutoTestSubsystem_AutoTestSwitchMode_Params params;
	params.FunName = FunName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestStopRecordStats
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::AutoTestStopRecordStats()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestStopRecordStats");

	UAutoTestSubsystem_AutoTestStopRecordStats_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestStatsCommand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Command                        (Parm, ZeroConstructor)

void UAutoTestSubsystem::AutoTestStatsCommand(const struct FString& Command)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestStatsCommand");

	UAutoTestSubsystem_AutoTestStatsCommand_Params params;
	params.Command = Command;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestStartRecordStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FileStr                        (Parm, ZeroConstructor)

void UAutoTestSubsystem::AutoTestStartRecordStats(const struct FString& FileStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestStartRecordStats");

	UAutoTestSubsystem_AutoTestStartRecordStats_Params params;
	params.FileStr = FileStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestStartFireOnlyClientEx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InX                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            InY                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            InZ                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            sec                            (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestStartFireOnlyClientEx(int InX, int InY, int InZ, int sec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestStartFireOnlyClientEx");

	UAutoTestSubsystem_AutoTestStartFireOnlyClientEx_Params params;
	params.InX = InX;
	params.InY = InY;
	params.InZ = InZ;
	params.sec = sec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestStartFire
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InX                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            InY                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            InZ                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            sec                            (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestStartFire(int InX, int InY, int InZ, int sec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestStartFire");

	UAutoTestSubsystem_AutoTestStartFire_Params params;
	params.InX = InX;
	params.InY = InY;
	params.InZ = InZ;
	params.sec = sec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestSpecating
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LeftTeamCnt                    (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestSpecating(int LeftTeamCnt)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestSpecating");

	UAutoTestSubsystem_AutoTestSpecating_Params params;
	params.LeftTeamCnt = LeftTeamCnt;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestSpawnVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ResPath                        (Parm, ZeroConstructor)

void UAutoTestSubsystem::AutoTestSpawnVehicle(const struct FString& ResPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestSpawnVehicle");

	UAutoTestSubsystem_AutoTestSpawnVehicle_Params params;
	params.ResPath = ResPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestSpawnAI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          PosiX                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          PosiY                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          PosiZ                          (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestSpawnAI(int ID, float PosiX, float PosiY, float PosiZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestSpawnAI");

	UAutoTestSubsystem_AutoTestSpawnAI_Params params;
	params.ID = ID;
	params.PosiX = PosiX;
	params.PosiY = PosiY;
	params.PosiZ = PosiZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestSetVehicleRotation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InX                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            InY                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            InZ                            (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestSetVehicleRotation(int InX, int InY, int InZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestSetVehicleRotation");

	UAutoTestSubsystem_AutoTestSetVehicleRotation_Params params;
	params.InX = InX;
	params.InY = InY;
	params.InZ = InZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestSetRecordFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Frequency                      (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestSetRecordFrequency(int Frequency)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestSetRecordFrequency");

	UAutoTestSubsystem_AutoTestSetRecordFrequency_Params params;
	params.Frequency = Frequency;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestSetActorRotation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InRate                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          InSpeed                        (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestSetActorRotation(float InRate, float InSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestSetActorRotation");

	UAutoTestSubsystem_AutoTestSetActorRotation_Params params;
	params.InRate = InRate;
	params.InSpeed = InSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestSetActorPitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InRate                         (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestSetActorPitch(float InRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestSetActorPitch");

	UAutoTestSubsystem_AutoTestSetActorPitch_Params params;
	params.InRate = InRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestSetActorFacePoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InX                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            InY                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            InZ                            (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestSetActorFacePoint(int InX, int InY, int InZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestSetActorFacePoint");

	UAutoTestSubsystem_AutoTestSetActorFacePoint_Params params;
	params.InX = InX;
	params.InY = InY;
	params.InZ = InZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestSendBuffertoSvr
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestSendBuffertoSvr(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestSendBuffertoSvr");

	UAutoTestSubsystem_AutoTestSendBuffertoSvr_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestReloadOnlyClientEx
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::AutoTestReloadOnlyClientEx()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestReloadOnlyClientEx");

	UAutoTestSubsystem_AutoTestReloadOnlyClientEx_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestPickupItemOnlyClientEx
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UAutoTestSubsystem::AutoTestPickupItemOnlyClientEx()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestPickupItemOnlyClientEx");

	UAutoTestSubsystem_AutoTestPickupItemOnlyClientEx_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestPickupItem
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UAutoTestSubsystem::AutoTestPickupItem(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestPickupItem");

	UAutoTestSubsystem_AutoTestPickupItem_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestOpenTraceRPC
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::AutoTestOpenTraceRPC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestOpenTraceRPC");

	UAutoTestSubsystem_AutoTestOpenTraceRPC_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestOpenScope
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bOpenScope                     (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestOpenScope(bool bOpenScope)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestOpenScope");

	UAutoTestSubsystem_AutoTestOpenScope_Params params;
	params.bOpenScope = bOpenScope;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestOpenDoorOnlyClientEx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            bOpen                          (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestOpenDoorOnlyClientEx(int bOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestOpenDoorOnlyClientEx");

	UAutoTestSubsystem_AutoTestOpenDoorOnlyClientEx_Params params;
	params.bOpen = bOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestMustDie
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LeftTeamCnt                    (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestMustDie(int LeftTeamCnt)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestMustDie");

	UAutoTestSubsystem_AutoTestMustDie_Params params;
	params.LeftTeamCnt = LeftTeamCnt;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestMoveVehicleForward
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          rate                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          sec                            (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestMoveVehicleForward(float Speed, float rate, float sec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestMoveVehicleForward");

	UAutoTestSubsystem_AutoTestMoveVehicleForward_Params params;
	params.Speed = Speed;
	params.rate = rate;
	params.sec = sec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestMoveToPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InX                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            InY                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            InZ                            (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestMoveToPoint(int InX, int InY, int InZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestMoveToPoint");

	UAutoTestSubsystem_AutoTestMoveToPoint_Params params;
	params.InX = InX;
	params.InY = InY;
	params.InZ = InZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestJumpPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            sec                            (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestJumpPlane(int sec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestJumpPlane");

	UAutoTestSubsystem_AutoTestJumpPlane_Params params;
	params.sec = sec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestJump
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::AutoTestJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestJump");

	UAutoTestSubsystem_AutoTestJump_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestIsOnVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutoTestSubsystem::AutoTestIsOnVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestIsOnVehicle");

	UAutoTestSubsystem_AutoTestIsOnVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestIsDriver
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutoTestSubsystem::AutoTestIsDriver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestIsDriver");

	UAutoTestSubsystem_AutoTestIsDriver_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestIsCurrentCommandFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutoTestSubsystem::AutoTestIsCurrentCommandFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestIsCurrentCommandFinished");

	UAutoTestSubsystem_AutoTestIsCurrentCommandFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestInputMovement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InRate                         (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestInputMovement(float InRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestInputMovement");

	UAutoTestSubsystem_AutoTestInputMovement_Params params;
	params.InRate = InRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestInputKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// TEnumAsByte<EInputEvent>       EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          AmountDepressed                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bGamepad                       (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestInputKey(const struct FString& Key, TEnumAsByte<EInputEvent> EventType, float AmountDepressed, bool bGamepad)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestInputKey");

	UAutoTestSubsystem_AutoTestInputKey_Params params;
	params.Key = Key;
	params.EventType = EventType;
	params.AmountDepressed = AmountDepressed;
	params.bGamepad = bGamepad;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGMVehicleMoveAndTowardClientEx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InX                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          InY                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          InZ                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          InX1                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          InY1                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          InZ1                           (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestGMVehicleMoveAndTowardClientEx(float InX, float InY, float InZ, float InX1, float InY1, float InZ1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGMVehicleMoveAndTowardClientEx");

	UAutoTestSubsystem_AutoTestGMVehicleMoveAndTowardClientEx_Params params;
	params.InX = InX;
	params.InY = InY;
	params.InZ = InZ;
	params.InX1 = InX1;
	params.InY1 = InY1;
	params.InZ1 = InZ1;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGMGotoClientEx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InX                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            InY                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            InZ                            (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestGMGotoClientEx(int InX, int InY, int InZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGMGotoClientEx");

	UAutoTestSubsystem_AutoTestGMGotoClientEx_Params params;
	params.InX = InX;
	params.InY = InY;
	params.InZ = InZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGMGoto
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InX                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            InY                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            InZ                            (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestGMGoto(int InX, int InY, int InZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGMGoto");

	UAutoTestSubsystem_AutoTestGMGoto_Params params;
	params.InX = InX;
	params.InY = InY;
	params.InZ = InZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGMCommand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Command                        (Parm, ZeroConstructor)

void UAutoTestSubsystem::AutoTestGMCommand(const struct FString& Command)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGMCommand");

	UAutoTestSubsystem_AutoTestGMCommand_Params params;
	params.Command = Command;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetVehicleLocationClientEx
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAutoTestSubsystem::AutoTestGetVehicleLocationClientEx()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetVehicleLocationClientEx");

	UAutoTestSubsystem_AutoTestGetVehicleLocationClientEx_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetVehicleLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAutoTestSubsystem::AutoTestGetVehicleLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetVehicleLocation");

	UAutoTestSubsystem_AutoTestGetVehicleLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetRuntimeStats
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::AutoTestGetRuntimeStats()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetRuntimeStats");

	UAutoTestSubsystem_AutoTestGetRuntimeStats_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetRenderTimeDetail
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::AutoTestGetRenderTimeDetail()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetRenderTimeDetail");

	UAutoTestSubsystem_AutoTestGetRenderTimeDetail_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetPrimitivesDetail
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::AutoTestGetPrimitivesDetail()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetPrimitivesDetail");

	UAutoTestSubsystem_AutoTestGetPrimitivesDetail_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetOnVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestGetOnVehicle(int SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetOnVehicle");

	UAutoTestSubsystem_AutoTestGetOnVehicle_Params params;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetOffVehicle
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::AutoTestGetOffVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetOffVehicle");

	UAutoTestSubsystem_AutoTestGetOffVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetNearVehiclePos
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAutoTestSubsystem::AutoTestGetNearVehiclePos()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetNearVehiclePos");

	UAutoTestSubsystem_AutoTestGetNearVehiclePos_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetMemoryDetail
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::AutoTestGetMemoryDetail()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetMemoryDetail");

	UAutoTestSubsystem_AutoTestGetMemoryDetail_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetMapName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAutoTestSubsystem::AutoTestGetMapName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetMapName");

	UAutoTestSubsystem_AutoTestGetMapName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetLuaReturnValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 retval                         (Parm, ZeroConstructor)

void UAutoTestSubsystem::AutoTestGetLuaReturnValue(const struct FString& retval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetLuaReturnValue");

	UAutoTestSubsystem_AutoTestGetLuaReturnValue_Params params;
	params.retval = retval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetGameModeState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAutoTestSubsystem::AutoTestGetGameModeState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetGameModeState");

	UAutoTestSubsystem_AutoTestGetGameModeState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetFrameInfo
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAutoTestSubsystem::AutoTestGetFrameInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetFrameInfo");

	UAutoTestSubsystem_AutoTestGetFrameInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetDrawCallDetail
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::AutoTestGetDrawCallDetail()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetDrawCallDetail");

	UAutoTestSubsystem_AutoTestGetDrawCallDetail_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetDis2D
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InX1                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            InY1                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            InZ1                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            InX2                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            InY2                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            InZ2                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAutoTestSubsystem::AutoTestGetDis2D(int InX1, int InY1, int InZ1, int InX2, int InY2, int InZ2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetDis2D");

	UAutoTestSubsystem_AutoTestGetDis2D_Params params;
	params.InX1 = InX1;
	params.InY1 = InY1;
	params.InZ1 = InZ1;
	params.InX2 = InX2;
	params.InY2 = InY2;
	params.InZ2 = InZ2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetCircleLocationClientEx
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAutoTestSubsystem::AutoTestGetCircleLocationClientEx()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetCircleLocationClientEx");

	UAutoTestSubsystem_AutoTestGetCircleLocationClientEx_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetAvailableDeadBoxItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UAutoTestSubsystem::AutoTestGetAvailableDeadBoxItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetAvailableDeadBoxItem");

	UAutoTestSubsystem_AutoTestGetAvailableDeadBoxItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetAllActorNames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UAutoTestSubsystem::AutoTestGetAllActorNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetAllActorNames");

	UAutoTestSubsystem_AutoTestGetAllActorNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetActorName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAutoTestSubsystem::AutoTestGetActorName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetActorName");

	UAutoTestSubsystem_AutoTestGetActorName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetActorLocationListClientEx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ActorType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UAutoTestSubsystem::AutoTestGetActorLocationListClientEx(int ActorType, float RangeRadius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetActorLocationListClientEx");

	UAutoTestSubsystem_AutoTestGetActorLocationListClientEx_Params params;
	params.ActorType = ActorType;
	params.RangeRadius = RangeRadius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestGetActorLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 PlayerName                     (Parm, ZeroConstructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAutoTestSubsystem::AutoTestGetActorLocation(const struct FString& PlayerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestGetActorLocation");

	UAutoTestSubsystem_AutoTestGetActorLocation_Params params;
	params.PlayerName = PlayerName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestForceVehiclePosPullClientEx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNext                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAutoTestSubsystem::AutoTestForceVehiclePosPullClientEx(bool bNext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestForceVehiclePosPullClientEx");

	UAutoTestSubsystem_AutoTestForceVehiclePosPullClientEx_Params params;
	params.bNext = bNext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestForceDeleteCmdAnim
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::AutoTestForceDeleteCmdAnim()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestForceDeleteCmdAnim");

	UAutoTestSubsystem_AutoTestForceDeleteCmdAnim_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestEnableUITest
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::AutoTestEnableUITest()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestEnableUITest");

	UAutoTestSubsystem_AutoTestEnableUITest_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestEnableTickOrVisibilityByActorName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 actorName                      (Parm, ZeroConstructor)
// bool                           bEnableTick                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestEnableTickOrVisibilityByActorName(const struct FString& actorName, bool bEnableTick, bool bShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestEnableTickOrVisibilityByActorName");

	UAutoTestSubsystem_AutoTestEnableTickOrVisibilityByActorName_Params params;
	params.actorName = actorName;
	params.bEnableTick = bEnableTick;
	params.bShow = bShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestDropItemClientEx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            nCount                         (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestDropItemClientEx(int ItemId, int nCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestDropItemClientEx");

	UAutoTestSubsystem_AutoTestDropItemClientEx_Params params;
	params.ItemId = ItemId;
	params.nCount = nCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestContinuousMoveTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InX                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          InY                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          InZ                            (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestContinuousMoveTo(float InX, float InY, float InZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestContinuousMoveTo");

	UAutoTestSubsystem_AutoTestContinuousMoveTo_Params params;
	params.InX = InX;
	params.InY = InY;
	params.InZ = InZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestConsoleCommand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Command                        (Parm, ZeroConstructor)

void UAutoTestSubsystem::AutoTestConsoleCommand(const struct FString& Command)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestConsoleCommand");

	UAutoTestSubsystem_AutoTestConsoleCommand_Params params;
	params.Command = Command;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestCloseTraceRPC
// (Final, Native, Public, BlueprintCallable)

void UAutoTestSubsystem::AutoTestCloseTraceRPC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestCloseTraceRPC");

	UAutoTestSubsystem_AutoTestCloseTraceRPC_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoTestAddItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            nCount                         (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTestSubsystem::AutoTestAddItem(int ItemId, int nCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoTestAddItem");

	UAutoTestSubsystem_AutoTestAddItem_Params params;
	params.ItemId = ItemId;
	params.nCount = nCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoMoveToTargetPosClientEx
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 targetPos                      (Parm, IsPlainOldData)

void UAutoTestSubsystem::AutoMoveToTargetPosClientEx(const struct FVector& targetPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoMoveToTargetPosClientEx");

	UAutoTestSubsystem_AutoMoveToTargetPosClientEx_Params params;
	params.targetPos = targetPos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.AutoTestSubsystem.AutoMovePawnToTargetPosClientEx
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 targetPos                      (Parm, IsPlainOldData)

void UAutoTestSubsystem::AutoMovePawnToTargetPosClientEx(const struct FVector& targetPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.AutoTestSubsystem.AutoMovePawnToTargetPosClientEx");

	UAutoTestSubsystem_AutoMovePawnToTargetPosClientEx_Params params;
	params.targetPos = targetPos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.PubgmAutoRun.VehicleTowardTo
// (Final, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UPubgmAutoRun::VehicleTowardTo(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.PubgmAutoRun.VehicleTowardTo");

	UPubgmAutoRun_VehicleTowardTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.PubgmAutoRun.VehicleMoveTo
// (Final, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UPubgmAutoRun::VehicleMoveTo(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.PubgmAutoRun.VehicleMoveTo");

	UPubgmAutoRun_VehicleMoveTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.PubgmAutoRun.VehicleMoveAndTowardTo
// (Final, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          X1                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y1                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z1                             (Parm, ZeroConstructor, IsPlainOldData)

void UPubgmAutoRun::VehicleMoveAndTowardTo(float X, float Y, float Z, float X1, float Y1, float Z1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.PubgmAutoRun.VehicleMoveAndTowardTo");

	UPubgmAutoRun_VehicleMoveAndTowardTo_Params params;
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


// DelegateFunction AutoRobot.PubgmAutoRun.OnPubgmAutoRunSimulateAction__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            SimActionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UPubgmAutoRun::OnPubgmAutoRunSimulateAction__DelegateSignature(int SimActionType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction AutoRobot.PubgmAutoRun.OnPubgmAutoRunSimulateAction__DelegateSignature");

	UPubgmAutoRun_OnPubgmAutoRunSimulateAction__DelegateSignature_Params params;
	params.SimActionType = SimActionType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.PubgmAutoRun.NeedCmdAutoRun
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPubgmAutoRun::NeedCmdAutoRun()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.PubgmAutoRun.NeedCmdAutoRun");

	UPubgmAutoRun_NeedCmdAutoRun_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.PubgmAutoRun.NativeSimulateAction
// (Final, Native, Public)
// Parameters:
// int                            SimActionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UPubgmAutoRun::NativeSimulateAction(int SimActionType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.PubgmAutoRun.NativeSimulateAction");

	UPubgmAutoRun_NativeSimulateAction_Params params;
	params.SimActionType = SimActionType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.PubgmAutoRun.InitRoutePoint
// (Final, Native, Public)

void UPubgmAutoRun::InitRoutePoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.PubgmAutoRun.InitRoutePoint");

	UPubgmAutoRun_InitRoutePoint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.PubgmAutoRun.GMGotoPosition
// (Final, Native, Public)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UPubgmAutoRun::GMGotoPosition(int X, int Y, int Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.PubgmAutoRun.GMGotoPosition");

	UPubgmAutoRun_GMGotoPosition_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.PubgmAutoRun.GetRangeActorsPostions
// (Final, Native, Public, HasDefaults)
// Parameters:
// int                            ActorType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OriginPos                      (Parm, IsPlainOldData)
// float                          RangeRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UPubgmAutoRun::GetRangeActorsPostions(int ActorType, const struct FVector& OriginPos, float RangeRadius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.PubgmAutoRun.GetRangeActorsPostions");

	UPubgmAutoRun_GetRangeActorsPostions_Params params;
	params.ActorType = ActorType;
	params.OriginPos = OriginPos;
	params.RangeRadius = RangeRadius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.PubgmAutoRun.GetPoisonCircleLocation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UPubgmAutoRun::GetPoisonCircleLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.PubgmAutoRun.GetPoisonCircleLocation");

	UPubgmAutoRun_GetPoisonCircleLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.PubgmAutoRun.GetPlayerSpeed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            SpeedIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPubgmAutoRun::GetPlayerSpeed(int SpeedIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.PubgmAutoRun.GetPlayerSpeed");

	UPubgmAutoRun_GetPlayerSpeed_Params params;
	params.SpeedIdx = SpeedIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.PubgmAutoRun.GetNearestXTPointToVehicle
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FTransform              FirstPoint                     (Parm, OutParm, IsPlainOldData)
// struct FTransform              SecendPoint                    (Parm, OutParm, IsPlainOldData)
// bool                           bNext                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPubgmAutoRun::GetNearestXTPointToVehicle(bool bNext, struct FTransform* FirstPoint, struct FTransform* SecendPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.PubgmAutoRun.GetNearestXTPointToVehicle");

	UPubgmAutoRun_GetNearestXTPointToVehicle_Params params;
	params.bNext = bNext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FirstPoint != nullptr)
		*FirstPoint = params.FirstPoint;
	if (SecendPoint != nullptr)
		*SecendPoint = params.SecendPoint;

	return params.ReturnValue;
}


// Function AutoRobot.PubgmAutoRun.ForceVehiclePosPull
// (Final, Native, Public)
// Parameters:
// bool                           bNext                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPubgmAutoRun::ForceVehiclePosPull(bool bNext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.PubgmAutoRun.ForceVehiclePosPull");

	UPubgmAutoRun_ForceVehiclePosPull_Params params;
	params.bNext = bNext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.RemoteControlHelper.GetRuntimeStats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString URemoteControlHelper::GetRuntimeStats()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.RemoteControlHelper.GetRuntimeStats");

	URemoteControlHelper_GetRuntimeStats_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.RemoteControlHelper.GetDeviceName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString URemoteControlHelper::GetDeviceName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.RemoteControlHelper.GetDeviceName");

	URemoteControlHelper_GetDeviceName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.RemoteControlHelper.AutoPickup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ASTExtraBaseCharacter*   Player                         (Parm, ZeroConstructor, IsPlainOldData)

void URemoteControlHelper::AutoPickup(class ASTExtraBaseCharacter* Player)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.RemoteControlHelper.AutoPickup");

	URemoteControlHelper_AutoPickup_Params params;
	params.Player = Player;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.RemoteControlManager.Tick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URemoteControlManager::Tick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.RemoteControlManager.Tick");

	URemoteControlManager_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.RemoteControlManager.Stop
// (Final, Native, Public, BlueprintCallable)

void URemoteControlManager::Stop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.RemoteControlManager.Stop");

	URemoteControlManager_Stop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.RemoteControlManager.BeginWithFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URemoteControlManager::BeginWithFile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.RemoteControlManager.BeginWithFile");

	URemoteControlManager_BeginWithFile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.RemoteControlManager.Begin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Host                           (Parm, ZeroConstructor)
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URemoteControlManager::Begin(const struct FString& Name, const struct FString& Host, int Port)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.RemoteControlManager.Begin");

	URemoteControlManager_Begin_Params params;
	params.Name = Name;
	params.Host = Host;
	params.Port = Port;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoRobot.ShootWeaponAutoTestHandle.OnWeaponShootBullet
// (Final, Native, Public)
// Parameters:
// class ASTExtraShootWeapon*     ShootWeapon                    (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraShootWeaponBulletBase* Bullet                         (Parm, ZeroConstructor, IsPlainOldData)

void UShootWeaponAutoTestHandle::OnWeaponShootBullet(class ASTExtraShootWeapon* ShootWeapon, class ASTExtraShootWeaponBulletBase* Bullet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.ShootWeaponAutoTestHandle.OnWeaponShootBullet");

	UShootWeaponAutoTestHandle_OnWeaponShootBullet_Params params;
	params.ShootWeapon = ShootWeapon;
	params.Bullet = Bullet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.ShootWeaponAutoTestHandle.OnBulletImpact
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ASTExtraShootWeapon*     ShootWeapon                    (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraShootWeaponBulletBase* Bullet                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitRet                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UShootWeaponAutoTestHandle::OnBulletImpact(class ASTExtraShootWeapon* ShootWeapon, class ASTExtraShootWeaponBulletBase* Bullet, const struct FHitResult& HitRet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.ShootWeaponAutoTestHandle.OnBulletImpact");

	UShootWeaponAutoTestHandle_OnBulletImpact_Params params;
	params.ShootWeapon = ShootWeapon;
	params.Bullet = Bullet;
	params.HitRet = HitRet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.ShootWeaponAutoTestHandle.OnBulletDamage
// (Final, Native, Public)
// Parameters:
// int                            ShootID                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UShootWeaponAutoTestHandle::OnBulletDamage(int ShootID, float Damage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.ShootWeaponAutoTestHandle.OnBulletDamage");

	UShootWeaponAutoTestHandle_OnBulletDamage_Params params;
	params.ShootID = ShootID;
	params.Damage = Damage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoRobot.ShootWeaponAutoTestHandle.GenerateBulletsImpactJsonStringAndClearData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UShootWeaponAutoTestHandle::GenerateBulletsImpactJsonStringAndClearData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoRobot.ShootWeaponAutoTestHandle.GenerateBulletsImpactJsonStringAndClearData");

	UShootWeaponAutoTestHandle_GenerateBulletsImpactJsonStringAndClearData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

