#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:15 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class UAEStateMachine.TestStatemachine
// 0x0008 (0x0400 - 0x03F8)
class ATestStatemachine : public AActor
{
public:
	class UUAEStateMachineComponent*                   UAEStateMachineComponent;                                 // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAEStateMachine.TestStatemachine");
		return pStaticClass;
	}

};


// Class UAEStateMachine.UAEStateMachineComponent
// 0x00B8 (0x01D0 - 0x0118)
class UUAEStateMachineComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBeforeTransientEvent;                                   // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAfterTransientEvent;                                    // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     Tag;                                                      // 0x0138(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UUAEState*>                           States;                                                   // 0x0148(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FUAEStateMachineTransition> Transitions;                                              // 0x0158(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FUAETransitionState                         StartState;                                               // 0x01A8(0x0010) (Edit, DisableEditOnInstance)
	struct FUAETransitionState                         EndState;                                                 // 0x01B8(0x0010) (Edit, DisableEditOnInstance)
	class UUAEState*                                   CurrentState;                                             // 0x01C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAEStateMachine.UAEStateMachineComponent");
		return pStaticClass;
	}


	void Start();
	void SetTag(const struct FString& InTag);
	void OnTransientEvent__DelegateSignature(const struct FString& TransientEvent, const struct FString& CurrentState, const struct FString& TransientToState);
	bool IsInState(const struct FString& StateName);
	class UUAEState* GetCurrentState();
	void ForceDoEvent(const struct FString& EventName);
	void Finish();
	void DoEvent(const struct FString& EventName);
	bool CanDoEvent(const struct FString& EventName);
};


// Class UAEStateMachine.UAEState
// 0x0000 (0x0028 - 0x0028)
class UUAEState : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAEStateMachine.UAEState");
		return pStaticClass;
	}


	void Update(float DeltaTime);
	void OnLeave(class UUAEState* TranitToState);
	void OnEnter(class UUAEState* PrevState);
};


}

