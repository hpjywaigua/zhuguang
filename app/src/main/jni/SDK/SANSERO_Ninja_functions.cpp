// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:14 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function Ninja.BattleFieldCircle.StartMove
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 StartCircle                    (Parm, IsPlainOldData)
// struct FVector                 EndCircle                      (Parm, IsPlainOldData)
// float                          MoveTime                       (Parm, ZeroConstructor, IsPlainOldData)

void ABattleFieldCircle::StartMove(const struct FVector& StartCircle, const struct FVector& EndCircle, float MoveTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Ninja.BattleFieldCircle.StartMove");

	ABattleFieldCircle_StartMove_Params params;
	params.StartCircle = StartCircle;
	params.EndCircle = EndCircle;
	params.MoveTime = MoveTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Ninja.BattleFieldCircle.SetCircle
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 circle                         (Parm, IsPlainOldData)

void ABattleFieldCircle::SetCircle(const struct FVector& circle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Ninja.BattleFieldCircle.SetCircle");

	ABattleFieldCircle_SetCircle_Params params;
	params.circle = circle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Ninja.BattleFieldCircle.OnRep_CircleMoveInfo
// (Native, Event, Public, BlueprintEvent)

void ABattleFieldCircle::OnRep_CircleMoveInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Ninja.BattleFieldCircle.OnRep_CircleMoveInfo");

	ABattleFieldCircle_OnRep_CircleMoveInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Ninja.BattleFieldCircle.IsInBlueCircle
// (Final, Native, Public)
// Parameters:
// class AActor*                  uActor                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABattleFieldCircle::IsInBlueCircle(class AActor* uActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Ninja.BattleFieldCircle.IsInBlueCircle");

	ABattleFieldCircle_IsInBlueCircle_Params params;
	params.uActor = uActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ninja.BattleFieldCircle.InitCircle
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 InitCircle                     (Parm, IsPlainOldData)

void ABattleFieldCircle::InitCircle(const struct FVector& InitCircle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Ninja.BattleFieldCircle.InitCircle");

	ABattleFieldCircle_InitCircle_Params params;
	params.InitCircle = InitCircle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Ninja.BattleFieldCircle.GetAllPlayerInCircle
// (Final, Native, Public)
// Parameters:
// TArray<uint32_t>               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<uint32_t> ABattleFieldCircle::GetAllPlayerInCircle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Ninja.BattleFieldCircle.GetAllPlayerInCircle");

	ABattleFieldCircle_GetAllPlayerInCircle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ninja.BattleFieldCircle.CircleMove
// (Final, Native, Public)

void ABattleFieldCircle::CircleMove()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Ninja.BattleFieldCircle.CircleMove");

	ABattleFieldCircle_CircleMove_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Ninja.BattleFieldCircle.CheckInCircle
// (Final, Native, Public)

void ABattleFieldCircle::CheckInCircle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Ninja.BattleFieldCircle.CheckInCircle");

	ABattleFieldCircle_CheckInCircle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

