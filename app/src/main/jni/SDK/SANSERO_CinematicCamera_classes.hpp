#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class CinematicCamera.CameraRig_Crane
// 0x0030 (0x0428 - 0x03F8)
class ACameraRig_Crane : public AActor
{
public:
	float                                              CraneYaw;                                                 // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CraneArmLength;                                           // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountPitch;                                          // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountYaw;                                            // 0x0401(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0402(0x0006) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneYawControl;                                          // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CranePitchControl;                                        // 0x0418(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneCameraMount;                                         // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return pStaticClass;
	}

};


// Class CinematicCamera.CameraRig_Rail
// 0x0018 (0x0410 - 0x03F8)
class ACameraRig_Rail : public AActor
{
public:
	class USceneComponent*                             TransformComponent;                                       // 0x03F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USplineComponent*                            RailSplineComponent;                                      // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RailCameraMount;                                          // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return pStaticClass;
	}

};


// Class CinematicCamera.CineCameraActor
// 0x0040 (0x09B0 - 0x0970)
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings               LookatTrackingSettings;                                   // 0x0970(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x09A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return pStaticClass;
	}


	class UCineCameraComponent* GetCineCameraComponent();
};


// Class CinematicCamera.CineCameraComponent
// 0x00B0 (0x09D0 - 0x0920)
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraLensSettings                         LensSettings;                                             // 0x0920(0x0014) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	struct FCameraFocusSettings                        FocusSettings;                                            // 0x0938(0x0038) (Edit, BlueprintVisible)
	float                                              CurrentFocalLength;                                       // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFocusDistance;                                     // 0x0978(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x097C(0x000C) MISSED OFFSET
	TArray<struct FNamedFilmbackPreset>                FilmbackPresets;                                          // 0x0988(0x0010) (ZeroConstructor, Config)
	TArray<struct FNamedLensPreset>                    LensPresets;                                              // 0x0998(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultFilmbackPresetName;                                // 0x09A8(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultLensPresetName;                                    // 0x09B8(0x0010) (ZeroConstructor, Config)
	float                                              DefaultLensFocalLength;                                   // 0x09C8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultLensFStop;                                         // 0x09CC(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return pStaticClass;
	}


	void SetLensPresetByName(const struct FString& InPresetName);
	void SetFilmbackPresetByName(const struct FString& InPresetName);
	float GetVerticalFieldOfView();
	struct FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	struct FString GetFilmbackPresetName();
};


}

