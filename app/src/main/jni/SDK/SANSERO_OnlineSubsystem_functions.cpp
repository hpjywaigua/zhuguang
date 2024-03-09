// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:15 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Match                          (Parm, ZeroConstructor)
// bool                           bDidBecomeActive               (Parm, ZeroConstructor, IsPlainOldData)

void UTurnBasedMatchInterface::OnMatchReceivedTurn(const struct FString& Match, bool bDidBecomeActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn");

	UTurnBasedMatchInterface_OnMatchReceivedTurn_Params params;
	params.Match = Match;
	params.bDidBecomeActive = bDidBecomeActive;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Match                          (Parm, ZeroConstructor)

void UTurnBasedMatchInterface::OnMatchEnded(const struct FString& Match)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded");

	UTurnBasedMatchInterface_OnMatchEnded_Params params;
	params.Match = Match;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

