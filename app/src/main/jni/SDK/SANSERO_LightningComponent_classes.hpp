#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:15 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class LightningComponent.LightningActor
// 0x0008 (0x0400 - 0x03F8)
class ALightningActor : public AActor
{
public:
	class ULightningComponent*                         LightningComponent;                                       // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LightningComponent.LightningActor");
		return pStaticClass;
	}

};


// Class LightningComponent.LightningComponent
// 0x00C0 (0x08C0 - 0x0800)
class ULightningComponent : public UMeshComponent
{
public:
	int                                                MaxFractalTime;                                           // 0x0800(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PatternMask;                                              // 0x0804(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightningWidth;                                           // 0x0808(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WidthDecay;                                               // 0x080C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BrightnessDecay;                                          // 0x0810(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShrinkWidth;                                             // 0x0814(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0815(0x0003) MISSED OFFSET
	int                                                AtlasNum;                                                 // 0x0818(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SeedStart;                                                // 0x081C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SeedEnd;                                                  // 0x0828(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ZigZagFraction;                                           // 0x0834(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ZigZagDeviationRight;                                     // 0x083C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ZigZagDeviationUp;                                        // 0x0844(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ZigZagDeviationDecay;                                     // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ForkFraction;                                             // 0x0850(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ForkZigZagDeviationRight;                                 // 0x0858(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ForkZigZagDeviationUp;                                    // 0x0860(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ForkZigZagDeviationDecay;                                 // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ForkDeviationRight;                                       // 0x086C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ForkDeviationUp;                                          // 0x0874(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ForkDeviationForward;                                     // 0x087C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ForkDeviationDecay;                                       // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ForkLength;                                               // 0x0888(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ForkLengthDecay;                                          // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x0894(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LightningComponent.LightningComponent");
		return pStaticClass;
	}


	void SetWidthDecay(float InDecay);
	void SetShrinkWidth(bool InBool);
	void SetPatternMask(int InPatternMask);
	void SetMaxFractalTime(int InMaxFractalTime);
	void SetLightningWidth(float InWidth);
	void SetBrightnessDecay(float InDecay);
	void SetAtlasNum(int InVal);
	void RefreshLightningMesh();
	bool IsShrinkWidth();
	float GetWidthDecay();
	int GetPatternMask();
	int GetMaxFractalTime();
	float GetLightningWidth();
	float GetBrightnessDecay();
	float GetAtlasNum();
};


}

