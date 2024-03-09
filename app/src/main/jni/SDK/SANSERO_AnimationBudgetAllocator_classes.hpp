#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:11 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// 0x0030 (0x0F00 - 0x0ED0)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0ED0(0x0020) MISSED OFFSET
	unsigned char                                      bAutoRegisterWithBudgetAllocator : 1;                     // 0x0EF0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAutoCalculateSignificance : 1;                           // 0x0EF0(0x0001) (Edit)
	unsigned char                                      bShouldUseActorRenderedFlag : 1;                          // 0x0EF0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0EF1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted");
		return pStaticClass;
	}


	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
};


// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary");
		return pStaticClass;
	}


	static void SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);
	static void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
};


}

