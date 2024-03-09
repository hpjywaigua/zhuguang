#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:19 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// BlueprintGeneratedClass CameraPostProcessActor.CameraPostProcessActor_C
// 0x05A8 (0x09A0 - 0x03F8)
class ACameraPostProcessActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_LerpPPSettings_104_7E99B53D425173C51E1B2D83BB82148A;// 0x0408(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_LerpPPSettings_103_7E99B53D425173C51E1B2D83BB82148A;// 0x040C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_LerpPPSettings_102_7E99B53D425173C51E1B2D83BB82148A;// 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_LerpPPSettings_101_7E99B53D425173C51E1B2D83BB82148A;// 0x0414(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_LerpPPSettings__Direction_7E99B53D425173C51E1B2D83BB82148A;// 0x0418(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_LerpPPSettings;                                  // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          currentPostProcessVolumn;                                 // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                isLerp;                                                   // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EDepthOfFieldMethod>>           depthOfFieldMethodArray;                                  // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LerpAlpha;                                                // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isReverse;                                                // 0x044C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	struct FPostProcessSettings                        previousPPSettingsStruct;                                 // 0x0450(0x0550) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass CameraPostProcessActor.CameraPostProcessActor_C");
		return pStaticClass;
	}


	void UserConstructionScript();
	void Timeline_LerpPPSettings__FinishedFunc();
	void Timeline_LerpPPSettings__UpdateFunc();
	void Event_LerpPostProcessSettings(class APostProcessVolume* currentPPVolumn, const struct FBP_STRUCT_CameraPostProcessSettings_type& targetPPSettingsStruct, float Time, int ID, bool isReverse);
	void ExecuteUbergraph_CameraPostProcessActor(int EntryPoint);
};


}

