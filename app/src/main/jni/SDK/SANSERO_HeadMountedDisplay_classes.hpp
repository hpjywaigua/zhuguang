#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary");
		return pStaticClass;
	}


	static void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	static void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin);
	static void SetSpectatorScreenTexture(class UTexture* InTexture);
	static void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack);
	static void SetSpectatorScreenMode(ESpectatorScreenMode Mode);
	static void SetClippingPlanes(float Near, float Far);
	static void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options);
	static bool IsSpectatorScreenModeControllable();
	static bool IsInLowPersistenceMode();
	static bool IsHeadMountedDisplayEnabled();
	static bool IsHeadMountedDisplayConnected();
	static bool HasValidTrackingPosition();
	static float GetWorldToMetersScale(class UObject* WorldContext);
	static void GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	static void GetTrackingSensorParameters(int Index, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, struct FVector* Origin, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, float* BottomFOV);
	static TEnumAsByte<EHMDTrackingOrigin> GetTrackingOrigin();
	static float GetScreenPercentage();
	static void GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	static void GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	static int GetNumOfTrackingSensors();
	static TEnumAsByte<EHMDWornState> GetHMDWornState();
	static struct FName GetHMDDeviceName();
	static void EnableLowPersistenceMode(bool bEnable);
	static bool EnableHMD(bool bEnable);
};


// Class HeadMountedDisplay.MotionControllerComponent
// 0x0060 (0x0840 - 0x07E0)
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x07E0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HeadMountedDisplay.MotionControllerComponent");
		return pStaticClass;
	}


	bool IsTracked();
};


// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary");
		return pStaticClass;
	}


	static void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	static bool IsMotionTrackingEnabledForDevice(int playerIndex, EControllerHand Hand);
	static bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
	static bool IsMotionTrackedDeviceCountManagementNecessary();
	static int GetMotionTrackingEnabledControllerCount();
	static int GetMaximumMotionTrackedControllerCount();
	static bool EnableMotionTrackingOfDevice(int playerIndex, EControllerHand Hand);
	static bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	static void DisableMotionTrackingOfDevice(int playerIndex, EControllerHand Hand);
	static void DisableMotionTrackingOfControllersForPlayer(int playerIndex);
	static void DisableMotionTrackingOfAllControllers();
	static void DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
};


// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0090 (0x01A8 - 0x0118)
class UVRNotificationsComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;    // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDTrackingInitializedDelegate;                           // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDRecenteredDelegate;                                    // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDLostDelegate;                                          // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDReconnectedDelegate;                                   // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDConnectCanceledDelegate;                               // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDPutOnHeadDelegate;                                     // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDRemovedFromHeadDelegate;                               // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    VRControllerRecenteredDelegate;                           // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HeadMountedDisplay.VRNotificationsComponent");
		return pStaticClass;
	}

};


}

