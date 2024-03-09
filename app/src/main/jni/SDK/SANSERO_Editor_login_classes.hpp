#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:19 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// BlueprintGeneratedClass Editor_login.Editor_login_C
// 0x0008 (0x0400 - 0x03F8)
class AEditor_login_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass Editor_login.Editor_login_C");
		return pStaticClass;
	}


	void SetFpsByIndex(int idx);
	void InpActEvt_Android_Back_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_BackSpace_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_B_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_G_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Editor_login(int EntryPoint);
};


}

